
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs5500_qos_oper_0.hpp"
#include "Cisco_IOS_XR_ncs5500_qos_oper_1.hpp"

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
    if (is_presence_container) return true;
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
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "platform-qos"; is_top_level_class = false; has_list_ancestor = false; 
}

PlatformQos::Nodes::~Nodes()
{
}

bool PlatformQos::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
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
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::get_children() const
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
    , interfaces(std::make_shared<PlatformQos::Nodes::Node::Interfaces>())
    , qos_interfaces(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces>())
    , bundle_interface_singles(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles>())
    , remote_interfaces(std::make_shared<PlatformQos::Nodes::Node::RemoteInterfaces>())
{
    bundle_interfaces->parent = this;
    interfaces->parent = this;
    qos_interfaces->parent = this;
    bundle_interface_singles->parent = this;
    remote_interfaces->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

PlatformQos::Nodes::Node::~Node()
{
}

bool PlatformQos::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (qos_interfaces !=  nullptr && qos_interfaces->has_data())
	|| (bundle_interface_singles !=  nullptr && bundle_interface_singles->has_data())
	|| (remote_interfaces !=  nullptr && remote_interfaces->has_data());
}

bool PlatformQos::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (qos_interfaces !=  nullptr && qos_interfaces->has_operation())
	|| (bundle_interface_singles !=  nullptr && bundle_interface_singles->has_operation())
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
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
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

    if(child_yang_name == "qos-interfaces")
    {
        if(qos_interfaces == nullptr)
        {
            qos_interfaces = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces>();
        }
        return qos_interfaces;
    }

    if(child_yang_name == "bundle-interface-singles")
    {
        if(bundle_interface_singles == nullptr)
        {
            bundle_interface_singles = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaceSingles>();
        }
        return bundle_interface_singles;
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

    if(qos_interfaces != nullptr)
    {
        children["qos-interfaces"] = qos_interfaces;
    }

    if(bundle_interface_singles != nullptr)
    {
        children["bundle-interface-singles"] = bundle_interface_singles;
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
    if(name == "bundle-interfaces" || name == "interfaces" || name == "qos-interfaces" || name == "bundle-interface-singles" || name == "remote-interfaces" || name == "node-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterfaces()
    :
    bundle_interface(this, {})
{

    yang_name = "bundle-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::~BundleInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_interface.len(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.len(); index++)
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
        bundle_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bundle_interface.entities())
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
    npu_id{YType::uint32, "npu-id"},
    qos_direction{YType::str, "qos-direction"}
        ,
    policy_details(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails>())
    , member_interfaces(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>())
    , class_table(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable>())
{
    policy_details->parent = this;
    member_interfaces->parent = this;
    class_table->parent = this;

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| npu_id.is_set
	|| qos_direction.is_set
	|| (policy_details !=  nullptr && policy_details->has_data())
	|| (member_interfaces !=  nullptr && member_interfaces->has_data())
	|| (class_table !=  nullptr && class_table->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(qos_direction.yfilter)
	|| (policy_details !=  nullptr && policy_details->has_operation())
	|| (member_interfaces !=  nullptr && member_interfaces->has_operation())
	|| (class_table !=  nullptr && class_table->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface";
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
    if(child_yang_name == "policy-details")
    {
        if(policy_details == nullptr)
        {
            policy_details = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::PolicyDetails>();
        }
        return policy_details;
    }

    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces == nullptr)
        {
            member_interfaces = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>();
        }
        return member_interfaces;
    }

    if(child_yang_name == "class-table")
    {
        if(class_table == nullptr)
        {
            class_table = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable>();
        }
        return class_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(policy_details != nullptr)
    {
        children["policy-details"] = policy_details;
    }

    if(member_interfaces != nullptr)
    {
        children["member-interfaces"] = member_interfaces;
    }

    if(class_table != nullptr)
    {
        children["class-table"] = class_table;
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
    if(name == "policy-details" || name == "member-interfaces" || name == "class-table" || name == "interface-name" || name == "npu-id" || name == "qos-direction")
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
    if (is_presence_container) return true;
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

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterfaces()
    :
    member_interface(this, {"interface_name"})
{

    yang_name = "member-interfaces"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::~MemberInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_interface.len(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.len(); index++)
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
        member_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : member_interface.entities())
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
    , class_table(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable>())
{
    policy_details->parent = this;
    class_table->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (policy_details !=  nullptr && policy_details->has_data())
	|| (class_table !=  nullptr && class_table->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (policy_details !=  nullptr && policy_details->has_operation())
	|| (class_table !=  nullptr && class_table->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
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

    if(child_yang_name == "class-table")
    {
        if(class_table == nullptr)
        {
            class_table = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable>();
        }
        return class_table;
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

    if(class_table != nullptr)
    {
        children["class-table"] = class_table;
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
    if(name == "policy-details" || name == "class-table" || name == "interface-name")
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
    if (is_presence_container) return true;
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

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::ClassTable()
    :
    class_(this, {"level_one_class_name"})
{

    yang_name = "class-table"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::~ClassTable()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Class()
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
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate>())
    , config_min_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate>())
    , config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit>())
    , config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate>())
    , config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate>())
    , config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst>())
    , config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst>())
    , conform_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction>())
    , exceed_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction>())
    , violate_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction>())
    , ip_mark(this, {})
    , common_mark(this, {})
    , mpls_mark(this, {})
    , wred(this, {})
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

    yang_name = "class"; yang_parent_name = "class-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(level_one_class_name, "level-one-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::get_name_leaf_data() const
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

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark>();
        c->parent = this;
        ip_mark.append(c);
        return c;
    }

    if(child_yang_name == "common-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark>();
        c->parent = this;
        common_mark.append(c);
        return c;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark>();
        c->parent = this;
        mpls_mark.append(c);
        return c;
    }

    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred>();
        c->parent = this;
        wred.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::get_children() const
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
    for (auto c : ip_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : common_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mpls_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : wred.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
        ,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue>())
    , config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold>())
    , config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::has_data() const
{
    if (is_presence_container) return true;
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::has_operation() const
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

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::get_children() const
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::WredMatchValue()
    :
    dnx_qosea_show_red_match_value(this, {})
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dnx_qosea_show_red_match_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::ClassTable::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::ClassTable()
    :
    class_(this, {"level_one_class_name"})
{

    yang_name = "class-table"; yang_parent_name = "bundle-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::~ClassTable()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Class()
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
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate>())
    , config_min_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate>())
    , config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit>())
    , config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate>())
    , config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate>())
    , config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst>())
    , config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst>())
    , conform_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction>())
    , exceed_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction>())
    , violate_action(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction>())
    , ip_mark(this, {})
    , common_mark(this, {})
    , mpls_mark(this, {})
    , wred(this, {})
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

    yang_name = "class"; yang_parent_name = "class-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(level_one_class_name, "level-one-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::get_name_leaf_data() const
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

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark>();
        c->parent = this;
        ip_mark.append(c);
        return c;
    }

    if(child_yang_name == "common-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark>();
        c->parent = this;
        common_mark.append(c);
        return c;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark>();
        c->parent = this;
        mpls_mark.append(c);
        return c;
    }

    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred>();
        c->parent = this;
        wred.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::get_children() const
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
    for (auto c : ip_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : common_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mpls_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : wred.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
        ,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue>())
    , config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold>())
    , config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::has_data() const
{
    if (is_presence_container) return true;
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::has_operation() const
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

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::get_children() const
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::WredMatchValue()
    :
    dnx_qosea_show_red_match_value(this, {})
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dnx_qosea_show_red_match_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::ClassTable::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::~Interfaces()
{
}

bool PlatformQos::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
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
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::get_children() const
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
    policy_details(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails>())
    , output(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output>())
    , class_table(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable>())
{
    policy_details->parent = this;
    output->parent = this;
    class_table->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (policy_details !=  nullptr && policy_details->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (class_table !=  nullptr && class_table->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (policy_details !=  nullptr && policy_details->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (class_table !=  nullptr && class_table->has_operation());
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
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
    if(child_yang_name == "policy-details")
    {
        if(policy_details == nullptr)
        {
            policy_details = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::PolicyDetails>();
        }
        return policy_details;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output>();
        }
        return output;
    }

    if(child_yang_name == "class-table")
    {
        if(class_table == nullptr)
        {
            class_table = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable>();
        }
        return class_table;
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

    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(class_table != nullptr)
    {
        children["class-table"] = class_table;
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
    if(name == "policy-details" || name == "output" || name == "class-table" || name == "interface-name")
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
    if (is_presence_container) return true;
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

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Output()
    :
    qos_class_table(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable>())
{
    qos_class_table->parent = this;

    yang_name = "output"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::~Output()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_data() const
{
    if (is_presence_container) return true;
    return (qos_class_table !=  nullptr && qos_class_table->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_operation() const
{
    return is_set(yfilter)
	|| (qos_class_table !=  nullptr && qos_class_table->has_operation());
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
    if(child_yang_name == "qos-class-table")
    {
        if(qos_class_table == nullptr)
        {
            qos_class_table = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable>();
        }
        return qos_class_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qos_class_table != nullptr)
    {
        children["qos-class-table"] = qos_class_table;
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
    if(name == "qos-class-table")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::QosClassTable()
    :
    class_(this, {"level_one_class_name"})
{

    yang_name = "qos-class-table"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::~QosClassTable()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Class()
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
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate>())
    , config_min_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate>())
    , config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit>())
    , config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate>())
    , config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate>())
    , config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst>())
    , config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst>())
    , conform_action(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction>())
    , exceed_action(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction>())
    , violate_action(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction>())
    , ip_mark(this, {})
    , common_mark(this, {})
    , mpls_mark(this, {})
    , wred(this, {})
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

    yang_name = "class"; yang_parent_name = "qos-class-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(level_one_class_name, "level-one-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::get_name_leaf_data() const
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

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark>();
        c->parent = this;
        ip_mark.append(c);
        return c;
    }

    if(child_yang_name == "common-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark>();
        c->parent = this;
        common_mark.append(c);
        return c;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark>();
        c->parent = this;
        mpls_mark.append(c);
        return c;
    }

    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred>();
        c->parent = this;
        wred.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::get_children() const
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
    for (auto c : ip_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : common_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mpls_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : wred.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
        ,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue>())
    , config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold>())
    , config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::has_data() const
{
    if (is_presence_container) return true;
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::has_operation() const
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

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::get_children() const
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::WredMatchValue()
    :
    dnx_qosea_show_red_match_value(this, {})
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dnx_qosea_show_red_match_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::QosClassTable::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::ClassTable()
    :
    class_(this, {"level_one_class_name"})
{

    yang_name = "class-table"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::~ClassTable()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Class()
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
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate>())
    , config_min_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate>())
    , config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit>())
    , config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate>())
    , config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate>())
    , config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst>())
    , config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst>())
    , conform_action(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction>())
    , exceed_action(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction>())
    , violate_action(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction>())
    , ip_mark(this, {})
    , common_mark(this, {})
    , mpls_mark(this, {})
    , wred(this, {})
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

    yang_name = "class"; yang_parent_name = "class-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(level_one_class_name, "level-one-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::get_name_leaf_data() const
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

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark>();
        c->parent = this;
        ip_mark.append(c);
        return c;
    }

    if(child_yang_name == "common-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark>();
        c->parent = this;
        common_mark.append(c);
        return c;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark>();
        c->parent = this;
        mpls_mark.append(c);
        return c;
    }

    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred>();
        c->parent = this;
        wred.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::get_children() const
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
    for (auto c : ip_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : common_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mpls_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : wred.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
        ,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue>())
    , config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold>())
    , config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::has_data() const
{
    if (is_presence_container) return true;
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::has_operation() const
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

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::get_children() const
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::WredMatchValue()
    :
    dnx_qosea_show_red_match_value(this, {})
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dnx_qosea_show_red_match_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::Interfaces::Interface::ClassTable::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterfaces()
    :
    qos_interface(this, {"interface_name"})
{

    yang_name = "qos-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::~QosInterfaces()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qos_interface.len(); index++)
    {
        if(qos_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::QosInterfaces::has_operation() const
{
    for (std::size_t index=0; index<qos_interface.len(); index++)
    {
        if(qos_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-interface")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface>();
        c->parent = this;
        qos_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : qos_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::QosInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-interface")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::QosInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    input(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input>())
    , output(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "qos-interface"; yang_parent_name = "qos-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::~QosInterface()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "interface-name")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::Input()
    :
    qos_class_table(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable>())
{
    qos_class_table->parent = this;

    yang_name = "input"; yang_parent_name = "qos-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::~Input()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::has_data() const
{
    if (is_presence_container) return true;
    return (qos_class_table !=  nullptr && qos_class_table->has_data());
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::has_operation() const
{
    return is_set(yfilter)
	|| (qos_class_table !=  nullptr && qos_class_table->has_operation());
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-class-table")
    {
        if(qos_class_table == nullptr)
        {
            qos_class_table = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable>();
        }
        return qos_class_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qos_class_table != nullptr)
    {
        children["qos-class-table"] = qos_class_table;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-class-table")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::QosClassTable()
    :
    class_(this, {"level_one_class_name"})
{

    yang_name = "qos-class-table"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::~QosClassTable()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Class()
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
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate>())
    , config_min_rate(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate>())
    , config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit>())
    , config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate>())
    , config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate>())
    , config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst>())
    , config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst>())
    , conform_action(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction>())
    , exceed_action(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction>())
    , violate_action(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction>())
    , ip_mark(this, {})
    , common_mark(this, {})
    , mpls_mark(this, {})
    , wred(this, {})
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

    yang_name = "class"; yang_parent_name = "qos-class-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(level_one_class_name, "level-one-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::get_name_leaf_data() const
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

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark>();
        c->parent = this;
        ip_mark.append(c);
        return c;
    }

    if(child_yang_name == "common-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark>();
        c->parent = this;
        common_mark.append(c);
        return c;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark>();
        c->parent = this;
        mpls_mark.append(c);
        return c;
    }

    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred>();
        c->parent = this;
        wred.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::get_children() const
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
    for (auto c : ip_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : common_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mpls_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : wred.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::Wred()
    :
    wred_match_type{YType::enumeration, "wred-match-type"},
    hardware_min_threshold_bytes{YType::uint32, "hardware-min-threshold-bytes"},
    hardware_max_threshold_bytes{YType::uint32, "hardware-max-threshold-bytes"},
    first_segment{YType::uint16, "first-segment"},
    segment_size{YType::uint32, "segment-size"}
        ,
    wred_match_value(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue>())
    , config_min_threshold(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold>())
    , config_max_threshold(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold>())
{
    wred_match_value->parent = this;
    config_min_threshold->parent = this;
    config_max_threshold->parent = this;

    yang_name = "wred"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::has_data() const
{
    if (is_presence_container) return true;
    return wred_match_type.is_set
	|| hardware_min_threshold_bytes.is_set
	|| hardware_max_threshold_bytes.is_set
	|| first_segment.is_set
	|| segment_size.is_set
	|| (wred_match_value !=  nullptr && wred_match_value->has_data())
	|| (config_min_threshold !=  nullptr && config_min_threshold->has_data())
	|| (config_max_threshold !=  nullptr && config_max_threshold->has_data());
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::has_operation() const
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

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wred_match_type.is_set || is_set(wred_match_type.yfilter)) leaf_name_data.push_back(wred_match_type.get_name_leafdata());
    if (hardware_min_threshold_bytes.is_set || is_set(hardware_min_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_min_threshold_bytes.get_name_leafdata());
    if (hardware_max_threshold_bytes.is_set || is_set(hardware_max_threshold_bytes.yfilter)) leaf_name_data.push_back(hardware_max_threshold_bytes.get_name_leafdata());
    if (first_segment.is_set || is_set(first_segment.yfilter)) leaf_name_data.push_back(first_segment.get_name_leafdata());
    if (segment_size.is_set || is_set(segment_size.yfilter)) leaf_name_data.push_back(segment_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wred-match-value")
    {
        if(wred_match_value == nullptr)
        {
            wred_match_value = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue>();
        }
        return wred_match_value;
    }

    if(child_yang_name == "config-min-threshold")
    {
        if(config_min_threshold == nullptr)
        {
            config_min_threshold = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold>();
        }
        return config_min_threshold;
    }

    if(child_yang_name == "config-max-threshold")
    {
        if(config_max_threshold == nullptr)
        {
            config_max_threshold = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold>();
        }
        return config_max_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::get_children() const
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wred-match-value" || name == "config-min-threshold" || name == "config-max-threshold" || name == "wred-match-type" || name == "hardware-min-threshold-bytes" || name == "hardware-max-threshold-bytes" || name == "first-segment" || name == "segment-size")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::WredMatchValue()
    :
    dnx_qosea_show_red_match_value(this, {})
{

    yang_name = "wred-match-value"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::~WredMatchValue()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::has_operation() const
{
    for (std::size_t index=0; index<dnx_qosea_show_red_match_value.len(); index++)
    {
        if(dnx_qosea_show_red_match_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dnx-qosea-show-red-match-value")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue>();
        c->parent = this;
        dnx_qosea_show_red_match_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dnx_qosea_show_red_match_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnx-qosea-show-red-match-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::DnxQoseaShowRedMatchValue()
    :
    range_start{YType::uint8, "range-start"},
    range_end{YType::uint8, "range-end"}
{

    yang_name = "dnx-qosea-show-red-match-value"; yang_parent_name = "wred-match-value"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::~DnxQoseaShowRedMatchValue()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnx-qosea-show-red-match-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::WredMatchValue::DnxQoseaShowRedMatchValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::ConfigMinThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::~ConfigMinThreshold()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMinThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::ConfigMaxThreshold()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-threshold"; yang_parent_name = "wred"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::~ConfigMaxThreshold()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Input::QosClassTable::Class::Wred::ConfigMaxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::Output()
    :
    qos_class_table(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable>())
{
    qos_class_table->parent = this;

    yang_name = "output"; yang_parent_name = "qos-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::~Output()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::has_data() const
{
    if (is_presence_container) return true;
    return (qos_class_table !=  nullptr && qos_class_table->has_data());
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::has_operation() const
{
    return is_set(yfilter)
	|| (qos_class_table !=  nullptr && qos_class_table->has_operation());
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos-class-table")
    {
        if(qos_class_table == nullptr)
        {
            qos_class_table = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable>();
        }
        return qos_class_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qos_class_table != nullptr)
    {
        children["qos-class-table"] = qos_class_table;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-class-table")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::QosClassTable()
    :
    class_(this, {"level_one_class_name"})
{

    yang_name = "qos-class-table"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::~QosClassTable()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class>();
        c->parent = this;
        class_.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : class_.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Class()
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
    config_max_rate(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate>())
    , config_min_rate(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate>())
    , config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit>())
    , config_policer_average_rate(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate>())
    , config_policer_peak_rate(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate>())
    , config_policer_conform_burst(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst>())
    , config_policer_excess_burst(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst>())
    , conform_action(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction>())
    , exceed_action(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction>())
    , violate_action(std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction>())
    , ip_mark(this, {})
    , common_mark(this, {})
    , mpls_mark(this, {})
    , wred(this, {})
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

    yang_name = "class"; yang_parent_name = "qos-class-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::~Class()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::has_operation() const
{
    for (std::size_t index=0; index<ip_mark.len(); index++)
    {
        if(ip_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<common_mark.len(); index++)
    {
        if(common_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_mark.len(); index++)
    {
        if(mpls_mark[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred.len(); index++)
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

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(level_one_class_name, "level-one-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::get_name_leaf_data() const
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

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-max-rate")
    {
        if(config_max_rate == nullptr)
        {
            config_max_rate = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate>();
        }
        return config_max_rate;
    }

    if(child_yang_name == "config-min-rate")
    {
        if(config_min_rate == nullptr)
        {
            config_min_rate = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate>();
        }
        return config_min_rate;
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit == nullptr)
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit>();
        }
        return config_queue_limit;
    }

    if(child_yang_name == "config-policer-average-rate")
    {
        if(config_policer_average_rate == nullptr)
        {
            config_policer_average_rate = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate>();
        }
        return config_policer_average_rate;
    }

    if(child_yang_name == "config-policer-peak-rate")
    {
        if(config_policer_peak_rate == nullptr)
        {
            config_policer_peak_rate = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate>();
        }
        return config_policer_peak_rate;
    }

    if(child_yang_name == "config-policer-conform-burst")
    {
        if(config_policer_conform_burst == nullptr)
        {
            config_policer_conform_burst = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst>();
        }
        return config_policer_conform_burst;
    }

    if(child_yang_name == "config-policer-excess-burst")
    {
        if(config_policer_excess_burst == nullptr)
        {
            config_policer_excess_burst = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst>();
        }
        return config_policer_excess_burst;
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction>();
        }
        return conform_action;
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction>();
        }
        return exceed_action;
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action == nullptr)
        {
            violate_action = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction>();
        }
        return violate_action;
    }

    if(child_yang_name == "ip-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark>();
        c->parent = this;
        ip_mark.append(c);
        return c;
    }

    if(child_yang_name == "common-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark>();
        c->parent = this;
        common_mark.append(c);
        return c;
    }

    if(child_yang_name == "mpls-mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark>();
        c->parent = this;
        mpls_mark.append(c);
        return c;
    }

    if(child_yang_name == "wred")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::Wred>();
        c->parent = this;
        wred.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::get_children() const
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
    for (auto c : ip_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : common_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mpls_mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : wred.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-max-rate" || name == "config-min-rate" || name == "config-queue-limit" || name == "config-policer-average-rate" || name == "config-policer-peak-rate" || name == "config-policer-conform-burst" || name == "config-policer-excess-burst" || name == "conform-action" || name == "exceed-action" || name == "violate-action" || name == "ip-mark" || name == "common-mark" || name == "mpls-mark" || name == "wred" || name == "level-one-class-name" || name == "level-two-class-name" || name == "class-level" || name == "egress-queue-id" || name == "queue-type" || name == "priority-level" || name == "hardware-max-rate-kbps" || name == "hardware-min-rate-kbps" || name == "config-excess-bandwidth-percent" || name == "config-excess-bandwidth-unit" || name == "hardware-excess-bandwidth-weight" || name == "network-min-bandwidth-kbps" || name == "hardware-queue-limit-bytes" || name == "hardware-queue-limit-microseconds" || name == "policer-bucket-id" || name == "policer-stats-handle" || name == "hardware-policer-average-rate-kbps" || name == "hardware-policer-peak-rate-kbps" || name == "hardware-policer-conform-burst-bytes" || name == "hardware-policer-excess-burst-bytes")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::ConfigMaxRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-max-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::~ConfigMaxRate()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-max-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMaxRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::ConfigMinRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-min-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::~ConfigMinRate()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-min-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigMinRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::ConfigQueueLimit()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-queue-limit"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigQueueLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::ConfigPolicerAverageRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-average-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::~ConfigPolicerAverageRate()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-average-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerAverageRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::ConfigPolicerPeakRate()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-peak-rate"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::~ConfigPolicerPeakRate()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::ConfigPolicerConformBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-conform-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::~ConfigPolicerConformBurst()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-conform-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerConformBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::ConfigPolicerExcessBurst()
    :
    policy_value{YType::uint32, "policy-value"},
    policy_unit{YType::enumeration, "policy-unit"}
{

    yang_name = "config-policer-excess-burst"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::~ConfigPolicerExcessBurst()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::has_data() const
{
    if (is_presence_container) return true;
    return policy_value.is_set
	|| policy_unit.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_value.yfilter)
	|| ydk::is_set(policy_unit.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-policer-excess-burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_value.is_set || is_set(policy_value.yfilter)) leaf_name_data.push_back(policy_value.get_name_leafdata());
    if (policy_unit.is_set || is_set(policy_unit.yfilter)) leaf_name_data.push_back(policy_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConfigPolicerExcessBurst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-value" || name == "policy-unit")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::ConformAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "conform-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::~ConformAction()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "conform-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ConformAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::ExceedAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "exceed-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::~ExceedAction()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "exceed-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ExceedAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::ViolateAction()
    :
    action_type{YType::enumeration, "action-type"}
        ,
    mark(this, {})
{

    yang_name = "violate-action"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::~ViolateAction()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::has_operation() const
{
    for (std::size_t index=0; index<mark.len(); index++)
    {
        if(mark[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mark")
    {
        auto c = std::make_shared<PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark>();
        c->parent = this;
        mark.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mark.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark" || name == "action-type")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::Mark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mark"; yang_parent_name = "violate-action"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::ViolateAction::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::IpMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "ip-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::~IpMark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::IpMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::CommonMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "common-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::~CommonMark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::CommonMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::MplsMark()
    :
    mark_type{YType::enumeration, "mark-type"},
    mark_value{YType::uint16, "mark-value"}
{

    yang_name = "mpls-mark"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::~MplsMark()
{
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::has_data() const
{
    if (is_presence_container) return true;
    return mark_type.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_type.yfilter)
	|| ydk::is_set(mark_value.yfilter);
}

std::string PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_type.is_set || is_set(mark_type.yfilter)) leaf_name_data.push_back(mark_type.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.yfilter)) leaf_name_data.push_back(mark_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PlatformQos::Nodes::Node::QosInterfaces::QosInterface::Output::QosClassTable::Class::MplsMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-type" || name == "mark-value")
        return true;
    return false;
}

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

const Enum::YLeaf DnxQoseaShowWred::wred_cos {0, "wred-cos"};
const Enum::YLeaf DnxQoseaShowWred::wred_dscp {1, "wred-dscp"};
const Enum::YLeaf DnxQoseaShowWred::wred_precedence {2, "wred-precedence"};
const Enum::YLeaf DnxQoseaShowWred::wred_discard_class {3, "wred-discard-class"};
const Enum::YLeaf DnxQoseaShowWred::wred_mpls_exp {4, "wred-mpls-exp"};
const Enum::YLeaf DnxQoseaShowWred::red_with_user_min_max {5, "red-with-user-min-max"};
const Enum::YLeaf DnxQoseaShowWred::red_with_default_min_max {6, "red-with-default-min-max"};
const Enum::YLeaf DnxQoseaShowWred::wred_invalid {7, "wred-invalid"};

const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level1 {0, "high-priority-level1"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level2 {1, "high-priority-level2"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level3 {2, "high-priority-level3"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level4 {3, "high-priority-level4"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level5 {4, "high-priority-level5"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level6 {5, "high-priority-level6"};
const Enum::YLeaf DnxQoseaShowHpLevel::high_priority_level7 {6, "high-priority-level7"};
const Enum::YLeaf DnxQoseaShowHpLevel::unknown {7, "unknown"};

const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_no_ac_count_pref {0, "qos-serv-policy-no-ac-count-pref"};
const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_ac_count_l2 {1, "qos-serv-policy-ac-count-l2"};
const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_no_ac_count_l2 {2, "qos-serv-policy-no-ac-count-l2"};
const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_ac_count_user_def {3, "qos-serv-policy-ac-count-user-def"};
const Enum::YLeaf QosPolicyAccountEnum::qos_serv_policy_ac_count_l1 {4, "qos-serv-policy-ac-count-l1"};

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
const Enum::YLeaf DnxQoseaShowMark::un_supported11 {11, "un-supported11"};
const Enum::YLeaf DnxQoseaShowMark::dscp_tunnel {12, "dscp-tunnel"};
const Enum::YLeaf DnxQoseaShowMark::precedence_tunnel {13, "precedence-tunnel"};
const Enum::YLeaf DnxQoseaShowMark::dei {14, "dei"};
const Enum::YLeaf DnxQoseaShowMark::dei_imposition {15, "dei-imposition"};
const Enum::YLeaf DnxQoseaShowMark::un_supported16 {16, "un-supported16"};
const Enum::YLeaf DnxQoseaShowMark::un_supported17 {17, "un-supported17"};
const Enum::YLeaf DnxQoseaShowMark::traffic_class {18, "traffic-class"};

const Enum::YLeaf DnxQoseaShowPolicyStatus::no_error {0, "no-error"};
const Enum::YLeaf DnxQoseaShowPolicyStatus::policy_in_reset {1, "policy-in-reset"};

const Enum::YLeaf DnxQoseaShowIntfStatus::state_unknown {0, "state-unknown"};
const Enum::YLeaf DnxQoseaShowIntfStatus::state_down {1, "state-down"};

const Enum::YLeaf DnxQoseaShowLevel::level1 {0, "level1"};
const Enum::YLeaf DnxQoseaShowLevel::level2 {1, "level2"};
const Enum::YLeaf DnxQoseaShowLevel::level3 {2, "level3"};
const Enum::YLeaf DnxQoseaShowLevel::level4 {3, "level4"};
const Enum::YLeaf DnxQoseaShowLevel::level5 {4, "level5"};

const Enum::YLeaf DnxQoseaShowQueue::low_priority_default_queue {0, "low-priority-default-queue"};
const Enum::YLeaf DnxQoseaShowQueue::low_priority_queue {1, "low-priority-queue"};
const Enum::YLeaf DnxQoseaShowQueue::high_priority_queue {2, "high-priority-queue"};
const Enum::YLeaf DnxQoseaShowQueue::unknown_queue_type {3, "unknown-queue-type"};


}
}

