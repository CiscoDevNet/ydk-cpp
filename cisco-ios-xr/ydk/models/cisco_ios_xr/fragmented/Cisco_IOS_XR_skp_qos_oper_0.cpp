
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_skp_qos_oper_0.hpp"
#include "Cisco_IOS_XR_skp_qos_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_skp_qos_oper {

PlatformQos::PlatformQos()
    :
    nodes(std::make_shared<PlatformQos::Nodes>())
{
    nodes->parent = this;

    yang_name = "platform-qos"; yang_parent_name = "Cisco-IOS-XR-skp-qos-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PlatformQos::~PlatformQos()
{
}

bool PlatformQos::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PlatformQos::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PlatformQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PlatformQos::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PlatformQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformQos::clone_ptr() const
{
    return std::make_shared<PlatformQos>();
}

std::string PlatformQos::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformQos::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformQos::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformQos::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

PlatformQos::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "platform-qos"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformQos::Nodes::~Nodes()
{
}

bool PlatformQos::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformQos::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    bundle_interfaces(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces>())
	,capability(std::make_shared<PlatformQos::Nodes::Node::Capability>())
	,interfaces(std::make_shared<PlatformQos::Nodes::Node::Interfaces>())
{
    bundle_interfaces->parent = this;
    capability->parent = this;
    interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformQos::Nodes::Node::~Node()
{
}

bool PlatformQos::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool PlatformQos::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PlatformQos::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformQos::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces == nullptr)
        {
            bundle_interfaces = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces>();
        }
        return bundle_interfaces;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<PlatformQos::Nodes::Node::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PlatformQos::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bundle_interfaces != nullptr)
    {
        children["bundle-interfaces"] = bundle_interfaces;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PlatformQos::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interfaces" || name == "capability" || name == "interfaces" || name == "node-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterfaces()
{

    yang_name = "bundle-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::~BundleInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bundle_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interface")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    member_interfaces(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>())
{
    member_interfaces->parent = this;

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    return interface_name.is_set
	|| (member_interfaces !=  nullptr && member_interfaces->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (member_interfaces !=  nullptr && member_interfaces->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces == nullptr)
        {
            member_interfaces = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>();
        }
        return member_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(member_interfaces != nullptr)
    {
        children["member-interfaces"] = member_interfaces;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interfaces" || name == "interface-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterfaces()
{

    yang_name = "member-interfaces"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::~MemberInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_data() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-interface")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : member_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interface")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::MemberInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    bundle_input(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput>())
	,bundle_output(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput>())
{
    bundle_input->parent = this;
    bundle_output->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_data() const
{
    return interface_name.is_set
	|| (bundle_input !=  nullptr && bundle_input->has_data())
	|| (bundle_output !=  nullptr && bundle_output->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (bundle_input !=  nullptr && bundle_input->has_operation())
	|| (bundle_output !=  nullptr && bundle_output->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-input")
    {
        if(bundle_input == nullptr)
        {
            bundle_input = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput>();
        }
        return bundle_input;
    }

    if(child_yang_name == "bundle-output")
    {
        if(bundle_output == nullptr)
        {
            bundle_output = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput>();
        }
        return bundle_output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bundle_input != nullptr)
    {
        children["bundle-input"] = bundle_input;
    }

    if(bundle_output != nullptr)
    {
        children["bundle-output"] = bundle_output;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-input" || name == "bundle-output" || name == "interface-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::BundleInput()
    :
    header(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header>())
	,interface_parameters(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass>())
{
    header->parent = this;
    interface_parameters->parent = this;
    skywarp_qos_policy_class->parent = this;

    yang_name = "bundle-input"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::~BundleInput()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header>();
        }
        return header;
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters == nullptr)
        {
            interface_parameters = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters>();
        }
        return interface_parameters;
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class == nullptr)
        {
            skywarp_qos_policy_class = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass>();
        }
        return skywarp_qos_policy_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(interface_parameters != nullptr)
    {
        children["interface-parameters"] = interface_parameters;
    }

    if(skywarp_qos_policy_class != nullptr)
    {
        children["skywarp-qos-policy-class"] = skywarp_qos_policy_class;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "interface-parameters" || name == "skywarp-qos-policy-class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::Header()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    direction{YType::str, "direction"},
    classes{YType::uint16, "classes"}
{

    yang_name = "header"; yang_parent_name = "bundle-input"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::has_data() const
{
    return interface_name.is_set
	|| policy_name.is_set
	|| direction.is_set
	|| classes.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(classes.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (classes.is_set || is_set(classes.yfilter)) leaf_name_data.push_back(classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classes")
    {
        classes = value;
        classes.value_namespace = name_space;
        classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "classes")
    {
        classes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "policy-name" || name == "direction" || name == "classes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceParameters()
    :
    interface_config_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate>())
	,interface_program_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate>())
	,port_shaper_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate>())
{
    interface_config_rate->parent = this;
    interface_program_rate->parent = this;
    port_shaper_rate->parent = this;

    yang_name = "interface-parameters"; yang_parent_name = "bundle-input"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::has_data() const
{
    return (interface_config_rate !=  nullptr && interface_config_rate->has_data())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::has_operation() const
{
    return is_set(yfilter)
	|| (interface_config_rate !=  nullptr && interface_config_rate->has_operation())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_operation())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-config-rate")
    {
        if(interface_config_rate == nullptr)
        {
            interface_config_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate>();
        }
        return interface_config_rate;
    }

    if(child_yang_name == "interface-program-rate")
    {
        if(interface_program_rate == nullptr)
        {
            interface_program_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate>();
        }
        return interface_program_rate;
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate == nullptr)
        {
            port_shaper_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate>();
        }
        return port_shaper_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_config_rate != nullptr)
    {
        children["interface-config-rate"] = interface_config_rate;
    }

    if(interface_program_rate != nullptr)
    {
        children["interface-program-rate"] = interface_program_rate;
    }

    if(port_shaper_rate != nullptr)
    {
        children["port-shaper-rate"] = port_shaper_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-config-rate" || name == "interface-program-rate" || name == "port-shaper-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::InterfaceConfigRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "interface-config-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::~InterfaceConfigRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-config-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::InterfaceProgramRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "interface-program-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::~InterfaceProgramRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-program-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{

    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "bundle-input"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-pclass-st")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt>();
        c->parent = this;
        qos_show_pclass_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : qos_show_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-pclass-st")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::QosShowPclassSt()
    :
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"}
    	,
    queue(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue>())
	,shape(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape>())
	,wfq(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>())
	,police(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police>())
	,marking(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking>())
{
    queue->parent = this;
    shape->parent = this;
    wfq->parent = this;
    police->parent = this;
    marking->parent = this;

    yang_name = "qos-show-pclass-st"; yang_parent_name = "skywarp-qos-policy-class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::~QosShowPclassSt()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| (queue !=  nullptr && queue->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (marking !=  nullptr && marking->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| (queue !=  nullptr && queue->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (marking !=  nullptr && marking->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-pclass-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>();
        }
        return wfq;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police>();
        }
        return police;
    }

    if(child_yang_name == "marking")
    {
        if(marking == nullptr)
        {
            marking = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking>();
        }
        return marking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        children["wfq"] = wfq;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(marking != nullptr)
    {
        children["marking"] = marking;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "shape" || name == "wfq" || name == "police" || name == "marking" || name == "class-level" || name == "class-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::Queue()
    :
    queue_id{YType::uint32, "queue-id"},
    queue_type{YType::str, "queue-type"}
{

    yang_name = "queue"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_data() const
{
    return queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "queue-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Shape()
    :
    pir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>())
{
    pir->parent = this;
    pbs->parent = this;

    yang_name = "shape"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_data() const
{
    return (pir !=  nullptr && pir->has_data())
	|| (pbs !=  nullptr && pbs->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_operation() const
{
    return is_set(yfilter)
	|| (pir !=  nullptr && pir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>();
        }
        return pbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pir" || name == "pbs")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::Pir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::Pbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::Wfq()
    :
    excess_weight{YType::uint16, "excess-weight"}
    	,
    committed_weight(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>())
	,programmed_wfq(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>())
{
    committed_weight->parent = this;
    programmed_wfq->parent = this;

    yang_name = "wfq"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_data() const
{
    return excess_weight.is_set
	|| (committed_weight !=  nullptr && committed_weight->has_data())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_weight.yfilter)
	|| (committed_weight !=  nullptr && committed_weight->has_operation())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_weight.is_set || is_set(excess_weight.yfilter)) leaf_name_data.push_back(excess_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "committed-weight")
    {
        if(committed_weight == nullptr)
        {
            committed_weight = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>();
        }
        return committed_weight;
    }

    if(child_yang_name == "programmed-wfq")
    {
        if(programmed_wfq == nullptr)
        {
            programmed_wfq = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>();
        }
        return programmed_wfq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(committed_weight != nullptr)
    {
        children["committed-weight"] = committed_weight;
    }

    if(programmed_wfq != nullptr)
    {
        children["programmed-wfq"] = programmed_wfq;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-weight")
    {
        excess_weight = value;
        excess_weight.value_namespace = name_space;
        excess_weight.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-weight")
    {
        excess_weight.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "committed-weight" || name == "programmed-wfq" || name == "excess-weight")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::CommittedWeight()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "committed-weight"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::~CommittedWeight()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::ProgrammedWfq()
    :
    excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>())
	,sum_of_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    sum_of_bandwidth->parent = this;

    yang_name = "programmed-wfq"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::~ProgrammedWfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth == nullptr)
        {
            sum_of_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>();
        }
        return sum_of_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(sum_of_bandwidth != nullptr)
    {
        children["sum-of-bandwidth"] = sum_of_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sum-of-bandwidth" || name == "excess-ratio")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::Bandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bandwidth"; yang_parent_name = "programmed-wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::SumOfBandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "sum-of-bandwidth"; yang_parent_name = "programmed-wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Police()
    :
    policer_id{YType::uint32, "policer-id"},
    policer_type{YType::enumeration, "policer-type"}
    	,
    cir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>())
	,cbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>())
{
    cir->parent = this;
    cbs->parent = this;

    yang_name = "police"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_data() const
{
    return policer_id.is_set
	|| policer_type.is_set
	|| (cir !=  nullptr && cir->has_data())
	|| (cbs !=  nullptr && cbs->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policer_id.yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| (cir !=  nullptr && cir->has_operation())
	|| (cbs !=  nullptr && cbs->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_id.is_set || is_set(policer_id.yfilter)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>();
        }
        return cbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policer-id")
    {
        policer_id = value;
        policer_id.value_namespace = name_space;
        policer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policer-id")
    {
        policer_id.yfilter = yfilter;
    }
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir" || name == "cbs" || name == "policer-id" || name == "policer-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::Cir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::Cbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::Marking()
    :
    mark_only(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>())
	,police_conform(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>())
	,police_exceed(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>())
{
    mark_only->parent = this;
    police_conform->parent = this;
    police_exceed->parent = this;

    yang_name = "marking"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::~Marking()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_data() const
{
    return (mark_only !=  nullptr && mark_only->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_operation() const
{
    return is_set(yfilter)
	|| (mark_only !=  nullptr && mark_only->has_operation())
	|| (police_conform !=  nullptr && police_conform->has_operation())
	|| (police_exceed !=  nullptr && police_exceed->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-only")
    {
        if(mark_only == nullptr)
        {
            mark_only = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>();
        }
        return mark_only;
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform == nullptr)
        {
            police_conform = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>();
        }
        return police_conform;
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed == nullptr)
        {
            police_exceed = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>();
        }
        return police_exceed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mark_only != nullptr)
    {
        children["mark-only"] = mark_only;
    }

    if(police_conform != nullptr)
    {
        children["police-conform"] = police_conform;
    }

    if(police_exceed != nullptr)
    {
        children["police-exceed"] = police_exceed;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-only" || name == "police-conform" || name == "police-exceed")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkOnly()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "mark-only"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::~MarkOnly()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "mark-only"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-conform"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-conform"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-exceed"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-exceed"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::BundleOutput()
    :
    header(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header>())
	,interface_parameters(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass>())
{
    header->parent = this;
    interface_parameters->parent = this;
    skywarp_qos_policy_class->parent = this;

    yang_name = "bundle-output"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::~BundleOutput()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header>();
        }
        return header;
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters == nullptr)
        {
            interface_parameters = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters>();
        }
        return interface_parameters;
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class == nullptr)
        {
            skywarp_qos_policy_class = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass>();
        }
        return skywarp_qos_policy_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(interface_parameters != nullptr)
    {
        children["interface-parameters"] = interface_parameters;
    }

    if(skywarp_qos_policy_class != nullptr)
    {
        children["skywarp-qos-policy-class"] = skywarp_qos_policy_class;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "interface-parameters" || name == "skywarp-qos-policy-class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::Header()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    direction{YType::str, "direction"},
    classes{YType::uint16, "classes"}
{

    yang_name = "header"; yang_parent_name = "bundle-output"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::has_data() const
{
    return interface_name.is_set
	|| policy_name.is_set
	|| direction.is_set
	|| classes.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(classes.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (classes.is_set || is_set(classes.yfilter)) leaf_name_data.push_back(classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classes")
    {
        classes = value;
        classes.value_namespace = name_space;
        classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "classes")
    {
        classes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "policy-name" || name == "direction" || name == "classes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceParameters()
    :
    interface_config_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate>())
	,interface_program_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate>())
	,port_shaper_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate>())
{
    interface_config_rate->parent = this;
    interface_program_rate->parent = this;
    port_shaper_rate->parent = this;

    yang_name = "interface-parameters"; yang_parent_name = "bundle-output"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::has_data() const
{
    return (interface_config_rate !=  nullptr && interface_config_rate->has_data())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::has_operation() const
{
    return is_set(yfilter)
	|| (interface_config_rate !=  nullptr && interface_config_rate->has_operation())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_operation())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-config-rate")
    {
        if(interface_config_rate == nullptr)
        {
            interface_config_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate>();
        }
        return interface_config_rate;
    }

    if(child_yang_name == "interface-program-rate")
    {
        if(interface_program_rate == nullptr)
        {
            interface_program_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate>();
        }
        return interface_program_rate;
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate == nullptr)
        {
            port_shaper_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate>();
        }
        return port_shaper_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_config_rate != nullptr)
    {
        children["interface-config-rate"] = interface_config_rate;
    }

    if(interface_program_rate != nullptr)
    {
        children["interface-program-rate"] = interface_program_rate;
    }

    if(port_shaper_rate != nullptr)
    {
        children["port-shaper-rate"] = port_shaper_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-config-rate" || name == "interface-program-rate" || name == "port-shaper-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::InterfaceConfigRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "interface-config-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::~InterfaceConfigRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-config-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::InterfaceProgramRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "interface-program-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::~InterfaceProgramRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-program-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{

    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "bundle-output"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-pclass-st")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt>();
        c->parent = this;
        qos_show_pclass_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : qos_show_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-pclass-st")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::QosShowPclassSt()
    :
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"}
    	,
    queue(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue>())
	,shape(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape>())
	,wfq(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>())
	,police(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police>())
	,marking(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking>())
{
    queue->parent = this;
    shape->parent = this;
    wfq->parent = this;
    police->parent = this;
    marking->parent = this;

    yang_name = "qos-show-pclass-st"; yang_parent_name = "skywarp-qos-policy-class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::~QosShowPclassSt()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| (queue !=  nullptr && queue->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (marking !=  nullptr && marking->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| (queue !=  nullptr && queue->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (marking !=  nullptr && marking->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-pclass-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>();
        }
        return wfq;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police>();
        }
        return police;
    }

    if(child_yang_name == "marking")
    {
        if(marking == nullptr)
        {
            marking = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking>();
        }
        return marking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        children["wfq"] = wfq;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(marking != nullptr)
    {
        children["marking"] = marking;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "shape" || name == "wfq" || name == "police" || name == "marking" || name == "class-level" || name == "class-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::Queue()
    :
    queue_id{YType::uint32, "queue-id"},
    queue_type{YType::str, "queue-type"}
{

    yang_name = "queue"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_data() const
{
    return queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "queue-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Shape()
    :
    pir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>())
{
    pir->parent = this;
    pbs->parent = this;

    yang_name = "shape"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_data() const
{
    return (pir !=  nullptr && pir->has_data())
	|| (pbs !=  nullptr && pbs->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_operation() const
{
    return is_set(yfilter)
	|| (pir !=  nullptr && pir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>();
        }
        return pbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pir" || name == "pbs")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::Pir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::Pbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::Wfq()
    :
    excess_weight{YType::uint16, "excess-weight"}
    	,
    committed_weight(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>())
	,programmed_wfq(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>())
{
    committed_weight->parent = this;
    programmed_wfq->parent = this;

    yang_name = "wfq"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_data() const
{
    return excess_weight.is_set
	|| (committed_weight !=  nullptr && committed_weight->has_data())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_weight.yfilter)
	|| (committed_weight !=  nullptr && committed_weight->has_operation())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_weight.is_set || is_set(excess_weight.yfilter)) leaf_name_data.push_back(excess_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "committed-weight")
    {
        if(committed_weight == nullptr)
        {
            committed_weight = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>();
        }
        return committed_weight;
    }

    if(child_yang_name == "programmed-wfq")
    {
        if(programmed_wfq == nullptr)
        {
            programmed_wfq = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>();
        }
        return programmed_wfq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(committed_weight != nullptr)
    {
        children["committed-weight"] = committed_weight;
    }

    if(programmed_wfq != nullptr)
    {
        children["programmed-wfq"] = programmed_wfq;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-weight")
    {
        excess_weight = value;
        excess_weight.value_namespace = name_space;
        excess_weight.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-weight")
    {
        excess_weight.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "committed-weight" || name == "programmed-wfq" || name == "excess-weight")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::CommittedWeight()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "committed-weight"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::~CommittedWeight()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::ProgrammedWfq()
    :
    excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>())
	,sum_of_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    sum_of_bandwidth->parent = this;

    yang_name = "programmed-wfq"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::~ProgrammedWfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth == nullptr)
        {
            sum_of_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>();
        }
        return sum_of_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(sum_of_bandwidth != nullptr)
    {
        children["sum-of-bandwidth"] = sum_of_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sum-of-bandwidth" || name == "excess-ratio")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::Bandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bandwidth"; yang_parent_name = "programmed-wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::SumOfBandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "sum-of-bandwidth"; yang_parent_name = "programmed-wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Police()
    :
    policer_id{YType::uint32, "policer-id"},
    policer_type{YType::enumeration, "policer-type"}
    	,
    cir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>())
	,cbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>())
{
    cir->parent = this;
    cbs->parent = this;

    yang_name = "police"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_data() const
{
    return policer_id.is_set
	|| policer_type.is_set
	|| (cir !=  nullptr && cir->has_data())
	|| (cbs !=  nullptr && cbs->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policer_id.yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| (cir !=  nullptr && cir->has_operation())
	|| (cbs !=  nullptr && cbs->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_id.is_set || is_set(policer_id.yfilter)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>();
        }
        return cbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policer-id")
    {
        policer_id = value;
        policer_id.value_namespace = name_space;
        policer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policer-id")
    {
        policer_id.yfilter = yfilter;
    }
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir" || name == "cbs" || name == "policer-id" || name == "policer-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::Cir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::Cbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::Marking()
    :
    mark_only(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>())
	,police_conform(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>())
	,police_exceed(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>())
{
    mark_only->parent = this;
    police_conform->parent = this;
    police_exceed->parent = this;

    yang_name = "marking"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::~Marking()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_data() const
{
    return (mark_only !=  nullptr && mark_only->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_operation() const
{
    return is_set(yfilter)
	|| (mark_only !=  nullptr && mark_only->has_operation())
	|| (police_conform !=  nullptr && police_conform->has_operation())
	|| (police_exceed !=  nullptr && police_exceed->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-only")
    {
        if(mark_only == nullptr)
        {
            mark_only = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>();
        }
        return mark_only;
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform == nullptr)
        {
            police_conform = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>();
        }
        return police_conform;
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed == nullptr)
        {
            police_exceed = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>();
        }
        return police_exceed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mark_only != nullptr)
    {
        children["mark-only"] = mark_only;
    }

    if(police_conform != nullptr)
    {
        children["police-conform"] = police_conform;
    }

    if(police_exceed != nullptr)
    {
        children["police-exceed"] = police_exceed;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-only" || name == "police-conform" || name == "police-exceed")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkOnly()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "mark-only"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::~MarkOnly()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "mark-only"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-conform"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-conform"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-exceed"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-exceed"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Capability::Capability()
    :
    max_policy_maps{YType::uint32, "max-policy-maps"},
    max_policy_hierarchy{YType::uint32, "max-policy-hierarchy"},
    max_policy_name_length{YType::uint32, "max-policy-name-length"},
    max_classes_per_policy{YType::uint32, "max-classes-per-policy"},
    max_police_actions_per_class{YType::uint32, "max-police-actions-per-class"},
    max_marking_actions_per_class{YType::uint32, "max-marking-actions-per-class"},
    max_matches_per_class{YType::uint32, "max-matches-per-class"},
    max_classmap_name_length{YType::uint32, "max-classmap-name-length"},
    max_bundle_members{YType::uint32, "max-bundle-members"}
{

    yang_name = "capability"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Capability::~Capability()
{
}

bool PlatformQos::Nodes::Node::Capability::has_data() const
{
    return max_policy_maps.is_set
	|| max_policy_hierarchy.is_set
	|| max_policy_name_length.is_set
	|| max_classes_per_policy.is_set
	|| max_police_actions_per_class.is_set
	|| max_marking_actions_per_class.is_set
	|| max_matches_per_class.is_set
	|| max_classmap_name_length.is_set
	|| max_bundle_members.is_set;
}

bool PlatformQos::Nodes::Node::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_policy_maps.yfilter)
	|| ydk::is_set(max_policy_hierarchy.yfilter)
	|| ydk::is_set(max_policy_name_length.yfilter)
	|| ydk::is_set(max_classes_per_policy.yfilter)
	|| ydk::is_set(max_police_actions_per_class.yfilter)
	|| ydk::is_set(max_marking_actions_per_class.yfilter)
	|| ydk::is_set(max_matches_per_class.yfilter)
	|| ydk::is_set(max_classmap_name_length.yfilter)
	|| ydk::is_set(max_bundle_members.yfilter);
}

std::string PlatformQos::Nodes::Node::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_policy_maps.is_set || is_set(max_policy_maps.yfilter)) leaf_name_data.push_back(max_policy_maps.get_name_leafdata());
    if (max_policy_hierarchy.is_set || is_set(max_policy_hierarchy.yfilter)) leaf_name_data.push_back(max_policy_hierarchy.get_name_leafdata());
    if (max_policy_name_length.is_set || is_set(max_policy_name_length.yfilter)) leaf_name_data.push_back(max_policy_name_length.get_name_leafdata());
    if (max_classes_per_policy.is_set || is_set(max_classes_per_policy.yfilter)) leaf_name_data.push_back(max_classes_per_policy.get_name_leafdata());
    if (max_police_actions_per_class.is_set || is_set(max_police_actions_per_class.yfilter)) leaf_name_data.push_back(max_police_actions_per_class.get_name_leafdata());
    if (max_marking_actions_per_class.is_set || is_set(max_marking_actions_per_class.yfilter)) leaf_name_data.push_back(max_marking_actions_per_class.get_name_leafdata());
    if (max_matches_per_class.is_set || is_set(max_matches_per_class.yfilter)) leaf_name_data.push_back(max_matches_per_class.get_name_leafdata());
    if (max_classmap_name_length.is_set || is_set(max_classmap_name_length.yfilter)) leaf_name_data.push_back(max_classmap_name_length.get_name_leafdata());
    if (max_bundle_members.is_set || is_set(max_bundle_members.yfilter)) leaf_name_data.push_back(max_bundle_members.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-policy-maps")
    {
        max_policy_maps = value;
        max_policy_maps.value_namespace = name_space;
        max_policy_maps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-policy-hierarchy")
    {
        max_policy_hierarchy = value;
        max_policy_hierarchy.value_namespace = name_space;
        max_policy_hierarchy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-policy-name-length")
    {
        max_policy_name_length = value;
        max_policy_name_length.value_namespace = name_space;
        max_policy_name_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-classes-per-policy")
    {
        max_classes_per_policy = value;
        max_classes_per_policy.value_namespace = name_space;
        max_classes_per_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-police-actions-per-class")
    {
        max_police_actions_per_class = value;
        max_police_actions_per_class.value_namespace = name_space;
        max_police_actions_per_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-marking-actions-per-class")
    {
        max_marking_actions_per_class = value;
        max_marking_actions_per_class.value_namespace = name_space;
        max_marking_actions_per_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-matches-per-class")
    {
        max_matches_per_class = value;
        max_matches_per_class.value_namespace = name_space;
        max_matches_per_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-classmap-name-length")
    {
        max_classmap_name_length = value;
        max_classmap_name_length.value_namespace = name_space;
        max_classmap_name_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bundle-members")
    {
        max_bundle_members = value;
        max_bundle_members.value_namespace = name_space;
        max_bundle_members.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-policy-maps")
    {
        max_policy_maps.yfilter = yfilter;
    }
    if(value_path == "max-policy-hierarchy")
    {
        max_policy_hierarchy.yfilter = yfilter;
    }
    if(value_path == "max-policy-name-length")
    {
        max_policy_name_length.yfilter = yfilter;
    }
    if(value_path == "max-classes-per-policy")
    {
        max_classes_per_policy.yfilter = yfilter;
    }
    if(value_path == "max-police-actions-per-class")
    {
        max_police_actions_per_class.yfilter = yfilter;
    }
    if(value_path == "max-marking-actions-per-class")
    {
        max_marking_actions_per_class.yfilter = yfilter;
    }
    if(value_path == "max-matches-per-class")
    {
        max_matches_per_class.yfilter = yfilter;
    }
    if(value_path == "max-classmap-name-length")
    {
        max_classmap_name_length.yfilter = yfilter;
    }
    if(value_path == "max-bundle-members")
    {
        max_bundle_members.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-policy-maps" || name == "max-policy-hierarchy" || name == "max-policy-name-length" || name == "max-classes-per-policy" || name == "max-police-actions-per-class" || name == "max-marking-actions-per-class" || name == "max-matches-per-class" || name == "max-classmap-name-length" || name == "max-bundle-members")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::~Interfaces()
{
}

bool PlatformQos::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::get_children() const
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

void PlatformQos::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    output(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output>())
	,input(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input>())
{
    output->parent = this;
    input->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (output !=  nullptr && output->has_data())
	|| (input !=  nullptr && input->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (input !=  nullptr && input->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output>();
        }
        return output;
    }

    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "input" || name == "interface-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Output()
    :
    header(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header>())
	,interface_parameters(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass>())
{
    header->parent = this;
    interface_parameters->parent = this;
    skywarp_qos_policy_class->parent = this;

    yang_name = "output"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::~Output()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header>();
        }
        return header;
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters == nullptr)
        {
            interface_parameters = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters>();
        }
        return interface_parameters;
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class == nullptr)
        {
            skywarp_qos_policy_class = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass>();
        }
        return skywarp_qos_policy_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(interface_parameters != nullptr)
    {
        children["interface-parameters"] = interface_parameters;
    }

    if(skywarp_qos_policy_class != nullptr)
    {
        children["skywarp-qos-policy-class"] = skywarp_qos_policy_class;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "interface-parameters" || name == "skywarp-qos-policy-class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::Header()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    direction{YType::str, "direction"},
    classes{YType::uint16, "classes"}
{

    yang_name = "header"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::has_data() const
{
    return interface_name.is_set
	|| policy_name.is_set
	|| direction.is_set
	|| classes.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(classes.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (classes.is_set || is_set(classes.yfilter)) leaf_name_data.push_back(classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classes")
    {
        classes = value;
        classes.value_namespace = name_space;
        classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "classes")
    {
        classes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "policy-name" || name == "direction" || name == "classes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceParameters()
    :
    interface_config_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate>())
	,interface_program_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate>())
	,port_shaper_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate>())
{
    interface_config_rate->parent = this;
    interface_program_rate->parent = this;
    port_shaper_rate->parent = this;

    yang_name = "interface-parameters"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::has_data() const
{
    return (interface_config_rate !=  nullptr && interface_config_rate->has_data())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::has_operation() const
{
    return is_set(yfilter)
	|| (interface_config_rate !=  nullptr && interface_config_rate->has_operation())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_operation())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-config-rate")
    {
        if(interface_config_rate == nullptr)
        {
            interface_config_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate>();
        }
        return interface_config_rate;
    }

    if(child_yang_name == "interface-program-rate")
    {
        if(interface_program_rate == nullptr)
        {
            interface_program_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate>();
        }
        return interface_program_rate;
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate == nullptr)
        {
            port_shaper_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate>();
        }
        return port_shaper_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_config_rate != nullptr)
    {
        children["interface-config-rate"] = interface_config_rate;
    }

    if(interface_program_rate != nullptr)
    {
        children["interface-program-rate"] = interface_program_rate;
    }

    if(port_shaper_rate != nullptr)
    {
        children["port-shaper-rate"] = port_shaper_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-config-rate" || name == "interface-program-rate" || name == "port-shaper-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::InterfaceConfigRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "interface-config-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::~InterfaceConfigRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-config-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::InterfaceProgramRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "interface-program-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::~InterfaceProgramRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-program-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{

    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-pclass-st")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt>();
        c->parent = this;
        qos_show_pclass_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : qos_show_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-pclass-st")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::QosShowPclassSt()
    :
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"}
    	,
    queue(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue>())
	,shape(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape>())
	,wfq(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>())
	,police(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police>())
	,marking(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking>())
{
    queue->parent = this;
    shape->parent = this;
    wfq->parent = this;
    police->parent = this;
    marking->parent = this;

    yang_name = "qos-show-pclass-st"; yang_parent_name = "skywarp-qos-policy-class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::~QosShowPclassSt()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| (queue !=  nullptr && queue->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (marking !=  nullptr && marking->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| (queue !=  nullptr && queue->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (marking !=  nullptr && marking->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-pclass-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>();
        }
        return wfq;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police>();
        }
        return police;
    }

    if(child_yang_name == "marking")
    {
        if(marking == nullptr)
        {
            marking = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking>();
        }
        return marking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        children["wfq"] = wfq;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(marking != nullptr)
    {
        children["marking"] = marking;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "shape" || name == "wfq" || name == "police" || name == "marking" || name == "class-level" || name == "class-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::Queue()
    :
    queue_id{YType::uint32, "queue-id"},
    queue_type{YType::str, "queue-type"}
{

    yang_name = "queue"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_data() const
{
    return queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "queue-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Shape()
    :
    pir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>())
{
    pir->parent = this;
    pbs->parent = this;

    yang_name = "shape"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_data() const
{
    return (pir !=  nullptr && pir->has_data())
	|| (pbs !=  nullptr && pbs->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_operation() const
{
    return is_set(yfilter)
	|| (pir !=  nullptr && pir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>();
        }
        return pbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pir" || name == "pbs")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::Pir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::Pbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::Wfq()
    :
    excess_weight{YType::uint16, "excess-weight"}
    	,
    committed_weight(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>())
	,programmed_wfq(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>())
{
    committed_weight->parent = this;
    programmed_wfq->parent = this;

    yang_name = "wfq"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_data() const
{
    return excess_weight.is_set
	|| (committed_weight !=  nullptr && committed_weight->has_data())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_weight.yfilter)
	|| (committed_weight !=  nullptr && committed_weight->has_operation())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_weight.is_set || is_set(excess_weight.yfilter)) leaf_name_data.push_back(excess_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "committed-weight")
    {
        if(committed_weight == nullptr)
        {
            committed_weight = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>();
        }
        return committed_weight;
    }

    if(child_yang_name == "programmed-wfq")
    {
        if(programmed_wfq == nullptr)
        {
            programmed_wfq = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>();
        }
        return programmed_wfq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(committed_weight != nullptr)
    {
        children["committed-weight"] = committed_weight;
    }

    if(programmed_wfq != nullptr)
    {
        children["programmed-wfq"] = programmed_wfq;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-weight")
    {
        excess_weight = value;
        excess_weight.value_namespace = name_space;
        excess_weight.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-weight")
    {
        excess_weight.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "committed-weight" || name == "programmed-wfq" || name == "excess-weight")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::CommittedWeight()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "committed-weight"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::~CommittedWeight()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::ProgrammedWfq()
    :
    excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>())
	,sum_of_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    sum_of_bandwidth->parent = this;

    yang_name = "programmed-wfq"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::~ProgrammedWfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth == nullptr)
        {
            sum_of_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>();
        }
        return sum_of_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(sum_of_bandwidth != nullptr)
    {
        children["sum-of-bandwidth"] = sum_of_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sum-of-bandwidth" || name == "excess-ratio")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::Bandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bandwidth"; yang_parent_name = "programmed-wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::SumOfBandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "sum-of-bandwidth"; yang_parent_name = "programmed-wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Police()
    :
    policer_id{YType::uint32, "policer-id"},
    policer_type{YType::enumeration, "policer-type"}
    	,
    cir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>())
	,cbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>())
{
    cir->parent = this;
    cbs->parent = this;

    yang_name = "police"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_data() const
{
    return policer_id.is_set
	|| policer_type.is_set
	|| (cir !=  nullptr && cir->has_data())
	|| (cbs !=  nullptr && cbs->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policer_id.yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| (cir !=  nullptr && cir->has_operation())
	|| (cbs !=  nullptr && cbs->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_id.is_set || is_set(policer_id.yfilter)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>();
        }
        return cbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policer-id")
    {
        policer_id = value;
        policer_id.value_namespace = name_space;
        policer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policer-id")
    {
        policer_id.yfilter = yfilter;
    }
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir" || name == "cbs" || name == "policer-id" || name == "policer-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::Cir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::Cbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::Marking()
    :
    mark_only(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>())
	,police_conform(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>())
	,police_exceed(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>())
{
    mark_only->parent = this;
    police_conform->parent = this;
    police_exceed->parent = this;

    yang_name = "marking"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::~Marking()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_data() const
{
    return (mark_only !=  nullptr && mark_only->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_operation() const
{
    return is_set(yfilter)
	|| (mark_only !=  nullptr && mark_only->has_operation())
	|| (police_conform !=  nullptr && police_conform->has_operation())
	|| (police_exceed !=  nullptr && police_exceed->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-only")
    {
        if(mark_only == nullptr)
        {
            mark_only = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>();
        }
        return mark_only;
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform == nullptr)
        {
            police_conform = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>();
        }
        return police_conform;
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed == nullptr)
        {
            police_exceed = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>();
        }
        return police_exceed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mark_only != nullptr)
    {
        children["mark-only"] = mark_only;
    }

    if(police_conform != nullptr)
    {
        children["police-conform"] = police_conform;
    }

    if(police_exceed != nullptr)
    {
        children["police-exceed"] = police_exceed;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-only" || name == "police-conform" || name == "police-exceed")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkOnly()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "mark-only"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::~MarkOnly()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "mark-only"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-conform"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-conform"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-exceed"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-exceed"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Input()
    :
    header(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header>())
	,interface_parameters(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass>())
{
    header->parent = this;
    interface_parameters->parent = this;
    skywarp_qos_policy_class->parent = this;

    yang_name = "input"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::~Input()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header>();
        }
        return header;
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters == nullptr)
        {
            interface_parameters = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters>();
        }
        return interface_parameters;
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class == nullptr)
        {
            skywarp_qos_policy_class = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass>();
        }
        return skywarp_qos_policy_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(interface_parameters != nullptr)
    {
        children["interface-parameters"] = interface_parameters;
    }

    if(skywarp_qos_policy_class != nullptr)
    {
        children["skywarp-qos-policy-class"] = skywarp_qos_policy_class;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "interface-parameters" || name == "skywarp-qos-policy-class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::Header()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    direction{YType::str, "direction"},
    classes{YType::uint16, "classes"}
{

    yang_name = "header"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::has_data() const
{
    return interface_name.is_set
	|| policy_name.is_set
	|| direction.is_set
	|| classes.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(classes.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (classes.is_set || is_set(classes.yfilter)) leaf_name_data.push_back(classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classes")
    {
        classes = value;
        classes.value_namespace = name_space;
        classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "classes")
    {
        classes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "policy-name" || name == "direction" || name == "classes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceParameters()
    :
    interface_config_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate>())
	,interface_program_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate>())
	,port_shaper_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate>())
{
    interface_config_rate->parent = this;
    interface_program_rate->parent = this;
    port_shaper_rate->parent = this;

    yang_name = "interface-parameters"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::has_data() const
{
    return (interface_config_rate !=  nullptr && interface_config_rate->has_data())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::has_operation() const
{
    return is_set(yfilter)
	|| (interface_config_rate !=  nullptr && interface_config_rate->has_operation())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_operation())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-config-rate")
    {
        if(interface_config_rate == nullptr)
        {
            interface_config_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate>();
        }
        return interface_config_rate;
    }

    if(child_yang_name == "interface-program-rate")
    {
        if(interface_program_rate == nullptr)
        {
            interface_program_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate>();
        }
        return interface_program_rate;
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate == nullptr)
        {
            port_shaper_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate>();
        }
        return port_shaper_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_config_rate != nullptr)
    {
        children["interface-config-rate"] = interface_config_rate;
    }

    if(interface_program_rate != nullptr)
    {
        children["interface-program-rate"] = interface_program_rate;
    }

    if(port_shaper_rate != nullptr)
    {
        children["port-shaper-rate"] = port_shaper_rate;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-config-rate" || name == "interface-program-rate" || name == "port-shaper-rate")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::InterfaceConfigRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "interface-config-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::~InterfaceConfigRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-config-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::InterfaceProgramRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "interface-program-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::~InterfaceProgramRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-program-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{

    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-pclass-st")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt>();
        c->parent = this;
        qos_show_pclass_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : qos_show_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-pclass-st")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::QosShowPclassSt()
    :
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"}
    	,
    queue(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue>())
	,shape(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape>())
	,wfq(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>())
	,police(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police>())
	,marking(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking>())
{
    queue->parent = this;
    shape->parent = this;
    wfq->parent = this;
    police->parent = this;
    marking->parent = this;

    yang_name = "qos-show-pclass-st"; yang_parent_name = "skywarp-qos-policy-class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::~QosShowPclassSt()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| (queue !=  nullptr && queue->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (marking !=  nullptr && marking->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| (queue !=  nullptr && queue->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (marking !=  nullptr && marking->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-pclass-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>();
        }
        return wfq;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police>();
        }
        return police;
    }

    if(child_yang_name == "marking")
    {
        if(marking == nullptr)
        {
            marking = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking>();
        }
        return marking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        children["wfq"] = wfq;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(marking != nullptr)
    {
        children["marking"] = marking;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "shape" || name == "wfq" || name == "police" || name == "marking" || name == "class-level" || name == "class-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::Queue()
    :
    queue_id{YType::uint32, "queue-id"},
    queue_type{YType::str, "queue-type"}
{

    yang_name = "queue"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_data() const
{
    return queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "queue-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Shape()
    :
    pir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>())
{
    pir->parent = this;
    pbs->parent = this;

    yang_name = "shape"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_data() const
{
    return (pir !=  nullptr && pir->has_data())
	|| (pbs !=  nullptr && pbs->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_operation() const
{
    return is_set(yfilter)
	|| (pir !=  nullptr && pir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>();
        }
        return pbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pir" || name == "pbs")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::Pir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::Pbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::Wfq()
    :
    excess_weight{YType::uint16, "excess-weight"}
    	,
    committed_weight(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>())
	,programmed_wfq(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>())
{
    committed_weight->parent = this;
    programmed_wfq->parent = this;

    yang_name = "wfq"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_data() const
{
    return excess_weight.is_set
	|| (committed_weight !=  nullptr && committed_weight->has_data())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_weight.yfilter)
	|| (committed_weight !=  nullptr && committed_weight->has_operation())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_weight.is_set || is_set(excess_weight.yfilter)) leaf_name_data.push_back(excess_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "committed-weight")
    {
        if(committed_weight == nullptr)
        {
            committed_weight = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>();
        }
        return committed_weight;
    }

    if(child_yang_name == "programmed-wfq")
    {
        if(programmed_wfq == nullptr)
        {
            programmed_wfq = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>();
        }
        return programmed_wfq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(committed_weight != nullptr)
    {
        children["committed-weight"] = committed_weight;
    }

    if(programmed_wfq != nullptr)
    {
        children["programmed-wfq"] = programmed_wfq;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-weight")
    {
        excess_weight = value;
        excess_weight.value_namespace = name_space;
        excess_weight.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-weight")
    {
        excess_weight.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "committed-weight" || name == "programmed-wfq" || name == "excess-weight")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::CommittedWeight()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "committed-weight"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::~CommittedWeight()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::ProgrammedWfq()
    :
    excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>())
	,sum_of_bandwidth(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    sum_of_bandwidth->parent = this;

    yang_name = "programmed-wfq"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::~ProgrammedWfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth == nullptr)
        {
            sum_of_bandwidth = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>();
        }
        return sum_of_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(sum_of_bandwidth != nullptr)
    {
        children["sum-of-bandwidth"] = sum_of_bandwidth;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sum-of-bandwidth" || name == "excess-ratio")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::Bandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bandwidth"; yang_parent_name = "programmed-wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::SumOfBandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "sum-of-bandwidth"; yang_parent_name = "programmed-wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Police()
    :
    policer_id{YType::uint32, "policer-id"},
    policer_type{YType::enumeration, "policer-type"}
    	,
    cir(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>())
	,cbs(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>())
{
    cir->parent = this;
    cbs->parent = this;

    yang_name = "police"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_data() const
{
    return policer_id.is_set
	|| policer_type.is_set
	|| (cir !=  nullptr && cir->has_data())
	|| (cbs !=  nullptr && cbs->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policer_id.yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| (cir !=  nullptr && cir->has_operation())
	|| (cbs !=  nullptr && cbs->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_id.is_set || is_set(policer_id.yfilter)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>();
        }
        return cbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policer-id")
    {
        policer_id = value;
        policer_id.value_namespace = name_space;
        policer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policer-id")
    {
        policer_id.yfilter = yfilter;
    }
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir" || name == "cbs" || name == "policer-id" || name == "policer-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::Cir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::Cbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::Marking()
    :
    mark_only(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>())
	,police_conform(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>())
	,police_exceed(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>())
{
    mark_only->parent = this;
    police_conform->parent = this;
    police_exceed->parent = this;

    yang_name = "marking"; yang_parent_name = "qos-show-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::~Marking()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_data() const
{
    return (mark_only !=  nullptr && mark_only->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_operation() const
{
    return is_set(yfilter)
	|| (mark_only !=  nullptr && mark_only->has_operation())
	|| (police_conform !=  nullptr && police_conform->has_operation())
	|| (police_exceed !=  nullptr && police_exceed->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-only")
    {
        if(mark_only == nullptr)
        {
            mark_only = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>();
        }
        return mark_only;
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform == nullptr)
        {
            police_conform = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>();
        }
        return police_conform;
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed == nullptr)
        {
            police_exceed = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>();
        }
        return police_exceed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mark_only != nullptr)
    {
        children["mark-only"] = mark_only;
    }

    if(police_conform != nullptr)
    {
        children["police-conform"] = police_conform;
    }

    if(police_exceed != nullptr)
    {
        children["police-exceed"] = police_exceed;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-only" || name == "police-conform" || name == "police-exceed")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkOnly()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "mark-only"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::~MarkOnly()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "mark-only"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-conform"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-conform"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "police-exceed"; yang_parent_name = "marking"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark-detail")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-detail" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::MarkDetail()
    :
    mark_value{YType::uint8, "mark-value"},
    action_opcode{YType::enumeration, "action-opcode"}
{

    yang_name = "mark-detail"; yang_parent_name = "police-exceed"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_data() const
{
    return mark_value.is_set
	|| action_opcode.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_value.yfilter)
	|| ydk::is_set(action_opcode.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());
    if (action_opcode.is_set || is_set(action_opcode.yfilter)) leaf_name_data.push_back(action_opcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-opcode")
    {
        action_opcode = value;
        action_opcode.value_namespace = name_space;
        action_opcode.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
    if(value_path == "action-opcode")
    {
        action_opcode.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-value" || name == "action-opcode")
        return true;
    return false;
}

PlatformQosEa::PlatformQosEa()
    :
    nodes(std::make_shared<PlatformQosEa::Nodes>())
{
    nodes->parent = this;

    yang_name = "platform-qos-ea"; yang_parent_name = "Cisco-IOS-XR-skp-qos-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PlatformQosEa::~PlatformQosEa()
{
}

bool PlatformQosEa::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PlatformQosEa::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PlatformQosEa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos-ea";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PlatformQosEa::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PlatformQosEa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PlatformQosEa::clone_ptr() const
{
    return std::make_shared<PlatformQosEa>();
}

std::string PlatformQosEa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PlatformQosEa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PlatformQosEa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PlatformQosEa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PlatformQosEa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

PlatformQosEa::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "platform-qos-ea"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformQosEa::Nodes::~Nodes()
{
}

bool PlatformQosEa::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQosEa::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos-ea/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformQosEa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<PlatformQosEa::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQosEa::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    bundle_interfaces(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces>())
	,interfaces(std::make_shared<PlatformQosEa::Nodes::Node::Interfaces>())
{
    bundle_interfaces->parent = this;
    interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformQosEa::Nodes::Node::~Node()
{
}

bool PlatformQosEa::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool PlatformQosEa::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PlatformQosEa::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos-ea/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PlatformQosEa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces == nullptr)
        {
            bundle_interfaces = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces>();
        }
        return bundle_interfaces;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PlatformQosEa::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bundle_interfaces != nullptr)
    {
        children["bundle-interfaces"] = bundle_interfaces;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interfaces" || name == "interfaces" || name == "node-name")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterfaces()
{

    yang_name = "bundle-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::~BundleInterfaces()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface")
    {
        auto c = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bundle_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interface")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::BundleInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    member_interfaces(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>())
{
    member_interfaces->parent = this;

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    return interface_name.is_set
	|| (member_interfaces !=  nullptr && member_interfaces->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (member_interfaces !=  nullptr && member_interfaces->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces == nullptr)
        {
            member_interfaces = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>();
        }
        return member_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(member_interfaces != nullptr)
    {
        children["member-interfaces"] = member_interfaces;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interfaces" || name == "interface-name")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterfaces()
{

    yang_name = "member-interfaces"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::~MemberInterfaces()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_data() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-interface")
    {
        auto c = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : member_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interface")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::MemberInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    bundle_output(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput>())
	,bundle_input(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput>())
{
    bundle_output->parent = this;
    bundle_input->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_data() const
{
    return interface_name.is_set
	|| (bundle_output !=  nullptr && bundle_output->has_data())
	|| (bundle_input !=  nullptr && bundle_input->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (bundle_output !=  nullptr && bundle_output->has_operation())
	|| (bundle_input !=  nullptr && bundle_input->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-output")
    {
        if(bundle_output == nullptr)
        {
            bundle_output = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput>();
        }
        return bundle_output;
    }

    if(child_yang_name == "bundle-input")
    {
        if(bundle_input == nullptr)
        {
            bundle_input = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput>();
        }
        return bundle_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bundle_output != nullptr)
    {
        children["bundle-output"] = bundle_output;
    }

    if(bundle_input != nullptr)
    {
        children["bundle-input"] = bundle_input;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-output" || name == "bundle-input" || name == "interface-name")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::BundleOutput()
    :
    details(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details>())
{
    details->parent = this;

    yang_name = "bundle-output"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::~BundleOutput()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(details != nullptr)
    {
        children["details"] = details;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Details()
    :
    header(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header>())
	,interface_parameters(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass>())
{
    header->parent = this;
    interface_parameters->parent = this;
    skywarp_qos_policy_class->parent = this;

    yang_name = "details"; yang_parent_name = "bundle-output"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::~Details()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header>();
        }
        return header;
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters == nullptr)
        {
            interface_parameters = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters>();
        }
        return interface_parameters;
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class == nullptr)
        {
            skywarp_qos_policy_class = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass>();
        }
        return skywarp_qos_policy_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(interface_parameters != nullptr)
    {
        children["interface-parameters"] = interface_parameters;
    }

    if(skywarp_qos_policy_class != nullptr)
    {
        children["skywarp-qos-policy-class"] = skywarp_qos_policy_class;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "interface-parameters" || name == "skywarp-qos-policy-class")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::Header()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    direction{YType::str, "direction"},
    classes{YType::uint16, "classes"}
{

    yang_name = "header"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::~Header()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::has_data() const
{
    return interface_name.is_set
	|| policy_name.is_set
	|| direction.is_set
	|| classes.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(classes.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (classes.is_set || is_set(classes.yfilter)) leaf_name_data.push_back(classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classes")
    {
        classes = value;
        classes.value_namespace = name_space;
        classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "classes")
    {
        classes.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "policy-name" || name == "direction" || name == "classes")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::InterfaceParameters()
    :
    policy_name{YType::str, "policy-name"},
    hierarchical_depth{YType::uint8, "hierarchical-depth"},
    interface_type{YType::str, "interface-type"},
    interface_rate{YType::uint32, "interface-rate"},
    port_shaper_rate{YType::uint32, "port-shaper-rate"},
    interface_handle{YType::str, "interface-handle"},
    under_line_interface_handle{YType::str, "under-line-interface-handle"},
    bundle_id{YType::uint16, "bundle-id"},
    uidb_index{YType::uint16, "uidb-index"},
    qos_interface_handle{YType::uint64, "qos-interface-handle"},
    port{YType::uint32, "port"},
    policy_map_id{YType::uint16, "policy-map-id"}
{

    yang_name = "interface-parameters"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::has_data() const
{
    return policy_name.is_set
	|| hierarchical_depth.is_set
	|| interface_type.is_set
	|| interface_rate.is_set
	|| port_shaper_rate.is_set
	|| interface_handle.is_set
	|| under_line_interface_handle.is_set
	|| bundle_id.is_set
	|| uidb_index.is_set
	|| qos_interface_handle.is_set
	|| port.is_set
	|| policy_map_id.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(hierarchical_depth.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(interface_rate.yfilter)
	|| ydk::is_set(port_shaper_rate.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(under_line_interface_handle.yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(uidb_index.yfilter)
	|| ydk::is_set(qos_interface_handle.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(policy_map_id.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (hierarchical_depth.is_set || is_set(hierarchical_depth.yfilter)) leaf_name_data.push_back(hierarchical_depth.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (interface_rate.is_set || is_set(interface_rate.yfilter)) leaf_name_data.push_back(interface_rate.get_name_leafdata());
    if (port_shaper_rate.is_set || is_set(port_shaper_rate.yfilter)) leaf_name_data.push_back(port_shaper_rate.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (under_line_interface_handle.is_set || is_set(under_line_interface_handle.yfilter)) leaf_name_data.push_back(under_line_interface_handle.get_name_leafdata());
    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.yfilter)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (qos_interface_handle.is_set || is_set(qos_interface_handle.yfilter)) leaf_name_data.push_back(qos_interface_handle.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (policy_map_id.is_set || is_set(policy_map_id.yfilter)) leaf_name_data.push_back(policy_map_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth = value;
        hierarchical_depth.value_namespace = name_space;
        hierarchical_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-rate")
    {
        interface_rate = value;
        interface_rate.value_namespace = name_space;
        interface_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate = value;
        port_shaper_rate.value_namespace = name_space;
        port_shaper_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle = value;
        under_line_interface_handle.value_namespace = name_space;
        under_line_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
        uidb_index.value_namespace = name_space;
        uidb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle = value;
        qos_interface_handle.value_namespace = name_space;
        qos_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id = value;
        policy_map_id.value_namespace = name_space;
        policy_map_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "interface-rate")
    {
        interface_rate.yfilter = yfilter;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle.yfilter = yfilter;
    }
    if(value_path == "bundle-id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "uidb-index")
    {
        uidb_index.yfilter = yfilter;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "hierarchical-depth" || name == "interface-type" || name == "interface-rate" || name == "port-shaper-rate" || name == "interface-handle" || name == "under-line-interface-handle" || name == "bundle-id" || name == "uidb-index" || name == "qos-interface-handle" || name == "port" || name == "policy-map-id")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{

    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-ea-pclass-st")
    {
        auto c = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt>();
        c->parent = this;
        qos_show_ea_pclass_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : qos_show_ea_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-ea-pclass-st")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::QosShowEaPclassSt()
    :
    index_{YType::uint16, "index"},
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"},
    policy_name{YType::str, "policy-name"},
    node_flags{YType::str, "node-flags"},
    stats_flags{YType::str, "stats-flags"}
    	,
    config(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>())
	,result(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>())
{
    config->parent = this;
    result->parent = this;

    yang_name = "qos-show-ea-pclass-st"; yang_parent_name = "skywarp-qos-policy-class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::~QosShowEaPclassSt()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_data() const
{
    return index_.is_set
	|| class_level.is_set
	|| class_name.is_set
	|| policy_name.is_set
	|| node_flags.is_set
	|| stats_flags.is_set
	|| (config !=  nullptr && config->has_data())
	|| (result !=  nullptr && result->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(node_flags.yfilter)
	|| ydk::is_set(stats_flags.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (result !=  nullptr && result->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-pclass-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (node_flags.is_set || is_set(node_flags.yfilter)) leaf_name_data.push_back(node_flags.get_name_leafdata());
    if (stats_flags.is_set || is_set(stats_flags.yfilter)) leaf_name_data.push_back(stats_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>();
        }
        return config;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>();
        }
        return result;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-flags")
    {
        node_flags = value;
        node_flags.value_namespace = name_space;
        node_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-flags")
    {
        stats_flags = value;
        stats_flags.value_namespace = name_space;
        stats_flags.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "node-flags")
    {
        node_flags.yfilter = yfilter;
    }
    if(value_path == "stats-flags")
    {
        stats_flags.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "result" || name == "index" || name == "class-level" || name == "class-name" || name == "policy-name" || name == "node-flags" || name == "stats-flags")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Config()
    :
    node_config{YType::str, "node-config"}
    	,
    police(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>())
	,shape(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>())
	,wfq(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>())
{
    police->parent = this;
    shape->parent = this;
    wfq->parent = this;

    yang_name = "config"; yang_parent_name = "qos-show-ea-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::~Config()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_data() const
{
    return node_config.is_set
	|| (police !=  nullptr && police->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_config.yfilter)
	|| (police !=  nullptr && police->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_config.is_set || is_set(node_config.yfilter)) leaf_name_data.push_back(node_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>();
        }
        return police;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "wfq")
    {
        if(wfq == nullptr)
        {
            wfq = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>();
        }
        return wfq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(wfq != nullptr)
    {
        children["wfq"] = wfq;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-config")
    {
        node_config = value;
        node_config.value_namespace = name_space;
        node_config.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-config")
    {
        node_config.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police" || name == "shape" || name == "wfq" || name == "node-config")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Police()
    :
    color_aware{YType::boolean, "color-aware"},
    policer_type{YType::enumeration, "policer-type"}
    	,
    cir(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>())
	,cbs(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>())
{
    cir->parent = this;
    cbs->parent = this;

    yang_name = "police"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_data() const
{
    return color_aware.is_set
	|| policer_type.is_set
	|| (cir !=  nullptr && cir->has_data())
	|| (cbs !=  nullptr && cbs->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color_aware.yfilter)
	|| ydk::is_set(policer_type.yfilter)
	|| (cir !=  nullptr && cir->has_operation())
	|| (cbs !=  nullptr && cbs->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color_aware.is_set || is_set(color_aware.yfilter)) leaf_name_data.push_back(color_aware.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.yfilter)) leaf_name_data.push_back(policer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cir")
    {
        if(cir == nullptr)
        {
            cir = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>();
        }
        return cir;
    }

    if(child_yang_name == "cbs")
    {
        if(cbs == nullptr)
        {
            cbs = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>();
        }
        return cbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cir != nullptr)
    {
        children["cir"] = cir;
    }

    if(cbs != nullptr)
    {
        children["cbs"] = cbs;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color-aware")
    {
        color_aware = value;
        color_aware.value_namespace = name_space;
        color_aware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
        policer_type.value_namespace = name_space;
        policer_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color-aware")
    {
        color_aware.yfilter = yfilter;
    }
    if(value_path == "policer-type")
    {
        policer_type.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cir" || name == "cbs" || name == "color-aware" || name == "policer-type")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::Cir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cir"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::~Cir()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::Cbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "cbs"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::~Cbs()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Shape()
    :
    pir(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>())
	,pbs(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>())
{
    pir->parent = this;
    pbs->parent = this;

    yang_name = "shape"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::~Shape()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_data() const
{
    return (pir !=  nullptr && pir->has_data())
	|| (pbs !=  nullptr && pbs->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_operation() const
{
    return is_set(yfilter)
	|| (pir !=  nullptr && pir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pir")
    {
        if(pir == nullptr)
        {
            pir = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>();
        }
        return pir;
    }

    if(child_yang_name == "pbs")
    {
        if(pbs == nullptr)
        {
            pbs = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>();
        }
        return pbs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pir != nullptr)
    {
        children["pir"] = pir;
    }

    if(pbs != nullptr)
    {
        children["pbs"] = pbs;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pir" || name == "pbs")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::Pir()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pir"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::~Pir()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::Pbs()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pbs"; yang_parent_name = "shape"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::~Pbs()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Wfq()
    :
    excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>())
	,sum_of_bandwidth(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    sum_of_bandwidth->parent = this;

    yang_name = "wfq"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::~Wfq()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(excess_ratio.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excess_ratio.is_set || is_set(excess_ratio.yfilter)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth == nullptr)
        {
            sum_of_bandwidth = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>();
        }
        return sum_of_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(sum_of_bandwidth != nullptr)
    {
        children["sum-of-bandwidth"] = sum_of_bandwidth;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
        excess_ratio.value_namespace = name_space;
        excess_ratio.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sum-of-bandwidth" || name == "excess-ratio")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::Bandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::SumOfBandwidth()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "sum-of-bandwidth"; yang_parent_name = "wfq"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Result()
    :
    stats_id{YType::uint32, "stats-id"}
    	,
    queue(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>())
	,police(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>())
{
    queue->parent = this;
    police->parent = this;

    yang_name = "result"; yang_parent_name = "qos-show-ea-pclass-st"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::~Result()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_data() const
{
    return stats_id.is_set
	|| (queue !=  nullptr && queue->has_data())
	|| (police !=  nullptr && police->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stats_id.yfilter)
	|| (queue !=  nullptr && queue->has_operation())
	|| (police !=  nullptr && police->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stats_id.is_set || is_set(stats_id.yfilter)) leaf_name_data.push_back(stats_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>();
        }
        return queue;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stats-id")
    {
        stats_id = value;
        stats_id.value_namespace = name_space;
        stats_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stats-id")
    {
        stats_id.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "police" || name == "stats-id")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::Queue()
    :
    queue_id{YType::uint32, "queue-id"},
    commit_tx{YType::uint32, "commit-tx"},
    excess_tx{YType::uint32, "excess-tx"},
    drop{YType::uint32, "drop"}
{

    yang_name = "queue"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::~Queue()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_data() const
{
    return queue_id.is_set
	|| commit_tx.is_set
	|| excess_tx.is_set
	|| drop.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(commit_tx.yfilter)
	|| ydk::is_set(excess_tx.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (commit_tx.is_set || is_set(commit_tx.yfilter)) leaf_name_data.push_back(commit_tx.get_name_leafdata());
    if (excess_tx.is_set || is_set(excess_tx.yfilter)) leaf_name_data.push_back(excess_tx.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "commit-tx")
    {
        commit_tx = value;
        commit_tx.value_namespace = name_space;
        commit_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-tx")
    {
        excess_tx = value;
        excess_tx.value_namespace = name_space;
        excess_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "commit-tx")
    {
        commit_tx.yfilter = yfilter;
    }
    if(value_path == "excess-tx")
    {
        excess_tx.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "commit-tx" || name == "excess-tx" || name == "drop")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::Police()
    :
    token_bucket_id{YType::uint32, "token-bucket-id"},
    conform{YType::uint32, "conform"},
    exceed{YType::uint32, "exceed"},
    violate{YType::uint32, "violate"}
{

    yang_name = "police"; yang_parent_name = "result"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_data() const
{
    return token_bucket_id.is_set
	|| conform.is_set
	|| exceed.is_set
	|| violate.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(token_bucket_id.yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter)
	|| ydk::is_set(violate.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (token_bucket_id.is_set || is_set(token_bucket_id.yfilter)) leaf_name_data.push_back(token_bucket_id.get_name_leafdata());
    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());
    if (violate.is_set || is_set(violate.yfilter)) leaf_name_data.push_back(violate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "token-bucket-id")
    {
        token_bucket_id = value;
        token_bucket_id.value_namespace = name_space;
        token_bucket_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violate")
    {
        violate = value;
        violate.value_namespace = name_space;
        violate.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "token-bucket-id")
    {
        token_bucket_id.yfilter = yfilter;
    }
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
    if(value_path == "violate")
    {
        violate.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "token-bucket-id" || name == "conform" || name == "exceed" || name == "violate")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::BundleInput()
    :
    details(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details>())
{
    details->parent = this;

    yang_name = "bundle-input"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::~BundleInput()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_operation() const
{
    return is_set(yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(details != nullptr)
    {
        children["details"] = details;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Details()
    :
    header(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header>())
	,interface_parameters(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass>())
{
    header->parent = this;
    interface_parameters->parent = this;
    skywarp_qos_policy_class->parent = this;

    yang_name = "details"; yang_parent_name = "bundle-input"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::~Details()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header>();
        }
        return header;
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters == nullptr)
        {
            interface_parameters = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters>();
        }
        return interface_parameters;
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class == nullptr)
        {
            skywarp_qos_policy_class = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass>();
        }
        return skywarp_qos_policy_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(interface_parameters != nullptr)
    {
        children["interface-parameters"] = interface_parameters;
    }

    if(skywarp_qos_policy_class != nullptr)
    {
        children["skywarp-qos-policy-class"] = skywarp_qos_policy_class;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "interface-parameters" || name == "skywarp-qos-policy-class")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::Header()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    direction{YType::str, "direction"},
    classes{YType::uint16, "classes"}
{

    yang_name = "header"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::~Header()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::has_data() const
{
    return interface_name.is_set
	|| policy_name.is_set
	|| direction.is_set
	|| classes.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(classes.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (classes.is_set || is_set(classes.yfilter)) leaf_name_data.push_back(classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classes")
    {
        classes = value;
        classes.value_namespace = name_space;
        classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "classes")
    {
        classes.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "policy-name" || name == "direction" || name == "classes")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::InterfaceParameters()
    :
    policy_name{YType::str, "policy-name"},
    hierarchical_depth{YType::uint8, "hierarchical-depth"},
    interface_type{YType::str, "interface-type"},
    interface_rate{YType::uint32, "interface-rate"},
    port_shaper_rate{YType::uint32, "port-shaper-rate"},
    interface_handle{YType::str, "interface-handle"},
    under_line_interface_handle{YType::str, "under-line-interface-handle"},
    bundle_id{YType::uint16, "bundle-id"},
    uidb_index{YType::uint16, "uidb-index"},
    qos_interface_handle{YType::uint64, "qos-interface-handle"},
    port{YType::uint32, "port"},
    policy_map_id{YType::uint16, "policy-map-id"}
{

    yang_name = "interface-parameters"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::has_data() const
{
    return policy_name.is_set
	|| hierarchical_depth.is_set
	|| interface_type.is_set
	|| interface_rate.is_set
	|| port_shaper_rate.is_set
	|| interface_handle.is_set
	|| under_line_interface_handle.is_set
	|| bundle_id.is_set
	|| uidb_index.is_set
	|| qos_interface_handle.is_set
	|| port.is_set
	|| policy_map_id.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(hierarchical_depth.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(interface_rate.yfilter)
	|| ydk::is_set(port_shaper_rate.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(under_line_interface_handle.yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(uidb_index.yfilter)
	|| ydk::is_set(qos_interface_handle.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(policy_map_id.yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (hierarchical_depth.is_set || is_set(hierarchical_depth.yfilter)) leaf_name_data.push_back(hierarchical_depth.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (interface_rate.is_set || is_set(interface_rate.yfilter)) leaf_name_data.push_back(interface_rate.get_name_leafdata());
    if (port_shaper_rate.is_set || is_set(port_shaper_rate.yfilter)) leaf_name_data.push_back(port_shaper_rate.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (under_line_interface_handle.is_set || is_set(under_line_interface_handle.yfilter)) leaf_name_data.push_back(under_line_interface_handle.get_name_leafdata());
    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.yfilter)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (qos_interface_handle.is_set || is_set(qos_interface_handle.yfilter)) leaf_name_data.push_back(qos_interface_handle.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (policy_map_id.is_set || is_set(policy_map_id.yfilter)) leaf_name_data.push_back(policy_map_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth = value;
        hierarchical_depth.value_namespace = name_space;
        hierarchical_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-rate")
    {
        interface_rate = value;
        interface_rate.value_namespace = name_space;
        interface_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate = value;
        port_shaper_rate.value_namespace = name_space;
        port_shaper_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle = value;
        under_line_interface_handle.value_namespace = name_space;
        under_line_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
        uidb_index.value_namespace = name_space;
        uidb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle = value;
        qos_interface_handle.value_namespace = name_space;
        qos_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id = value;
        policy_map_id.value_namespace = name_space;
        policy_map_id.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "interface-rate")
    {
        interface_rate.yfilter = yfilter;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle.yfilter = yfilter;
    }
    if(value_path == "bundle-id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "uidb-index")
    {
        uidb_index.yfilter = yfilter;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "hierarchical-depth" || name == "interface-type" || name == "interface-rate" || name == "port-shaper-rate" || name == "interface-handle" || name == "under-line-interface-handle" || name == "bundle-id" || name == "uidb-index" || name == "qos-interface-handle" || name == "port" || name == "policy-map-id")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{

    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-show-ea-pclass-st")
    {
        auto c = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt>();
        c->parent = this;
        qos_show_ea_pclass_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : qos_show_ea_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-show-ea-pclass-st")
        return true;
    return false;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::QosShowEaPclassSt()
    :
    index_{YType::uint16, "index"},
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"},
    policy_name{YType::str, "policy-name"},
    node_flags{YType::str, "node-flags"},
    stats_flags{YType::str, "stats-flags"}
    	,
    config(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>())
	,result(std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>())
{
    config->parent = this;
    result->parent = this;

    yang_name = "qos-show-ea-pclass-st"; yang_parent_name = "skywarp-qos-policy-class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::~QosShowEaPclassSt()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_data() const
{
    return index_.is_set
	|| class_level.is_set
	|| class_name.is_set
	|| policy_name.is_set
	|| node_flags.is_set
	|| stats_flags.is_set
	|| (config !=  nullptr && config->has_data())
	|| (result !=  nullptr && result->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(node_flags.yfilter)
	|| ydk::is_set(stats_flags.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (result !=  nullptr && result->has_operation());
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-pclass-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (node_flags.is_set || is_set(node_flags.yfilter)) leaf_name_data.push_back(node_flags.get_name_leafdata());
    if (stats_flags.is_set || is_set(stats_flags.yfilter)) leaf_name_data.push_back(stats_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>();
        }
        return config;
    }

    if(child_yang_name == "result")
    {
        if(result == nullptr)
        {
            result = std::make_shared<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>();
        }
        return result;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(result != nullptr)
    {
        children["result"] = result;
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-flags")
    {
        node_flags = value;
        node_flags.value_namespace = name_space;
        node_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-flags")
    {
        stats_flags = value;
        stats_flags.value_namespace = name_space;
        stats_flags.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "node-flags")
    {
        node_flags.yfilter = yfilter;
    }
    if(value_path == "stats-flags")
    {
        stats_flags.yfilter = yfilter;
    }
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "result" || name == "index" || name == "class-level" || name == "class-name" || name == "policy-name" || name == "node-flags" || name == "stats-flags")
        return true;
    return false;
}

const Enum::YLeaf Wred::wred_cos_cmd {0, "wred-cos-cmd"};
const Enum::YLeaf Wred::wred_dscp_cmd {1, "wred-dscp-cmd"};
const Enum::YLeaf Wred::wred_precedence_cmd {2, "wred-precedence-cmd"};
const Enum::YLeaf Wred::wred_discard_class_cmd {3, "wred-discard-class-cmd"};
const Enum::YLeaf Wred::wred_mpls_exp_cmd {4, "wred-mpls-exp-cmd"};
const Enum::YLeaf Wred::red_with_user_min_max {5, "red-with-user-min-max"};
const Enum::YLeaf Wred::red_with_default_min_max {6, "red-with-default-min-max"};
const Enum::YLeaf Wred::wred_dei_cmd {7, "wred-dei-cmd"};
const Enum::YLeaf Wred::wred_ecn_cmd {8, "wred-ecn-cmd"};
const Enum::YLeaf Wred::wred_invalid_cmd {9, "wred-invalid-cmd"};

const Enum::YLeaf PolicyParamUnit::policy_param_unit_invalid {0, "policy-param-unit-invalid"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_bytes {1, "policy-param-unit-bytes"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_kbytes {2, "policy-param-unit-kbytes"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_mbytes {3, "policy-param-unit-mbytes"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_gbytes {4, "policy-param-unit-gbytes"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_bitsps {5, "policy-param-unit-bitsps"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_kbitsps {6, "policy-param-unit-kbitsps"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_mbitsps {7, "policy-param-unit-mbitsps"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_gbitsps {8, "policy-param-unit-gbitsps"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_cells_ps {9, "policy-param-unit-cells-ps"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_packets_ps {10, "policy-param-unit-packets-ps"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_us {11, "policy-param-unit-us"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_ms {12, "policy-param-unit-ms"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_seconds {13, "policy-param-unit-seconds"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_packets {14, "policy-param-unit-packets"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_cells {15, "policy-param-unit-cells"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_percent {16, "policy-param-unit-percent"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_per_thousand {17, "policy-param-unit-per-thousand"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_per_million {18, "policy-param-unit-per-million"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_hz {19, "policy-param-unit-hz"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_khz {20, "policy-param-unit-khz"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_mhz {21, "policy-param-unit-mhz"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_ratio {22, "policy-param-unit-ratio"};
const Enum::YLeaf PolicyParamUnit::policy_param_unit_max {23, "policy-param-unit-max"};

const Enum::YLeaf CacState::unknown {0, "unknown"};
const Enum::YLeaf CacState::admit {1, "admit"};
const Enum::YLeaf CacState::redirect {2, "redirect"};
const Enum::YLeaf CacState::ubrl {3, "ubrl"};

const Enum::YLeaf PolicyState::active {0, "active"};
const Enum::YLeaf PolicyState::suspended {1, "suspended"};

const Enum::YLeaf Action::police_transmit {0, "police-transmit"};
const Enum::YLeaf Action::police_set_transmit {1, "police-set-transmit"};
const Enum::YLeaf Action::police_drop {2, "police-drop"};
const Enum::YLeaf Action::police_unknown {3, "police-unknown"};

const Enum::YLeaf ActionOpcode::precedence {0, "precedence"};
const Enum::YLeaf ActionOpcode::dscp {1, "dscp"};
const Enum::YLeaf ActionOpcode::discard_class {2, "discard-class"};
const Enum::YLeaf ActionOpcode::qos_group {3, "qos-group"};
const Enum::YLeaf ActionOpcode::cos_inner {4, "cos-inner"};
const Enum::YLeaf ActionOpcode::cos {5, "cos"};
const Enum::YLeaf ActionOpcode::exp_top {6, "exp-top"};
const Enum::YLeaf ActionOpcode::exp_imp {7, "exp-imp"};
const Enum::YLeaf ActionOpcode::tunnel_precedence {8, "tunnel-precedence"};
const Enum::YLeaf ActionOpcode::tunnel_dscp {9, "tunnel-dscp"};
const Enum::YLeaf ActionOpcode::itag_dei {10, "itag-dei"};
const Enum::YLeaf ActionOpcode::itag_cos {11, "itag-cos"};
const Enum::YLeaf ActionOpcode::cos_imposition {12, "cos-imposition"};
const Enum::YLeaf ActionOpcode::dei_imposition {13, "dei-imposition"};
const Enum::YLeaf ActionOpcode::dei {14, "dei"};
const Enum::YLeaf ActionOpcode::no_marking {15, "no-marking"};

const Enum::YLeaf TbAlgorithm::inactive {0, "inactive"};
const Enum::YLeaf TbAlgorithm::single {1, "single"};
const Enum::YLeaf TbAlgorithm::single_rate_tcm {2, "single-rate-tcm"};
const Enum::YLeaf TbAlgorithm::two_rate_tcm {3, "two-rate-tcm"};
const Enum::YLeaf TbAlgorithm::mef_tcm {4, "mef-tcm"};
const Enum::YLeaf TbAlgorithm::dummy {5, "dummy"};

const Enum::YLeaf QosUnit::invalid {0, "invalid"};
const Enum::YLeaf QosUnit::bytes {1, "bytes"};
const Enum::YLeaf QosUnit::kilobytes {2, "kilobytes"};
const Enum::YLeaf QosUnit::megabytes {3, "megabytes"};
const Enum::YLeaf QosUnit::gigabytes {4, "gigabytes"};
const Enum::YLeaf QosUnit::bps {5, "bps"};
const Enum::YLeaf QosUnit::kbps {6, "kbps"};
const Enum::YLeaf QosUnit::mbps {7, "mbps"};
const Enum::YLeaf QosUnit::gbps {8, "gbps"};
const Enum::YLeaf QosUnit::cells_per_second {9, "cells-per-second"};
const Enum::YLeaf QosUnit::packets_per_second {10, "packets-per-second"};
const Enum::YLeaf QosUnit::microsecond {11, "microsecond"};
const Enum::YLeaf QosUnit::millisecond {12, "millisecond"};
const Enum::YLeaf QosUnit::packets {13, "packets"};
const Enum::YLeaf QosUnit::cells {14, "cells"};
const Enum::YLeaf QosUnit::percentage {15, "percentage"};
const Enum::YLeaf QosUnit::ratio {16, "ratio"};


}
}

