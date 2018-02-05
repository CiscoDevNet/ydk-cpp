
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs5500_qos_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5500_qos_oper {

PlatformQos::PlatformQos()
    :
    nodes(std::make_shared<PlatformQos::Nodes>())
{
    nodes->parent = this;

    yang_name = "platform-qos"; yang_parent_name = "Cisco-IOS-XR-ncs5500-qos-oper"; is_top_level_class = true; has_list_ancestor = false;
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
    path_buffer << "Cisco-IOS-XR-ncs5500-qos-oper:platform-qos";
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
    path_buffer << "Cisco-IOS-XR-ncs5500-qos-oper:platform-qos/" << get_segment_path();
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
	,interfaces(std::make_shared<PlatformQos::Nodes::Node::Interfaces>())
	,remote_interfaces(std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces>())
{
    bundle_interfaces->parent = this;
    interfaces->parent = this;
    remote_interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PlatformQos::Nodes::Node::~Node()
{
}

bool PlatformQos::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (remote_interfaces !=  nullptr && remote_interfaces->has_data());
}

bool PlatformQos::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (remote_interfaces !=  nullptr && remote_interfaces->has_operation());
}

std::string PlatformQos::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-qos-oper:platform-qos/nodes/" << get_segment_path();
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

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PlatformQos::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "remote-interfaces")
    {
        if(remote_interfaces == nullptr)
        {
            remote_interfaces = std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces>();
        }
        return remote_interfaces;
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

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(remote_interfaces != nullptr)
    {
        children["remote-interfaces"] = remote_interfaces;
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
    if(name == "bundle-interfaces" || name == "interfaces" || name == "remote-interfaces" || name == "node-name")
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
    interface_name{YType::str, "interface-name"},
    npu_id{YType::int32, "npu-id"},
    qos_direction{YType::str, "qos-direction"}
    	,
    member_interfaces(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>())
	,policy_details(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails>())
	,classes(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes>())
{
    member_interfaces->parent = this;
    policy_details->parent = this;
    classes->parent = this;

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    return interface_name.is_set
	|| npu_id.is_set
	|| qos_direction.is_set
	|| (member_interfaces !=  nullptr && member_interfaces->has_data())
	|| (policy_details !=  nullptr && policy_details->has_data())
	|| (classes !=  nullptr && classes->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(qos_direction.yfilter)
	|| (member_interfaces !=  nullptr && member_interfaces->has_operation())
	|| (policy_details !=  nullptr && policy_details->has_operation())
	|| (classes !=  nullptr && classes->has_operation());
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
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (qos_direction.is_set || is_set(qos_direction.yfilter)) leaf_name_data.push_back(qos_direction.get_name_leafdata());

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

    if(child_yang_name == "policy-details")
    {
        if(policy_details == nullptr)
        {
            policy_details = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails>();
        }
        return policy_details;
    }

    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes>();
        }
        return classes;
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

    if(policy_details != nullptr)
    {
        children["policy-details"] = policy_details;
    }

    if(classes != nullptr)
    {
        children["classes"] = classes;
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
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-direction")
    {
        qos_direction = value;
        qos_direction.value_namespace = name_space;
        qos_direction.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "qos-direction")
    {
        qos_direction.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interfaces" || name == "policy-details" || name == "classes" || name == "interface-name" || name == "npu-id" || name == "qos-direction")
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
    policy_details(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails>())
	,classes(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes>())
{
    policy_details->parent = this;
    classes->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_data() const
{
    return interface_name.is_set
	|| (policy_details !=  nullptr && policy_details->has_data())
	|| (classes !=  nullptr && classes->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (policy_details !=  nullptr && policy_details->has_operation())
	|| (classes !=  nullptr && classes->has_operation());
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
    if(child_yang_name == "policy-details")
    {
        if(policy_details == nullptr)
        {
            policy_details = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails>();
        }
        return policy_details;
    }

    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes>();
        }
        return classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_details != nullptr)
    {
        children["policy-details"] = policy_details;
    }

    if(classes != nullptr)
    {
        children["classes"] = classes;
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
    if(name == "policy-details" || name == "classes" || name == "interface-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::PolicyDetails()
    :
    npu_id{YType::uint32, "npu-id"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_bandwidth_kbps{YType::uint32, "interface-bandwidth-kbps"},
    policy_name{YType::str, "policy-name"},
    total_number_of_classes{YType::uint16, "total-number-of-classes"},
    voq_base_address{YType::uint32, "voq-base-address"},
    voq_stats_handle{YType::uint64, "voq-stats-handle"},
    stats_accounting_type{YType::enumeration, "stats-accounting-type"},
    policy_status{YType::enumeration, "policy-status"},
    interface_status{YType::enumeration, "interface-status"}
{

    yang_name = "policy-details"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::~PolicyDetails()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::has_data() const
{
    return npu_id.is_set
	|| interface_handle.is_set
	|| interface_bandwidth_kbps.is_set
	|| policy_name.is_set
	|| total_number_of_classes.is_set
	|| voq_base_address.is_set
	|| voq_stats_handle.is_set
	|| stats_accounting_type.is_set
	|| policy_status.is_set
	|| interface_status.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_bandwidth_kbps.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(total_number_of_classes.yfilter)
	|| ydk::is_set(voq_base_address.yfilter)
	|| ydk::is_set(voq_stats_handle.yfilter)
	|| ydk::is_set(stats_accounting_type.yfilter)
	|| ydk::is_set(policy_status.yfilter)
	|| ydk::is_set(interface_status.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_bandwidth_kbps.is_set || is_set(interface_bandwidth_kbps.yfilter)) leaf_name_data.push_back(interface_bandwidth_kbps.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (total_number_of_classes.is_set || is_set(total_number_of_classes.yfilter)) leaf_name_data.push_back(total_number_of_classes.get_name_leafdata());
    if (voq_base_address.is_set || is_set(voq_base_address.yfilter)) leaf_name_data.push_back(voq_base_address.get_name_leafdata());
    if (voq_stats_handle.is_set || is_set(voq_stats_handle.yfilter)) leaf_name_data.push_back(voq_stats_handle.get_name_leafdata());
    if (stats_accounting_type.is_set || is_set(stats_accounting_type.yfilter)) leaf_name_data.push_back(stats_accounting_type.get_name_leafdata());
    if (policy_status.is_set || is_set(policy_status.yfilter)) leaf_name_data.push_back(policy_status.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.yfilter)) leaf_name_data.push_back(interface_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps = value;
        interface_bandwidth_kbps.value_namespace = name_space;
        interface_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes = value;
        total_number_of_classes.value_namespace = name_space;
        total_number_of_classes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address = value;
        voq_base_address.value_namespace = name_space;
        voq_base_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle = value;
        voq_stats_handle.value_namespace = name_space;
        voq_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type = value;
        stats_accounting_type.value_namespace = name_space;
        stats_accounting_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-status")
    {
        policy_status = value;
        policy_status.value_namespace = name_space;
        policy_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
        interface_status.value_namespace = name_space;
        interface_status.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes.yfilter = yfilter;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address.yfilter = yfilter;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle.yfilter = yfilter;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type.yfilter = yfilter;
    }
    if(value_path == "policy-status")
    {
        policy_status.yfilter = yfilter;
    }
    if(value_path == "interface-status")
    {
        interface_status.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::PolicyDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-id" || name == "interface-handle" || name == "interface-bandwidth-kbps" || name == "policy-name" || name == "total-number-of-classes" || name == "voq-base-address" || name == "voq-stats-handle" || name == "stats-accounting-type" || name == "policy-status" || name == "interface-status")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Classes()
{

    yang_name = "classes"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::~Classes()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Class()
    :
    level_one_class_name{YType::str, "level-one-class-name"},
    level_two_class_name{YType::str, "level-two-class-name"},
    class_level{YType::enumeration, "class-level"},
    egress_queue_id{YType::int32, "egress-queue-id"},
    queue_type{YType::enumeration, "queue-type"},
    priority_level{YType::enumeration, "priority-level"},
    hardware_max_rate_kbps{YType::uint32, "hardware-max-rate-kbps"},
    hardware_min_rate_kbps{YType::uint32, "hardware-min-rate-kbps"},
    config_excess_bandwidth_percent{YType::uint32, "config-excess-bandwidth-percent"},
    config_excess_bandwidth_unit{YType::uint32, "config-excess-bandwidth-unit"},
    hardware_excess_bandwidth_weight{YType::uint32, "hardware-excess-bandwidth-weight"},
    network_min_bandwidth_kbps{YType::uint32, "network-min-bandwidth-kbps"},
    hardware_queue_limit_bytes{YType::uint64, "hardware-queue-limit-bytes"},
    hardware_queue_limit_microseconds{YType::uint64, "hardware-queue-limit-microseconds"},
    policer_bucket_id{YType::uint32, "policer-bucket-id"},
    policer_stats_handle{YType::uint64, "policer-stats-handle"},
    hardware_policer_average_rate_kbps{YType::uint32, "hardware-policer-average-rate-kbps"},
    hardware_policer_peak_rate_kbps{YType::uint32, "hardware-policer-peak-rate-kbps"},
    hardware_policer_conform_burst_bytes{YType::uint32, "hardware-policer-conform-burst-bytes"},
    hardware_policer_excess_burst_bytes{YType::uint32, "hardware-policer-excess-burst-bytes"}
    	,
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate>())
	,config_min_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate>())
	,config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit>())
	,config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate>())
	,config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate>())
	,config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst>())
	,config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst>())
	,conform_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction>())
	,exceed_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction>())
	,violate_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction>())
{
    config_max_rate->parent = this;
    config_min_rate->parent = this;
    config_queue_limit->parent = this;
    config_policer_average_rate->parent = this;
    config_policer_peak_rate->parent = this;
    config_policer_conform_burst->parent = this;
    config_policer_excess_burst->parent = this;
    conform_action->parent = this;
    exceed_action->parent = this;
    violate_action->parent = this;

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::has_data() const
{
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    return level_one_class_name.is_set
	|| level_two_class_name.is_set
	|| class_level.is_set
	|| egress_queue_id.is_set
	|| queue_type.is_set
	|| priority_level.is_set
	|| hardware_max_rate_kbps.is_set
	|| hardware_min_rate_kbps.is_set
	|| config_excess_bandwidth_percent.is_set
	|| config_excess_bandwidth_unit.is_set
	|| hardware_excess_bandwidth_weight.is_set
	|| network_min_bandwidth_kbps.is_set
	|| hardware_queue_limit_bytes.is_set
	|| hardware_queue_limit_microseconds.is_set
	|| policer_bucket_id.is_set
	|| policer_stats_handle.is_set
	|| hardware_policer_average_rate_kbps.is_set
	|| hardware_policer_peak_rate_kbps.is_set
	|| hardware_policer_conform_burst_bytes.is_set
	|| hardware_policer_excess_burst_bytes.is_set
	|| (config_max_rate !=  nullptr && config_max_rate->has_data())
	|| (config_min_rate !=  nullptr && config_min_rate->has_data())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_data())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_data())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_data())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level_one_class_name.yfilter)
	|| ydk::is_set(level_two_class_name.yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(egress_queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(hardware_max_rate_kbps.yfilter)
	|| ydk::is_set(hardware_min_rate_kbps.yfilter)
	|| ydk::is_set(config_excess_bandwidth_percent.yfilter)
	|| ydk::is_set(config_excess_bandwidth_unit.yfilter)
	|| ydk::is_set(hardware_excess_bandwidth_weight.yfilter)
	|| ydk::is_set(network_min_bandwidth_kbps.yfilter)
	|| ydk::is_set(hardware_queue_limit_bytes.yfilter)
	|| ydk::is_set(hardware_queue_limit_microseconds.yfilter)
	|| ydk::is_set(policer_bucket_id.yfilter)
	|| ydk::is_set(policer_stats_handle.yfilter)
	|| ydk::is_set(hardware_policer_average_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_peak_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_conform_burst_bytes.yfilter)
	|| ydk::is_set(hardware_policer_excess_burst_bytes.yfilter)
	|| (config_max_rate !=  nullptr && config_max_rate->has_operation())
	|| (config_min_rate !=  nullptr && config_min_rate->has_operation())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_operation())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_operation())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_operation())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_operation())
	|| (conform_action !=  nullptr && conform_action->has_operation())
	|| (exceed_action !=  nullptr && exceed_action->has_operation())
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[level-one-class-name='" <<level_one_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_one_class_name.is_set || is_set(level_one_class_name.yfilter)) leaf_name_data.push_back(level_one_class_name.get_name_leafdata());
    if (level_two_class_name.is_set || is_set(level_two_class_name.yfilter)) leaf_name_data.push_back(level_two_class_name.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (egress_queue_id.is_set || is_set(egress_queue_id.yfilter)) leaf_name_data.push_back(egress_queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (hardware_max_rate_kbps.is_set || is_set(hardware_max_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_max_rate_kbps.get_name_leafdata());
    if (hardware_min_rate_kbps.is_set || is_set(hardware_min_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_min_rate_kbps.get_name_leafdata());
    if (config_excess_bandwidth_percent.is_set || is_set(config_excess_bandwidth_percent.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_percent.get_name_leafdata());
    if (config_excess_bandwidth_unit.is_set || is_set(config_excess_bandwidth_unit.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_unit.get_name_leafdata());
    if (hardware_excess_bandwidth_weight.is_set || is_set(hardware_excess_bandwidth_weight.yfilter)) leaf_name_data.push_back(hardware_excess_bandwidth_weight.get_name_leafdata());
    if (network_min_bandwidth_kbps.is_set || is_set(network_min_bandwidth_kbps.yfilter)) leaf_name_data.push_back(network_min_bandwidth_kbps.get_name_leafdata());
    if (hardware_queue_limit_bytes.is_set || is_set(hardware_queue_limit_bytes.yfilter)) leaf_name_data.push_back(hardware_queue_limit_bytes.get_name_leafdata());
    if (hardware_queue_limit_microseconds.is_set || is_set(hardware_queue_limit_microseconds.yfilter)) leaf_name_data.push_back(hardware_queue_limit_microseconds.get_name_leafdata());
    if (policer_bucket_id.is_set || is_set(policer_bucket_id.yfilter)) leaf_name_data.push_back(policer_bucket_id.get_name_leafdata());
    if (policer_stats_handle.is_set || is_set(policer_stats_handle.yfilter)) leaf_name_data.push_back(policer_stats_handle.get_name_leafdata());
    if (hardware_policer_average_rate_kbps.is_set || is_set(hardware_policer_average_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_average_rate_kbps.get_name_leafdata());
    if (hardware_policer_peak_rate_kbps.is_set || is_set(hardware_policer_peak_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_peak_rate_kbps.get_name_leafdata());
    if (hardware_policer_conform_burst_bytes.is_set || is_set(hardware_policer_conform_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_conform_burst_bytes.get_name_leafdata());
    if (hardware_policer_excess_burst_bytes.is_set || is_set(hardware_policer_excess_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_excess_burst_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark>();
        c->parent = this;
        ip_mark.push_back(c);
        return c;
    }

    if(child_yang_name == "common-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark>();
        c->parent = this;
        common_mark.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark>();
        c->parent = this;
        mpls_mark.push_back(c);
        return c;
    }

    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred>();
        c->parent = this;
        wred.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config_max_rate != nullptr)
    {
        children["config-max-rate"] = config_max_rate;
    }

    if(config_min_rate != nullptr)
    {
        children["config-min-rate"] = config_min_rate;
    }

    if(config_queue_limit != nullptr)
    {
        children["config-queue-limit"] = config_queue_limit;
    }

    if(config_policer_average_rate != nullptr)
    {
        children["config-policer-average-rate"] = config_policer_average_rate;
    }

    if(config_policer_peak_rate != nullptr)
    {
        children["config-policer-peak-rate"] = config_policer_peak_rate;
    }

    if(config_policer_conform_burst != nullptr)
    {
        children["config-policer-conform-burst"] = config_policer_conform_burst;
    }

    if(config_policer_excess_burst != nullptr)
    {
        children["config-policer-excess-burst"] = config_policer_excess_burst;
    }

    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    count = 0;
    for (auto const & c : ip_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : common_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : mpls_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name = value;
        level_one_class_name.value_namespace = name_space;
        level_one_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name = value;
        level_two_class_name.value_namespace = name_space;
        level_two_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id = value;
        egress_queue_id.value_namespace = name_space;
        egress_queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps = value;
        hardware_max_rate_kbps.value_namespace = name_space;
        hardware_max_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps = value;
        hardware_min_rate_kbps.value_namespace = name_space;
        hardware_min_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent = value;
        config_excess_bandwidth_percent.value_namespace = name_space;
        config_excess_bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit = value;
        config_excess_bandwidth_unit.value_namespace = name_space;
        config_excess_bandwidth_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight = value;
        hardware_excess_bandwidth_weight.value_namespace = name_space;
        hardware_excess_bandwidth_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps = value;
        network_min_bandwidth_kbps.value_namespace = name_space;
        network_min_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes = value;
        hardware_queue_limit_bytes.value_namespace = name_space;
        hardware_queue_limit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds = value;
        hardware_queue_limit_microseconds.value_namespace = name_space;
        hardware_queue_limit_microseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id = value;
        policer_bucket_id.value_namespace = name_space;
        policer_bucket_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle = value;
        policer_stats_handle.value_namespace = name_space;
        policer_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps = value;
        hardware_policer_average_rate_kbps.value_namespace = name_space;
        hardware_policer_average_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps = value;
        hardware_policer_peak_rate_kbps.value_namespace = name_space;
        hardware_policer_peak_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes = value;
        hardware_policer_conform_burst_bytes.value_namespace = name_space;
        hardware_policer_conform_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes = value;
        hardware_policer_excess_burst_bytes.value_namespace = name_space;
        hardware_policer_excess_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name.yfilter = yfilter;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name.yfilter = yfilter;
    }
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit.yfilter = yfilter;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight.yfilter = yfilter;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds.yfilter = yfilter;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id.yfilter = yfilter;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark>();
        c->parent = this;
        mark.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark>();
        c->parent = this;
        mark.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark>();
        c->parent = this;
        mark.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
    	,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue>())
	,config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold>())
	,config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::has_data() const
{
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_match_type.yfilter)
	|| ydk::is_set(hardware_min_threshold_bytes.yfilter)
	|| ydk::is_set(hardware_max_threshold_bytes.yfilter)
	|| ydk::is_set(first_segment.yfilter)
	|| ydk::is_set(segment_size.yfilter)
	|| (wred_match_value !=  nullptr && wred_match_value->has_operation())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_operation())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(wred_match_value != nullptr)
    {
        children["wred-match-value"] = wred_match_value;
    }

    if(config_min_threshold != nullptr)
    {
        children["config-min-threshold"] = config_min_threshold;
    }

    if(config_max_threshold != nullptr)
    {
        children["config-max-threshold"] = config_max_threshold;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type = value;
        wred_match_type.value_namespace = name_space;
        wred_match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes = value;
        hardware_min_threshold_bytes.value_namespace = name_space;
        hardware_min_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes = value;
        hardware_max_threshold_bytes.value_namespace = name_space;
        hardware_max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-segment")
    {
        first_segment = value;
        first_segment.value_namespace = name_space;
        first_segment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-size")
    {
        segment_size = value;
        segment_size.value_namespace = name_space;
        segment_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type.yfilter = yfilter;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "first-segment")
    {
        first_segment.yfilter = yfilter;
    }
    if(value_path == "segment-size")
    {
        segment_size.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::WredMatchValue()
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::has_data() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dnx_qosea_show_red_match_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::Classes::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::PolicyDetails()
    :
    npu_id{YType::uint32, "npu-id"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_bandwidth_kbps{YType::uint32, "interface-bandwidth-kbps"},
    policy_name{YType::str, "policy-name"},
    total_number_of_classes{YType::uint16, "total-number-of-classes"},
    voq_base_address{YType::uint32, "voq-base-address"},
    voq_stats_handle{YType::uint64, "voq-stats-handle"},
    stats_accounting_type{YType::enumeration, "stats-accounting-type"},
    policy_status{YType::enumeration, "policy-status"},
    interface_status{YType::enumeration, "interface-status"}
{

    yang_name = "policy-details"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::~PolicyDetails()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::has_data() const
{
    return npu_id.is_set
	|| interface_handle.is_set
	|| interface_bandwidth_kbps.is_set
	|| policy_name.is_set
	|| total_number_of_classes.is_set
	|| voq_base_address.is_set
	|| voq_stats_handle.is_set
	|| stats_accounting_type.is_set
	|| policy_status.is_set
	|| interface_status.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_bandwidth_kbps.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(total_number_of_classes.yfilter)
	|| ydk::is_set(voq_base_address.yfilter)
	|| ydk::is_set(voq_stats_handle.yfilter)
	|| ydk::is_set(stats_accounting_type.yfilter)
	|| ydk::is_set(policy_status.yfilter)
	|| ydk::is_set(interface_status.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_bandwidth_kbps.is_set || is_set(interface_bandwidth_kbps.yfilter)) leaf_name_data.push_back(interface_bandwidth_kbps.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (total_number_of_classes.is_set || is_set(total_number_of_classes.yfilter)) leaf_name_data.push_back(total_number_of_classes.get_name_leafdata());
    if (voq_base_address.is_set || is_set(voq_base_address.yfilter)) leaf_name_data.push_back(voq_base_address.get_name_leafdata());
    if (voq_stats_handle.is_set || is_set(voq_stats_handle.yfilter)) leaf_name_data.push_back(voq_stats_handle.get_name_leafdata());
    if (stats_accounting_type.is_set || is_set(stats_accounting_type.yfilter)) leaf_name_data.push_back(stats_accounting_type.get_name_leafdata());
    if (policy_status.is_set || is_set(policy_status.yfilter)) leaf_name_data.push_back(policy_status.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.yfilter)) leaf_name_data.push_back(interface_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps = value;
        interface_bandwidth_kbps.value_namespace = name_space;
        interface_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes = value;
        total_number_of_classes.value_namespace = name_space;
        total_number_of_classes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address = value;
        voq_base_address.value_namespace = name_space;
        voq_base_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle = value;
        voq_stats_handle.value_namespace = name_space;
        voq_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type = value;
        stats_accounting_type.value_namespace = name_space;
        stats_accounting_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-status")
    {
        policy_status = value;
        policy_status.value_namespace = name_space;
        policy_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
        interface_status.value_namespace = name_space;
        interface_status.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes.yfilter = yfilter;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address.yfilter = yfilter;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle.yfilter = yfilter;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type.yfilter = yfilter;
    }
    if(value_path == "policy-status")
    {
        policy_status.yfilter = yfilter;
    }
    if(value_path == "interface-status")
    {
        interface_status.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-id" || name == "interface-handle" || name == "interface-bandwidth-kbps" || name == "policy-name" || name == "total-number-of-classes" || name == "voq-base-address" || name == "voq-stats-handle" || name == "stats-accounting-type" || name == "policy-status" || name == "interface-status")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Classes()
{

    yang_name = "classes"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::~Classes()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Class()
    :
    level_one_class_name{YType::str, "level-one-class-name"},
    level_two_class_name{YType::str, "level-two-class-name"},
    class_level{YType::enumeration, "class-level"},
    egress_queue_id{YType::int32, "egress-queue-id"},
    queue_type{YType::enumeration, "queue-type"},
    priority_level{YType::enumeration, "priority-level"},
    hardware_max_rate_kbps{YType::uint32, "hardware-max-rate-kbps"},
    hardware_min_rate_kbps{YType::uint32, "hardware-min-rate-kbps"},
    config_excess_bandwidth_percent{YType::uint32, "config-excess-bandwidth-percent"},
    config_excess_bandwidth_unit{YType::uint32, "config-excess-bandwidth-unit"},
    hardware_excess_bandwidth_weight{YType::uint32, "hardware-excess-bandwidth-weight"},
    network_min_bandwidth_kbps{YType::uint32, "network-min-bandwidth-kbps"},
    hardware_queue_limit_bytes{YType::uint64, "hardware-queue-limit-bytes"},
    hardware_queue_limit_microseconds{YType::uint64, "hardware-queue-limit-microseconds"},
    policer_bucket_id{YType::uint32, "policer-bucket-id"},
    policer_stats_handle{YType::uint64, "policer-stats-handle"},
    hardware_policer_average_rate_kbps{YType::uint32, "hardware-policer-average-rate-kbps"},
    hardware_policer_peak_rate_kbps{YType::uint32, "hardware-policer-peak-rate-kbps"},
    hardware_policer_conform_burst_bytes{YType::uint32, "hardware-policer-conform-burst-bytes"},
    hardware_policer_excess_burst_bytes{YType::uint32, "hardware-policer-excess-burst-bytes"}
    	,
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate>())
	,config_min_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate>())
	,config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit>())
	,config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate>())
	,config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate>())
	,config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst>())
	,config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst>())
	,conform_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction>())
	,exceed_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction>())
	,violate_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction>())
{
    config_max_rate->parent = this;
    config_min_rate->parent = this;
    config_queue_limit->parent = this;
    config_policer_average_rate->parent = this;
    config_policer_peak_rate->parent = this;
    config_policer_conform_burst->parent = this;
    config_policer_excess_burst->parent = this;
    conform_action->parent = this;
    exceed_action->parent = this;
    violate_action->parent = this;

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::has_data() const
{
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    return level_one_class_name.is_set
	|| level_two_class_name.is_set
	|| class_level.is_set
	|| egress_queue_id.is_set
	|| queue_type.is_set
	|| priority_level.is_set
	|| hardware_max_rate_kbps.is_set
	|| hardware_min_rate_kbps.is_set
	|| config_excess_bandwidth_percent.is_set
	|| config_excess_bandwidth_unit.is_set
	|| hardware_excess_bandwidth_weight.is_set
	|| network_min_bandwidth_kbps.is_set
	|| hardware_queue_limit_bytes.is_set
	|| hardware_queue_limit_microseconds.is_set
	|| policer_bucket_id.is_set
	|| policer_stats_handle.is_set
	|| hardware_policer_average_rate_kbps.is_set
	|| hardware_policer_peak_rate_kbps.is_set
	|| hardware_policer_conform_burst_bytes.is_set
	|| hardware_policer_excess_burst_bytes.is_set
	|| (config_max_rate !=  nullptr && config_max_rate->has_data())
	|| (config_min_rate !=  nullptr && config_min_rate->has_data())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_data())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_data())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_data())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level_one_class_name.yfilter)
	|| ydk::is_set(level_two_class_name.yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(egress_queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(hardware_max_rate_kbps.yfilter)
	|| ydk::is_set(hardware_min_rate_kbps.yfilter)
	|| ydk::is_set(config_excess_bandwidth_percent.yfilter)
	|| ydk::is_set(config_excess_bandwidth_unit.yfilter)
	|| ydk::is_set(hardware_excess_bandwidth_weight.yfilter)
	|| ydk::is_set(network_min_bandwidth_kbps.yfilter)
	|| ydk::is_set(hardware_queue_limit_bytes.yfilter)
	|| ydk::is_set(hardware_queue_limit_microseconds.yfilter)
	|| ydk::is_set(policer_bucket_id.yfilter)
	|| ydk::is_set(policer_stats_handle.yfilter)
	|| ydk::is_set(hardware_policer_average_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_peak_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_conform_burst_bytes.yfilter)
	|| ydk::is_set(hardware_policer_excess_burst_bytes.yfilter)
	|| (config_max_rate !=  nullptr && config_max_rate->has_operation())
	|| (config_min_rate !=  nullptr && config_min_rate->has_operation())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_operation())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_operation())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_operation())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_operation())
	|| (conform_action !=  nullptr && conform_action->has_operation())
	|| (exceed_action !=  nullptr && exceed_action->has_operation())
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[level-one-class-name='" <<level_one_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_one_class_name.is_set || is_set(level_one_class_name.yfilter)) leaf_name_data.push_back(level_one_class_name.get_name_leafdata());
    if (level_two_class_name.is_set || is_set(level_two_class_name.yfilter)) leaf_name_data.push_back(level_two_class_name.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (egress_queue_id.is_set || is_set(egress_queue_id.yfilter)) leaf_name_data.push_back(egress_queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (hardware_max_rate_kbps.is_set || is_set(hardware_max_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_max_rate_kbps.get_name_leafdata());
    if (hardware_min_rate_kbps.is_set || is_set(hardware_min_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_min_rate_kbps.get_name_leafdata());
    if (config_excess_bandwidth_percent.is_set || is_set(config_excess_bandwidth_percent.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_percent.get_name_leafdata());
    if (config_excess_bandwidth_unit.is_set || is_set(config_excess_bandwidth_unit.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_unit.get_name_leafdata());
    if (hardware_excess_bandwidth_weight.is_set || is_set(hardware_excess_bandwidth_weight.yfilter)) leaf_name_data.push_back(hardware_excess_bandwidth_weight.get_name_leafdata());
    if (network_min_bandwidth_kbps.is_set || is_set(network_min_bandwidth_kbps.yfilter)) leaf_name_data.push_back(network_min_bandwidth_kbps.get_name_leafdata());
    if (hardware_queue_limit_bytes.is_set || is_set(hardware_queue_limit_bytes.yfilter)) leaf_name_data.push_back(hardware_queue_limit_bytes.get_name_leafdata());
    if (hardware_queue_limit_microseconds.is_set || is_set(hardware_queue_limit_microseconds.yfilter)) leaf_name_data.push_back(hardware_queue_limit_microseconds.get_name_leafdata());
    if (policer_bucket_id.is_set || is_set(policer_bucket_id.yfilter)) leaf_name_data.push_back(policer_bucket_id.get_name_leafdata());
    if (policer_stats_handle.is_set || is_set(policer_stats_handle.yfilter)) leaf_name_data.push_back(policer_stats_handle.get_name_leafdata());
    if (hardware_policer_average_rate_kbps.is_set || is_set(hardware_policer_average_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_average_rate_kbps.get_name_leafdata());
    if (hardware_policer_peak_rate_kbps.is_set || is_set(hardware_policer_peak_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_peak_rate_kbps.get_name_leafdata());
    if (hardware_policer_conform_burst_bytes.is_set || is_set(hardware_policer_conform_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_conform_burst_bytes.get_name_leafdata());
    if (hardware_policer_excess_burst_bytes.is_set || is_set(hardware_policer_excess_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_excess_burst_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark>();
        c->parent = this;
        ip_mark.push_back(c);
        return c;
    }

    if(child_yang_name == "common-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark>();
        c->parent = this;
        common_mark.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark>();
        c->parent = this;
        mpls_mark.push_back(c);
        return c;
    }

    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred>();
        c->parent = this;
        wred.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config_max_rate != nullptr)
    {
        children["config-max-rate"] = config_max_rate;
    }

    if(config_min_rate != nullptr)
    {
        children["config-min-rate"] = config_min_rate;
    }

    if(config_queue_limit != nullptr)
    {
        children["config-queue-limit"] = config_queue_limit;
    }

    if(config_policer_average_rate != nullptr)
    {
        children["config-policer-average-rate"] = config_policer_average_rate;
    }

    if(config_policer_peak_rate != nullptr)
    {
        children["config-policer-peak-rate"] = config_policer_peak_rate;
    }

    if(config_policer_conform_burst != nullptr)
    {
        children["config-policer-conform-burst"] = config_policer_conform_burst;
    }

    if(config_policer_excess_burst != nullptr)
    {
        children["config-policer-excess-burst"] = config_policer_excess_burst;
    }

    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    count = 0;
    for (auto const & c : ip_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : common_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : mpls_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name = value;
        level_one_class_name.value_namespace = name_space;
        level_one_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name = value;
        level_two_class_name.value_namespace = name_space;
        level_two_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id = value;
        egress_queue_id.value_namespace = name_space;
        egress_queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps = value;
        hardware_max_rate_kbps.value_namespace = name_space;
        hardware_max_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps = value;
        hardware_min_rate_kbps.value_namespace = name_space;
        hardware_min_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent = value;
        config_excess_bandwidth_percent.value_namespace = name_space;
        config_excess_bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit = value;
        config_excess_bandwidth_unit.value_namespace = name_space;
        config_excess_bandwidth_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight = value;
        hardware_excess_bandwidth_weight.value_namespace = name_space;
        hardware_excess_bandwidth_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps = value;
        network_min_bandwidth_kbps.value_namespace = name_space;
        network_min_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes = value;
        hardware_queue_limit_bytes.value_namespace = name_space;
        hardware_queue_limit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds = value;
        hardware_queue_limit_microseconds.value_namespace = name_space;
        hardware_queue_limit_microseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id = value;
        policer_bucket_id.value_namespace = name_space;
        policer_bucket_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle = value;
        policer_stats_handle.value_namespace = name_space;
        policer_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps = value;
        hardware_policer_average_rate_kbps.value_namespace = name_space;
        hardware_policer_average_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps = value;
        hardware_policer_peak_rate_kbps.value_namespace = name_space;
        hardware_policer_peak_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes = value;
        hardware_policer_conform_burst_bytes.value_namespace = name_space;
        hardware_policer_conform_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes = value;
        hardware_policer_excess_burst_bytes.value_namespace = name_space;
        hardware_policer_excess_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name.yfilter = yfilter;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name.yfilter = yfilter;
    }
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit.yfilter = yfilter;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight.yfilter = yfilter;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds.yfilter = yfilter;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id.yfilter = yfilter;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark>();
        c->parent = this;
        mark.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark>();
        c->parent = this;
        mark.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark>();
        c->parent = this;
        mark.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
    	,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue>())
	,config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold>())
	,config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::has_data() const
{
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_match_type.yfilter)
	|| ydk::is_set(hardware_min_threshold_bytes.yfilter)
	|| ydk::is_set(hardware_max_threshold_bytes.yfilter)
	|| ydk::is_set(first_segment.yfilter)
	|| ydk::is_set(segment_size.yfilter)
	|| (wred_match_value !=  nullptr && wred_match_value->has_operation())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_operation())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(wred_match_value != nullptr)
    {
        children["wred-match-value"] = wred_match_value;
    }

    if(config_min_threshold != nullptr)
    {
        children["config-min-threshold"] = config_min_threshold;
    }

    if(config_max_threshold != nullptr)
    {
        children["config-max-threshold"] = config_max_threshold;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type = value;
        wred_match_type.value_namespace = name_space;
        wred_match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes = value;
        hardware_min_threshold_bytes.value_namespace = name_space;
        hardware_min_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes = value;
        hardware_max_threshold_bytes.value_namespace = name_space;
        hardware_max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-segment")
    {
        first_segment = value;
        first_segment.value_namespace = name_space;
        first_segment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-size")
    {
        segment_size = value;
        segment_size.value_namespace = name_space;
        segment_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type.yfilter = yfilter;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "first-segment")
    {
        first_segment.yfilter = yfilter;
    }
    if(value_path == "segment-size")
    {
        segment_size.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::WredMatchValue()
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::has_data() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dnx_qosea_show_red_match_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::Classes::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
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
    interface_name{YType::str, "interface-name"},
    qos_direction{YType::str, "qos-direction"}
    	,
    policy_details(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails>())
	,classes(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes>())
{
    policy_details->parent = this;
    classes->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| qos_direction.is_set
	|| (policy_details !=  nullptr && policy_details->has_data())
	|| (classes !=  nullptr && classes->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(qos_direction.yfilter)
	|| (policy_details !=  nullptr && policy_details->has_operation())
	|| (classes !=  nullptr && classes->has_operation());
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
    if (qos_direction.is_set || is_set(qos_direction.yfilter)) leaf_name_data.push_back(qos_direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-details")
    {
        if(policy_details == nullptr)
        {
            policy_details = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails>();
        }
        return policy_details;
    }

    if(child_yang_name == "classes")
    {
        if(classes == nullptr)
        {
            classes = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes>();
        }
        return classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_details != nullptr)
    {
        children["policy-details"] = policy_details;
    }

    if(classes != nullptr)
    {
        children["classes"] = classes;
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
    if(value_path == "qos-direction")
    {
        qos_direction = value;
        qos_direction.value_namespace = name_space;
        qos_direction.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "qos-direction")
    {
        qos_direction.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-details" || name == "classes" || name == "interface-name" || name == "qos-direction")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::PolicyDetails()
    :
    npu_id{YType::uint32, "npu-id"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_bandwidth_kbps{YType::uint32, "interface-bandwidth-kbps"},
    policy_name{YType::str, "policy-name"},
    total_number_of_classes{YType::uint16, "total-number-of-classes"},
    voq_base_address{YType::uint32, "voq-base-address"},
    voq_stats_handle{YType::uint64, "voq-stats-handle"},
    stats_accounting_type{YType::enumeration, "stats-accounting-type"},
    policy_status{YType::enumeration, "policy-status"},
    interface_status{YType::enumeration, "interface-status"}
{

    yang_name = "policy-details"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::~PolicyDetails()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::has_data() const
{
    return npu_id.is_set
	|| interface_handle.is_set
	|| interface_bandwidth_kbps.is_set
	|| policy_name.is_set
	|| total_number_of_classes.is_set
	|| voq_base_address.is_set
	|| voq_stats_handle.is_set
	|| stats_accounting_type.is_set
	|| policy_status.is_set
	|| interface_status.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_bandwidth_kbps.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(total_number_of_classes.yfilter)
	|| ydk::is_set(voq_base_address.yfilter)
	|| ydk::is_set(voq_stats_handle.yfilter)
	|| ydk::is_set(stats_accounting_type.yfilter)
	|| ydk::is_set(policy_status.yfilter)
	|| ydk::is_set(interface_status.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_bandwidth_kbps.is_set || is_set(interface_bandwidth_kbps.yfilter)) leaf_name_data.push_back(interface_bandwidth_kbps.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (total_number_of_classes.is_set || is_set(total_number_of_classes.yfilter)) leaf_name_data.push_back(total_number_of_classes.get_name_leafdata());
    if (voq_base_address.is_set || is_set(voq_base_address.yfilter)) leaf_name_data.push_back(voq_base_address.get_name_leafdata());
    if (voq_stats_handle.is_set || is_set(voq_stats_handle.yfilter)) leaf_name_data.push_back(voq_stats_handle.get_name_leafdata());
    if (stats_accounting_type.is_set || is_set(stats_accounting_type.yfilter)) leaf_name_data.push_back(stats_accounting_type.get_name_leafdata());
    if (policy_status.is_set || is_set(policy_status.yfilter)) leaf_name_data.push_back(policy_status.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.yfilter)) leaf_name_data.push_back(interface_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps = value;
        interface_bandwidth_kbps.value_namespace = name_space;
        interface_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes = value;
        total_number_of_classes.value_namespace = name_space;
        total_number_of_classes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address = value;
        voq_base_address.value_namespace = name_space;
        voq_base_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle = value;
        voq_stats_handle.value_namespace = name_space;
        voq_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type = value;
        stats_accounting_type.value_namespace = name_space;
        stats_accounting_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-status")
    {
        policy_status = value;
        policy_status.value_namespace = name_space;
        policy_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
        interface_status.value_namespace = name_space;
        interface_status.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth-kbps")
    {
        interface_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "total-number-of-classes")
    {
        total_number_of_classes.yfilter = yfilter;
    }
    if(value_path == "voq-base-address")
    {
        voq_base_address.yfilter = yfilter;
    }
    if(value_path == "voq-stats-handle")
    {
        voq_stats_handle.yfilter = yfilter;
    }
    if(value_path == "stats-accounting-type")
    {
        stats_accounting_type.yfilter = yfilter;
    }
    if(value_path == "policy-status")
    {
        policy_status.yfilter = yfilter;
    }
    if(value_path == "interface-status")
    {
        interface_status.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-id" || name == "interface-handle" || name == "interface-bandwidth-kbps" || name == "policy-name" || name == "total-number-of-classes" || name == "voq-base-address" || name == "voq-stats-handle" || name == "stats-accounting-type" || name == "policy-status" || name == "interface-status")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Classes()
{

    yang_name = "classes"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::~Classes()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Class()
    :
    level_one_class_name{YType::str, "level-one-class-name"},
    level_two_class_name{YType::str, "level-two-class-name"},
    class_level{YType::enumeration, "class-level"},
    egress_queue_id{YType::int32, "egress-queue-id"},
    queue_type{YType::enumeration, "queue-type"},
    priority_level{YType::enumeration, "priority-level"},
    hardware_max_rate_kbps{YType::uint32, "hardware-max-rate-kbps"},
    hardware_min_rate_kbps{YType::uint32, "hardware-min-rate-kbps"},
    config_excess_bandwidth_percent{YType::uint32, "config-excess-bandwidth-percent"},
    config_excess_bandwidth_unit{YType::uint32, "config-excess-bandwidth-unit"},
    hardware_excess_bandwidth_weight{YType::uint32, "hardware-excess-bandwidth-weight"},
    network_min_bandwidth_kbps{YType::uint32, "network-min-bandwidth-kbps"},
    hardware_queue_limit_bytes{YType::uint64, "hardware-queue-limit-bytes"},
    hardware_queue_limit_microseconds{YType::uint64, "hardware-queue-limit-microseconds"},
    policer_bucket_id{YType::uint32, "policer-bucket-id"},
    policer_stats_handle{YType::uint64, "policer-stats-handle"},
    hardware_policer_average_rate_kbps{YType::uint32, "hardware-policer-average-rate-kbps"},
    hardware_policer_peak_rate_kbps{YType::uint32, "hardware-policer-peak-rate-kbps"},
    hardware_policer_conform_burst_bytes{YType::uint32, "hardware-policer-conform-burst-bytes"},
    hardware_policer_excess_burst_bytes{YType::uint32, "hardware-policer-excess-burst-bytes"}
    	,
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate>())
	,config_min_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate>())
	,config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit>())
	,config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate>())
	,config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate>())
	,config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst>())
	,config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst>())
	,conform_action(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction>())
	,exceed_action(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction>())
	,violate_action(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction>())
{
    config_max_rate->parent = this;
    config_min_rate->parent = this;
    config_queue_limit->parent = this;
    config_policer_average_rate->parent = this;
    config_policer_peak_rate->parent = this;
    config_policer_conform_burst->parent = this;
    config_policer_excess_burst->parent = this;
    conform_action->parent = this;
    exceed_action->parent = this;
    violate_action->parent = this;

    yang_name = "class"; yang_parent_name = "classes"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::has_data() const
{
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    return level_one_class_name.is_set
	|| level_two_class_name.is_set
	|| class_level.is_set
	|| egress_queue_id.is_set
	|| queue_type.is_set
	|| priority_level.is_set
	|| hardware_max_rate_kbps.is_set
	|| hardware_min_rate_kbps.is_set
	|| config_excess_bandwidth_percent.is_set
	|| config_excess_bandwidth_unit.is_set
	|| hardware_excess_bandwidth_weight.is_set
	|| network_min_bandwidth_kbps.is_set
	|| hardware_queue_limit_bytes.is_set
	|| hardware_queue_limit_microseconds.is_set
	|| policer_bucket_id.is_set
	|| policer_stats_handle.is_set
	|| hardware_policer_average_rate_kbps.is_set
	|| hardware_policer_peak_rate_kbps.is_set
	|| hardware_policer_conform_burst_bytes.is_set
	|| hardware_policer_excess_burst_bytes.is_set
	|| (config_max_rate !=  nullptr && config_max_rate->has_data())
	|| (config_min_rate !=  nullptr && config_min_rate->has_data())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_data())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_data())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_data())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.size(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.size(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.size(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level_one_class_name.yfilter)
	|| ydk::is_set(level_two_class_name.yfilter)
	|| ydk::is_set(class_level.yfilter)
	|| ydk::is_set(egress_queue_id.yfilter)
	|| ydk::is_set(queue_type.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(hardware_max_rate_kbps.yfilter)
	|| ydk::is_set(hardware_min_rate_kbps.yfilter)
	|| ydk::is_set(config_excess_bandwidth_percent.yfilter)
	|| ydk::is_set(config_excess_bandwidth_unit.yfilter)
	|| ydk::is_set(hardware_excess_bandwidth_weight.yfilter)
	|| ydk::is_set(network_min_bandwidth_kbps.yfilter)
	|| ydk::is_set(hardware_queue_limit_bytes.yfilter)
	|| ydk::is_set(hardware_queue_limit_microseconds.yfilter)
	|| ydk::is_set(policer_bucket_id.yfilter)
	|| ydk::is_set(policer_stats_handle.yfilter)
	|| ydk::is_set(hardware_policer_average_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_peak_rate_kbps.yfilter)
	|| ydk::is_set(hardware_policer_conform_burst_bytes.yfilter)
	|| ydk::is_set(hardware_policer_excess_burst_bytes.yfilter)
	|| (config_max_rate !=  nullptr && config_max_rate->has_operation())
	|| (config_min_rate !=  nullptr && config_min_rate->has_operation())
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (config_policer_average_rate !=  nullptr && config_policer_average_rate->has_operation())
	|| (config_policer_peak_rate !=  nullptr && config_policer_peak_rate->has_operation())
	|| (config_policer_conform_burst !=  nullptr && config_policer_conform_burst->has_operation())
	|| (config_policer_excess_burst !=  nullptr && config_policer_excess_burst->has_operation())
	|| (conform_action !=  nullptr && conform_action->has_operation())
	|| (exceed_action !=  nullptr && exceed_action->has_operation())
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[level-one-class-name='" <<level_one_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_one_class_name.is_set || is_set(level_one_class_name.yfilter)) leaf_name_data.push_back(level_one_class_name.get_name_leafdata());
    if (level_two_class_name.is_set || is_set(level_two_class_name.yfilter)) leaf_name_data.push_back(level_two_class_name.get_name_leafdata());
    if (class_level.is_set || is_set(class_level.yfilter)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (egress_queue_id.is_set || is_set(egress_queue_id.yfilter)) leaf_name_data.push_back(egress_queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.yfilter)) leaf_name_data.push_back(queue_type.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (hardware_max_rate_kbps.is_set || is_set(hardware_max_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_max_rate_kbps.get_name_leafdata());
    if (hardware_min_rate_kbps.is_set || is_set(hardware_min_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_min_rate_kbps.get_name_leafdata());
    if (config_excess_bandwidth_percent.is_set || is_set(config_excess_bandwidth_percent.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_percent.get_name_leafdata());
    if (config_excess_bandwidth_unit.is_set || is_set(config_excess_bandwidth_unit.yfilter)) leaf_name_data.push_back(config_excess_bandwidth_unit.get_name_leafdata());
    if (hardware_excess_bandwidth_weight.is_set || is_set(hardware_excess_bandwidth_weight.yfilter)) leaf_name_data.push_back(hardware_excess_bandwidth_weight.get_name_leafdata());
    if (network_min_bandwidth_kbps.is_set || is_set(network_min_bandwidth_kbps.yfilter)) leaf_name_data.push_back(network_min_bandwidth_kbps.get_name_leafdata());
    if (hardware_queue_limit_bytes.is_set || is_set(hardware_queue_limit_bytes.yfilter)) leaf_name_data.push_back(hardware_queue_limit_bytes.get_name_leafdata());
    if (hardware_queue_limit_microseconds.is_set || is_set(hardware_queue_limit_microseconds.yfilter)) leaf_name_data.push_back(hardware_queue_limit_microseconds.get_name_leafdata());
    if (policer_bucket_id.is_set || is_set(policer_bucket_id.yfilter)) leaf_name_data.push_back(policer_bucket_id.get_name_leafdata());
    if (policer_stats_handle.is_set || is_set(policer_stats_handle.yfilter)) leaf_name_data.push_back(policer_stats_handle.get_name_leafdata());
    if (hardware_policer_average_rate_kbps.is_set || is_set(hardware_policer_average_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_average_rate_kbps.get_name_leafdata());
    if (hardware_policer_peak_rate_kbps.is_set || is_set(hardware_policer_peak_rate_kbps.yfilter)) leaf_name_data.push_back(hardware_policer_peak_rate_kbps.get_name_leafdata());
    if (hardware_policer_conform_burst_bytes.is_set || is_set(hardware_policer_conform_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_conform_burst_bytes.get_name_leafdata());
    if (hardware_policer_excess_burst_bytes.is_set || is_set(hardware_policer_excess_burst_bytes.yfilter)) leaf_name_data.push_back(hardware_policer_excess_burst_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark>();
        c->parent = this;
        ip_mark.push_back(c);
        return c;
    }

    if(child_yang_name == "common-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark>();
        c->parent = this;
        common_mark.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark>();
        c->parent = this;
        mpls_mark.push_back(c);
        return c;
    }

    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred>();
        c->parent = this;
        wred.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config_max_rate != nullptr)
    {
        children["config-max-rate"] = config_max_rate;
    }

    if(config_min_rate != nullptr)
    {
        children["config-min-rate"] = config_min_rate;
    }

    if(config_queue_limit != nullptr)
    {
        children["config-queue-limit"] = config_queue_limit;
    }

    if(config_policer_average_rate != nullptr)
    {
        children["config-policer-average-rate"] = config_policer_average_rate;
    }

    if(config_policer_peak_rate != nullptr)
    {
        children["config-policer-peak-rate"] = config_policer_peak_rate;
    }

    if(config_policer_conform_burst != nullptr)
    {
        children["config-policer-conform-burst"] = config_policer_conform_burst;
    }

    if(config_policer_excess_burst != nullptr)
    {
        children["config-policer-excess-burst"] = config_policer_excess_burst;
    }

    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    if(violate_action != nullptr)
    {
        children["violate-action"] = violate_action;
    }

    count = 0;
    for (auto const & c : ip_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : common_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : mpls_mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name = value;
        level_one_class_name.value_namespace = name_space;
        level_one_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name = value;
        level_two_class_name.value_namespace = name_space;
        level_two_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-level")
    {
        class_level = value;
        class_level.value_namespace = name_space;
        class_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id = value;
        egress_queue_id.value_namespace = name_space;
        egress_queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
        queue_type.value_namespace = name_space;
        queue_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps = value;
        hardware_max_rate_kbps.value_namespace = name_space;
        hardware_max_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps = value;
        hardware_min_rate_kbps.value_namespace = name_space;
        hardware_min_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent = value;
        config_excess_bandwidth_percent.value_namespace = name_space;
        config_excess_bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit = value;
        config_excess_bandwidth_unit.value_namespace = name_space;
        config_excess_bandwidth_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight = value;
        hardware_excess_bandwidth_weight.value_namespace = name_space;
        hardware_excess_bandwidth_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps = value;
        network_min_bandwidth_kbps.value_namespace = name_space;
        network_min_bandwidth_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes = value;
        hardware_queue_limit_bytes.value_namespace = name_space;
        hardware_queue_limit_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds = value;
        hardware_queue_limit_microseconds.value_namespace = name_space;
        hardware_queue_limit_microseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id = value;
        policer_bucket_id.value_namespace = name_space;
        policer_bucket_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle = value;
        policer_stats_handle.value_namespace = name_space;
        policer_stats_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps = value;
        hardware_policer_average_rate_kbps.value_namespace = name_space;
        hardware_policer_average_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps = value;
        hardware_policer_peak_rate_kbps.value_namespace = name_space;
        hardware_policer_peak_rate_kbps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes = value;
        hardware_policer_conform_burst_bytes.value_namespace = name_space;
        hardware_policer_conform_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes = value;
        hardware_policer_excess_burst_bytes.value_namespace = name_space;
        hardware_policer_excess_burst_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-one-class-name")
    {
        level_one_class_name.yfilter = yfilter;
    }
    if(value_path == "level-two-class-name")
    {
        level_two_class_name.yfilter = yfilter;
    }
    if(value_path == "class-level")
    {
        class_level.yfilter = yfilter;
    }
    if(value_path == "egress-queue-id")
    {
        egress_queue_id.yfilter = yfilter;
    }
    if(value_path == "queue-type")
    {
        queue_type.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "hardware-max-rate-kbps")
    {
        hardware_max_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-min-rate-kbps")
    {
        hardware_min_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-percent")
    {
        config_excess_bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "config-excess-bandwidth-unit")
    {
        config_excess_bandwidth_unit.yfilter = yfilter;
    }
    if(value_path == "hardware-excess-bandwidth-weight")
    {
        hardware_excess_bandwidth_weight.yfilter = yfilter;
    }
    if(value_path == "network-min-bandwidth-kbps")
    {
        network_min_bandwidth_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-bytes")
    {
        hardware_queue_limit_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit-microseconds")
    {
        hardware_queue_limit_microseconds.yfilter = yfilter;
    }
    if(value_path == "policer-bucket-id")
    {
        policer_bucket_id.yfilter = yfilter;
    }
    if(value_path == "policer-stats-handle")
    {
        policer_stats_handle.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-average-rate-kbps")
    {
        hardware_policer_average_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-peak-rate-kbps")
    {
        hardware_policer_peak_rate_kbps.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-conform-burst-bytes")
    {
        hardware_policer_conform_burst_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-policer-excess-burst-bytes")
    {
        hardware_policer_excess_burst_bytes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark>();
        c->parent = this;
        mark.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark>();
        c->parent = this;
        mark.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::has_data() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.size(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark>();
        c->parent = this;
        mark.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mark)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::has_data() const
{
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-type")
    {
        mark_type = value;
        mark_type.value_namespace = name_space;
        mark_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
        mark_value.value_namespace = name_space;
        mark_value.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-type")
    {
        mark_type.yfilter = yfilter;
    }
    if(value_path == "mark-value")
    {
        mark_value.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
    	,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue>())
	,config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold>())
	,config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::has_data() const
{
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wred_match_type.yfilter)
	|| ydk::is_set(hardware_min_threshold_bytes.yfilter)
	|| ydk::is_set(hardware_max_threshold_bytes.yfilter)
	|| ydk::is_set(first_segment.yfilter)
	|| ydk::is_set(segment_size.yfilter)
	|| (wred_match_value !=  nullptr && wred_match_value->has_operation())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_operation())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(wred_match_value != nullptr)
    {
        children["wred-match-value"] = wred_match_value;
    }

    if(config_min_threshold != nullptr)
    {
        children["config-min-threshold"] = config_min_threshold;
    }

    if(config_max_threshold != nullptr)
    {
        children["config-max-threshold"] = config_max_threshold;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type = value;
        wred_match_type.value_namespace = name_space;
        wred_match_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes = value;
        hardware_min_threshold_bytes.value_namespace = name_space;
        hardware_min_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes = value;
        hardware_max_threshold_bytes.value_namespace = name_space;
        hardware_max_threshold_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-segment")
    {
        first_segment = value;
        first_segment.value_namespace = name_space;
        first_segment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-size")
    {
        segment_size = value;
        segment_size.value_namespace = name_space;
        segment_size.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wred-match-type")
    {
        wred_match_type.yfilter = yfilter;
    }
    if(value_path == "hardware-min-threshold-bytes")
    {
        hardware_min_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "hardware-max-threshold-bytes")
    {
        hardware_max_threshold_bytes.yfilter = yfilter;
    }
    if(value_path == "first-segment")
    {
        first_segment.yfilter = yfilter;
    }
    if(value_path == "segment-size")
    {
        segment_size.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::WredMatchValue()
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::has_data() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.size(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dnx_qosea_show_red_match_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::has_data() const
{
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-value")
    {
        policy_value = value;
        policy_value.value_namespace = name_space;
        policy_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-unit")
    {
        policy_unit = value;
        policy_unit.value_namespace = name_space;
        policy_unit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-value")
    {
        policy_value.yfilter = yfilter;
    }
    if(value_path == "policy-unit")
    {
        policy_unit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Classes::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterfaces()
{

    yang_name = "remote-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::RemoteInterfaces::~RemoteInterfaces()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::has_data() const
{
    for (std::size_t index=0; index<remote_interface.size(); index++)
    {
        if(remote_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::has_operation() const
{
    for (std::size_t index=0; index<remote_interface.size(); index++)
    {
        if(remote_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::RemoteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-interface")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface>();
        c->parent = this;
        remote_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : remote_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::RemoteInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-interface")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteInterface()
    :
    interface_name{YType::str, "interface-name"},
    policy_name{YType::str, "policy-name"},
    virtual_output_queue_statistics_handle{YType::uint64, "virtual-output-queue-statistics-handle"},
    interface_handle{YType::uint32, "interface-handle"},
    number_of_virtual_output_queues{YType::uint32, "number-of-virtual-output-queues"},
    number_of_classes{YType::uint32, "number-of-classes"}
{

    yang_name = "remote-interface"; yang_parent_name = "remote-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::~RemoteInterface()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::has_data() const
{
    for (std::size_t index=0; index<remote_class.size(); index++)
    {
        if(remote_class[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| policy_name.is_set
	|| virtual_output_queue_statistics_handle.is_set
	|| interface_handle.is_set
	|| number_of_virtual_output_queues.is_set
	|| number_of_classes.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::has_operation() const
{
    for (std::size_t index=0; index<remote_class.size(); index++)
    {
        if(remote_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(virtual_output_queue_statistics_handle.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(number_of_virtual_output_queues.yfilter)
	|| ydk::is_set(number_of_classes.yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (virtual_output_queue_statistics_handle.is_set || is_set(virtual_output_queue_statistics_handle.yfilter)) leaf_name_data.push_back(virtual_output_queue_statistics_handle.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (number_of_virtual_output_queues.is_set || is_set(number_of_virtual_output_queues.yfilter)) leaf_name_data.push_back(number_of_virtual_output_queues.get_name_leafdata());
    if (number_of_classes.is_set || is_set(number_of_classes.yfilter)) leaf_name_data.push_back(number_of_classes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass>();
        c->parent = this;
        remote_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : remote_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "virtual-output-queue-statistics-handle")
    {
        virtual_output_queue_statistics_handle = value;
        virtual_output_queue_statistics_handle.value_namespace = name_space;
        virtual_output_queue_statistics_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-virtual-output-queues")
    {
        number_of_virtual_output_queues = value;
        number_of_virtual_output_queues.value_namespace = name_space;
        number_of_virtual_output_queues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-classes")
    {
        number_of_classes = value;
        number_of_classes.value_namespace = name_space;
        number_of_classes.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "virtual-output-queue-statistics-handle")
    {
        virtual_output_queue_statistics_handle.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "number-of-virtual-output-queues")
    {
        number_of_virtual_output_queues.yfilter = yfilter;
    }
    if(value_path == "number-of-classes")
    {
        number_of_classes.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-class" || name == "interface-name" || name == "policy-name" || name == "virtual-output-queue-statistics-handle" || name == "interface-handle" || name == "number-of-virtual-output-queues" || name == "number-of-classes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::RemoteClass()
    :
    class_name{YType::str, "class-name"},
    class_id{YType::uint32, "class-id"},
    cos_q{YType::uint32, "cos-q"},
    queue_limit{YType::uint32, "queue-limit"},
    hardware_queue_limit{YType::uint32, "hardware-queue-limit"}
{

    yang_name = "remote-class"; yang_parent_name = "remote-interface"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::~RemoteClass()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::has_data() const
{
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<hw_wred.size(); index++)
    {
        if(hw_wred[index]->has_data())
            return true;
    }
    return class_name.is_set
	|| class_id.is_set
	|| cos_q.is_set
	|| queue_limit.is_set
	|| hardware_queue_limit.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::has_operation() const
{
    for (std::size_t index=0; index<wred.size(); index++)
    {
        if(wred[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<hw_wred.size(); index++)
    {
        if(hw_wred[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(class_id.yfilter)
	|| ydk::is_set(cos_q.yfilter)
	|| ydk::is_set(queue_limit.yfilter)
	|| ydk::is_set(hardware_queue_limit.yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (class_id.is_set || is_set(class_id.yfilter)) leaf_name_data.push_back(class_id.get_name_leafdata());
    if (cos_q.is_set || is_set(cos_q.yfilter)) leaf_name_data.push_back(cos_q.get_name_leafdata());
    if (queue_limit.is_set || is_set(queue_limit.yfilter)) leaf_name_data.push_back(queue_limit.get_name_leafdata());
    if (hardware_queue_limit.is_set || is_set(hardware_queue_limit.yfilter)) leaf_name_data.push_back(hardware_queue_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred>();
        c->parent = this;
        wred.push_back(c);
        return c;
    }

    if(child_yang_name == "hw-wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred>();
        c->parent = this;
        hw_wred.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : hw_wred)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-id")
    {
        class_id = value;
        class_id.value_namespace = name_space;
        class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-q")
    {
        cos_q = value;
        cos_q.value_namespace = name_space;
        cos_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-limit")
    {
        queue_limit = value;
        queue_limit.value_namespace = name_space;
        queue_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-queue-limit")
    {
        hardware_queue_limit = value;
        hardware_queue_limit.value_namespace = name_space;
        hardware_queue_limit.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "class-id")
    {
        class_id.yfilter = yfilter;
    }
    if(value_path == "cos-q")
    {
        cos_q.yfilter = yfilter;
    }
    if(value_path == "queue-limit")
    {
        queue_limit.yfilter = yfilter;
    }
    if(value_path == "hardware-queue-limit")
    {
        hardware_queue_limit.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred" || name == "hw-wred" || name == "class-name" || name == "class-id" || name == "cos-q" || name == "queue-limit" || name == "hardware-queue-limit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::Wred()
    :
    min_threshold{YType::uint32, "min-threshold"},
    max_threshold{YType::uint32, "max-threshold"},
    drop_probability{YType::uint32, "drop-probability"}
{

    yang_name = "wred"; yang_parent_name = "remote-class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::has_data() const
{
    return min_threshold.is_set
	|| max_threshold.is_set
	|| drop_probability.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_threshold.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(drop_probability.yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (drop_probability.is_set || is_set(drop_probability.yfilter)) leaf_name_data.push_back(drop_probability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-probability")
    {
        drop_probability = value;
        drop_probability.value_namespace = name_space;
        drop_probability.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "drop-probability")
    {
        drop_probability.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-threshold" || name == "max-threshold" || name == "drop-probability")
        return true;
    return false;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::HwWred()
    :
    min_threshold{YType::uint32, "min-threshold"},
    max_threshold{YType::uint32, "max-threshold"},
    drop_probability{YType::uint32, "drop-probability"}
{

    yang_name = "hw-wred"; yang_parent_name = "remote-class"; is_top_level_class = false; has_list_ancestor = true;
}

PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::~HwWred()
{
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::has_data() const
{
    return min_threshold.is_set
	|| max_threshold.is_set
	|| drop_probability.is_set;
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_threshold.yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(drop_probability.yfilter);
}

std::string PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());
    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (drop_probability.is_set || is_set(drop_probability.yfilter)) leaf_name_data.push_back(drop_probability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-probability")
    {
        drop_probability = value;
        drop_probability.value_namespace = name_space;
        drop_probability.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "drop-probability")
    {
        drop_probability.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::RemoteInterfaces::RemoteInterface::RemoteClass::HwWred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-threshold" || name == "max-threshold" || name == "drop-probability")
        return true;
    return false;
}

const Enum::YLeaf DnxQoseaShowWred::wred_cos {0, "wred-cos"};
const Enum::YLeaf DnxQoseaShowWred::wred_dscp {1, "wred-dscp"};
const Enum::YLeaf DnxQoseaShowWred::wred_precedence {2, "wred-precedence"};
const Enum::YLeaf DnxQoseaShowWred::wred_discard_class {3, "wred-discard-class"};
const Enum::YLeaf DnxQoseaShowWred::wred_mpls_exp {4, "wred-mpls-exp"};
const Enum::YLeaf DnxQoseaShowWred::red_with_user_min_max {5, "red-with-user-min-max"};
const Enum::YLeaf DnxQoseaShowWred::red_with_default_min_max {6, "red-with-default-min-max"};
const Enum::YLeaf DnxQoseaShowWred::wred_invalid {7, "wred-invalid"};

const Enum::YLeaf DnxQoseaShowAction::action_none {0, "action-none"};
const Enum::YLeaf DnxQoseaShowAction::action_transmit {1, "action-transmit"};
const Enum::YLeaf DnxQoseaShowAction::action_drop {2, "action-drop"};
const Enum::YLeaf DnxQoseaShowAction::action_mark {3, "action-mark"};

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

const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level1 {0, "high-priority-level1"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level2 {1, "high-priority-level2"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level3 {2, "high-priority-level3"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level4 {3, "high-priority-level4"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level5 {4, "high-priority-level5"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level6 {5, "high-priority-level6"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level7 {6, "high-priority-level7"};
const Enum::YLeaf DnxQoseaShowHpLevel::unknown {7, "unknown"};

const Enum::YLeaf DnxQoseaShowQueue::low_priority_default_queue {0, "low-priority-default-queue"};
const Enum::YLeaf DnxQoseaShowQueue::low_priority_queue {1, "low-priority-queue"};
const Enum::YLeaf DnxQoseaShowQueue::high_priority_queue {2, "high-priority-queue"};
const Enum::YLeaf DnxQoseaShowQueue::unknown_queue_type {3, "unknown-queue-type"};

const Enum::YLeaf DnxQoseaShowMark::mark_none {0, "mark-none"};
const Enum::YLeaf DnxQoseaShowMark::dscp {1, "dscp"};
const Enum::YLeaf DnxQoseaShowMark::precedence {2, "precedence"};
const Enum::YLeaf DnxQoseaShowMark::mpls_topmost {3, "mpls-topmost"};
const Enum::YLeaf DnxQoseaShowMark::mpls_imposition {4, "mpls-imposition"};
const Enum::YLeaf DnxQoseaShowMark::qos_group {5, "qos-group"};
const Enum::YLeaf DnxQoseaShowMark::discard_class {6, "discard-class"};
const Enum::YLeaf DnxQoseaShowMark::cos {7, "cos"};
const Enum::YLeaf DnxQoseaShowMark::inner_cos {8, "inner-cos"};
const Enum::YLeaf DnxQoseaShowMark::un_supported9 {9, "un-supported9"};
const Enum::YLeaf DnxQoseaShowMark::un_supported10 {10, "un-supported10"};
const Enum::YLeaf DnxQoseaShowMark::dscp_tunnel {11, "dscp-tunnel"};
const Enum::YLeaf DnxQoseaShowMark::precedence_tunnel {12, "precedence-tunnel"};
const Enum::YLeaf DnxQoseaShowMark::dei {13, "dei"};
const Enum::YLeaf DnxQoseaShowMark::dei_imposition {14, "dei-imposition"};

const Enum::YLeaf DnxQoseaShowLevel::level1 {0, "level1"};
const Enum::YLeaf DnxQoseaShowLevel::level2 {1, "level2"};
const Enum::YLeaf DnxQoseaShowLevel::level3 {2, "level3"};
const Enum::YLeaf DnxQoseaShowLevel::level4 {3, "level4"};
const Enum::YLeaf DnxQoseaShowLevel::level5 {4, "level5"};

const Enum::YLeaf DnxQoseaShowIntfStatus::state_unknown {0, "state-unknown"};
const Enum::YLeaf DnxQoseaShowIntfStatus::state_down {1, "state-down"};

const Enum::YLeaf DnxQoseaShowPolicyStatus::no_error {0, "no-error"};
const Enum::YLeaf DnxQoseaShowPolicyStatus::policy_in_reset {1, "policy-in-reset"};

const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_no_ac_count_pref {0, "qos-serv-policy-no-ac-count-pref"};
const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_ac_count_l2 {1, "qos-serv-policy-ac-count-l2"};
const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_no_ac_count_l2 {2, "qos-serv-policy-no-ac-count-l2"};
const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_ac_count_user_def {3, "qos-serv-policy-ac-count-user-def"};
const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_ac_count_l1 {4, "qos-serv-policy-ac-count-l1"};


}
}

