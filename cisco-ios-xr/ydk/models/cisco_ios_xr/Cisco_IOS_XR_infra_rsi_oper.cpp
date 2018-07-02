
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rsi_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rsi_oper {

VrfGroup::VrfGroup()
    :
    nodes(std::make_shared<VrfGroup::Nodes>())
{
    nodes->parent = this;

    yang_name = "vrf-group"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

VrfGroup::~VrfGroup()
{
}

bool VrfGroup::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool VrfGroup::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string VrfGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:vrf-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<VrfGroup::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void VrfGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrfGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> VrfGroup::clone_ptr() const
{
    return std::make_shared<VrfGroup>();
}

std::string VrfGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string VrfGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function VrfGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VrfGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool VrfGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

VrfGroup::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "vrf-group"; is_top_level_class = false; has_list_ancestor = false; 
}

VrfGroup::Nodes::~Nodes()
{
}

bool VrfGroup::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroup::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VrfGroup::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:vrf-group/" << get_segment_path();
    return path_buffer.str();
}

std::string VrfGroup::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<VrfGroup::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::get_children() const
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

void VrfGroup::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrfGroup::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VrfGroup::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

VrfGroup::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    groups(std::make_shared<VrfGroup::Nodes::Node::Groups>())
{
    groups->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

VrfGroup::Nodes::Node::~Node()
{
}

bool VrfGroup::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (groups !=  nullptr && groups->has_data());
}

bool VrfGroup::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string VrfGroup::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:vrf-group/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string VrfGroup::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<VrfGroup::Nodes::Node::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    return children;
}

void VrfGroup::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void VrfGroup::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool VrfGroup::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "node-name")
        return true;
    return false;
}

VrfGroup::Nodes::Node::Groups::Groups()
    :
    group(this, {"group_name"})
{

    yang_name = "groups"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

VrfGroup::Nodes::Node::Groups::~Groups()
{
}

bool VrfGroup::Nodes::Node::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroup::Nodes::Node::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VrfGroup::Nodes::Node::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::Node::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::Node::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<VrfGroup::Nodes::Node::Groups::Group>();
        c->parent = this;
        group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::Node::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VrfGroup::Nodes::Node::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrfGroup::Nodes::Node::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VrfGroup::Nodes::Node::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

VrfGroup::Nodes::Node::Groups::Group::Group()
    :
    group_name{YType::str, "group-name"},
    vr_fs{YType::uint32, "vr-fs"},
    forward_reference{YType::boolean, "forward-reference"}
        ,
    vrf(this, {})
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = true; 
}

VrfGroup::Nodes::Node::Groups::Group::~Group()
{
}

bool VrfGroup::Nodes::Node::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| vr_fs.is_set
	|| forward_reference.is_set;
}

bool VrfGroup::Nodes::Node::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(vr_fs.yfilter)
	|| ydk::is_set(forward_reference.yfilter);
}

std::string VrfGroup::Nodes::Node::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::Node::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (vr_fs.is_set || is_set(vr_fs.yfilter)) leaf_name_data.push_back(vr_fs.get_name_leafdata());
    if (forward_reference.is_set || is_set(forward_reference.yfilter)) leaf_name_data.push_back(forward_reference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::Node::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<VrfGroup::Nodes::Node::Groups::Group::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::Node::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VrfGroup::Nodes::Node::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vr-fs")
    {
        vr_fs = value;
        vr_fs.value_namespace = name_space;
        vr_fs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-reference")
    {
        forward_reference = value;
        forward_reference.value_namespace = name_space;
        forward_reference.value_namespace_prefix = name_space_prefix;
    }
}

void VrfGroup::Nodes::Node::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "vr-fs")
    {
        vr_fs.yfilter = yfilter;
    }
    if(value_path == "forward-reference")
    {
        forward_reference.yfilter = yfilter;
    }
}

bool VrfGroup::Nodes::Node::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "group-name" || name == "vr-fs" || name == "forward-reference")
        return true;
    return false;
}

VrfGroup::Nodes::Node::Groups::Group::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

VrfGroup::Nodes::Node::Groups::Group::Vrf::~Vrf()
{
}

bool VrfGroup::Nodes::Node::Groups::Group::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set;
}

bool VrfGroup::Nodes::Node::Groups::Group::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string VrfGroup::Nodes::Node::Groups::Group::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfGroup::Nodes::Node::Groups::Group::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfGroup::Nodes::Node::Groups::Group::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfGroup::Nodes::Node::Groups::Group::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VrfGroup::Nodes::Node::Groups::Group::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void VrfGroup::Nodes::Node::Groups::Group::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool VrfGroup::Nodes::Node::Groups::Group::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Srlg::Srlg()
    :
    groups(std::make_shared<Srlg::Groups>())
    , interfaces(std::make_shared<Srlg::Interfaces>())
    , rsips(std::make_shared<Srlg::Rsips>())
    , srlg_maps(std::make_shared<Srlg::SrlgMaps>())
    , nodes(std::make_shared<Srlg::Nodes>())
    , interface_srlg_names(std::make_shared<Srlg::InterfaceSrlgNames>())
    , inherit_nodes(std::make_shared<Srlg::InheritNodes>())
    , srlg_values(std::make_shared<Srlg::SrlgValues>())
    , interface_details(std::make_shared<Srlg::InterfaceDetails>())
{
    groups->parent = this;
    interfaces->parent = this;
    rsips->parent = this;
    srlg_maps->parent = this;
    nodes->parent = this;
    interface_srlg_names->parent = this;
    inherit_nodes->parent = this;
    srlg_values->parent = this;
    interface_details->parent = this;

    yang_name = "srlg"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Srlg::~Srlg()
{
}

bool Srlg::has_data() const
{
    if (is_presence_container) return true;
    return (groups !=  nullptr && groups->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (rsips !=  nullptr && rsips->has_data())
	|| (srlg_maps !=  nullptr && srlg_maps->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_data())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_data())
	|| (srlg_values !=  nullptr && srlg_values->has_data())
	|| (interface_details !=  nullptr && interface_details->has_data());
}

bool Srlg::has_operation() const
{
    return is_set(yfilter)
	|| (groups !=  nullptr && groups->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (rsips !=  nullptr && rsips->has_operation())
	|| (srlg_maps !=  nullptr && srlg_maps->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_operation())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_operation())
	|| (srlg_values !=  nullptr && srlg_values->has_operation())
	|| (interface_details !=  nullptr && interface_details->has_operation());
}

std::string Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Srlg::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Srlg::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "rsips")
    {
        if(rsips == nullptr)
        {
            rsips = std::make_shared<Srlg::Rsips>();
        }
        return rsips;
    }

    if(child_yang_name == "srlg-maps")
    {
        if(srlg_maps == nullptr)
        {
            srlg_maps = std::make_shared<Srlg::SrlgMaps>();
        }
        return srlg_maps;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Srlg::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "interface-srlg-names")
    {
        if(interface_srlg_names == nullptr)
        {
            interface_srlg_names = std::make_shared<Srlg::InterfaceSrlgNames>();
        }
        return interface_srlg_names;
    }

    if(child_yang_name == "inherit-nodes")
    {
        if(inherit_nodes == nullptr)
        {
            inherit_nodes = std::make_shared<Srlg::InheritNodes>();
        }
        return inherit_nodes;
    }

    if(child_yang_name == "srlg-values")
    {
        if(srlg_values == nullptr)
        {
            srlg_values = std::make_shared<Srlg::SrlgValues>();
        }
        return srlg_values;
    }

    if(child_yang_name == "interface-details")
    {
        if(interface_details == nullptr)
        {
            interface_details = std::make_shared<Srlg::InterfaceDetails>();
        }
        return interface_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(rsips != nullptr)
    {
        children["rsips"] = rsips;
    }

    if(srlg_maps != nullptr)
    {
        children["srlg-maps"] = srlg_maps;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(interface_srlg_names != nullptr)
    {
        children["interface-srlg-names"] = interface_srlg_names;
    }

    if(inherit_nodes != nullptr)
    {
        children["inherit-nodes"] = inherit_nodes;
    }

    if(srlg_values != nullptr)
    {
        children["srlg-values"] = srlg_values;
    }

    if(interface_details != nullptr)
    {
        children["interface-details"] = interface_details;
    }

    return children;
}

void Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Srlg::clone_ptr() const
{
    return std::make_shared<Srlg>();
}

std::string Srlg::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Srlg::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Srlg::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Srlg::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "interfaces" || name == "rsips" || name == "srlg-maps" || name == "nodes" || name == "interface-srlg-names" || name == "inherit-nodes" || name == "srlg-values" || name == "interface-details")
        return true;
    return false;
}

Srlg::Groups::Groups()
    :
    group(this, {"group_name"})
{

    yang_name = "groups"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::Groups::~Groups()
{
}

bool Srlg::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<Srlg::Groups::Group>();
        c->parent = this;
        group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Srlg::Groups::Group::Group()
    :
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    group_values{YType::uint32, "group-values"}
        ,
    srlg_attribute(this, {})
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::Groups::Group::~Group()
{
}

bool Srlg::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| group_name_xr.is_set
	|| group_values.is_set;
}

bool Srlg::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(group_values.yfilter);
}

std::string Srlg::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (group_values.is_set || is_set(group_values.yfilter)) leaf_name_data.push_back(group_values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        auto c = std::make_shared<Srlg::Groups::Group::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-values")
    {
        group_values = value;
        group_values.value_namespace = name_space;
        group_values.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "group-values")
    {
        group_values.yfilter = yfilter;
    }
}

bool Srlg::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "group-name" || name == "group-name-xr" || name == "group-values")
        return true;
    return false;
}

Srlg::Groups::Group::SrlgAttribute::SrlgAttribute()
    :
    srlg_value{YType::uint32, "srlg-value"},
    priority{YType::enumeration, "priority"},
    srlg_index{YType::uint16, "srlg-index"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Groups::Group::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Groups::Group::SrlgAttribute::has_data() const
{
    if (is_presence_container) return true;
    return srlg_value.is_set
	|| priority.is_set
	|| srlg_index.is_set;
}

bool Srlg::Groups::Group::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(srlg_index.yfilter);
}

std::string Srlg::Groups::Group::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Groups::Group::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Groups::Group::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Groups::Group::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Groups::Group::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Groups::Group::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
}

bool Srlg::Groups::Group::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value" || name == "priority" || name == "srlg-index")
        return true;
    return false;
}

Srlg::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::Interfaces::~Interfaces()
{
}

bool Srlg::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Srlg::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::get_children() const
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

void Srlg::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Srlg::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    value_count{YType::uint32, "value-count"},
    registrations{YType::uint32, "registrations"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::Interfaces::Interface::~Interface()
{
}

bool Srlg::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| value_count.is_set
	|| registrations.is_set;
}

bool Srlg::Interfaces::Interface::has_operation() const
{
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(value_count.yfilter)
	|| ydk::is_set(registrations.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (value_count.is_set || is_set(value_count.yfilter)) leaf_name_data.push_back(value_count.get_name_leafdata());
    if (registrations.is_set || is_set(registrations.yfilter)) leaf_name_data.push_back(registrations.get_name_leafdata());

    auto srlg_value_name_datas = srlg_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_value_name_datas.begin(), srlg_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-count")
    {
        value_count = value;
        value_count.value_namespace = name_space;
        value_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registrations")
    {
        registrations = value;
        registrations.value_namespace = name_space;
        registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.append(value);
    }
}

void Srlg::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "value-count")
    {
        value_count.yfilter = yfilter;
    }
    if(value_path == "registrations")
    {
        registrations.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "value-count" || name == "registrations" || name == "srlg-value")
        return true;
    return false;
}

Srlg::Rsips::Rsips()
    :
    rsip(this, {"rsip_name"})
{

    yang_name = "rsips"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::Rsips::~Rsips()
{
}

bool Srlg::Rsips::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsip.len(); index++)
    {
        if(rsip[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Rsips::has_operation() const
{
    for (std::size_t index=0; index<rsip.len(); index++)
    {
        if(rsip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Rsips::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Rsips::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsips";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Rsips::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Rsips::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsip")
    {
        auto c = std::make_shared<Srlg::Rsips::Rsip>();
        c->parent = this;
        rsip.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Rsips::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsip.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Rsips::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Rsips::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Rsips::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsip")
        return true;
    return false;
}

Srlg::Rsips::Rsip::Rsip()
    :
    rsip_name{YType::str, "rsip-name"},
    optical_layer_interface_name{YType::str, "optical-layer-interface-name"},
    registrations{YType::uint32, "registrations"},
    interface_values{YType::uint32, "interface-values"}
        ,
    srlg_attribute(this, {})
{

    yang_name = "rsip"; yang_parent_name = "rsips"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::Rsips::Rsip::~Rsip()
{
}

bool Srlg::Rsips::Rsip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return rsip_name.is_set
	|| optical_layer_interface_name.is_set
	|| registrations.is_set
	|| interface_values.is_set;
}

bool Srlg::Rsips::Rsip::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rsip_name.yfilter)
	|| ydk::is_set(optical_layer_interface_name.yfilter)
	|| ydk::is_set(registrations.yfilter)
	|| ydk::is_set(interface_values.yfilter);
}

std::string Srlg::Rsips::Rsip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/rsips/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Rsips::Rsip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsip";
    ADD_KEY_TOKEN(rsip_name, "rsip-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Rsips::Rsip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsip_name.is_set || is_set(rsip_name.yfilter)) leaf_name_data.push_back(rsip_name.get_name_leafdata());
    if (optical_layer_interface_name.is_set || is_set(optical_layer_interface_name.yfilter)) leaf_name_data.push_back(optical_layer_interface_name.get_name_leafdata());
    if (registrations.is_set || is_set(registrations.yfilter)) leaf_name_data.push_back(registrations.get_name_leafdata());
    if (interface_values.is_set || is_set(interface_values.yfilter)) leaf_name_data.push_back(interface_values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Rsips::Rsip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        auto c = std::make_shared<Srlg::Rsips::Rsip::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Rsips::Rsip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Rsips::Rsip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsip-name")
    {
        rsip_name = value;
        rsip_name.value_namespace = name_space;
        rsip_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-layer-interface-name")
    {
        optical_layer_interface_name = value;
        optical_layer_interface_name.value_namespace = name_space;
        optical_layer_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registrations")
    {
        registrations = value;
        registrations.value_namespace = name_space;
        registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-values")
    {
        interface_values = value;
        interface_values.value_namespace = name_space;
        interface_values.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Rsips::Rsip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsip-name")
    {
        rsip_name.yfilter = yfilter;
    }
    if(value_path == "optical-layer-interface-name")
    {
        optical_layer_interface_name.yfilter = yfilter;
    }
    if(value_path == "registrations")
    {
        registrations.yfilter = yfilter;
    }
    if(value_path == "interface-values")
    {
        interface_values.yfilter = yfilter;
    }
}

bool Srlg::Rsips::Rsip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "rsip-name" || name == "optical-layer-interface-name" || name == "registrations" || name == "interface-values")
        return true;
    return false;
}

Srlg::Rsips::Rsip::SrlgAttribute::SrlgAttribute()
    :
    srlg_value{YType::uint32, "srlg-value"},
    priority{YType::enumeration, "priority"},
    srlg_index{YType::uint16, "srlg-index"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "rsip"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Rsips::Rsip::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Rsips::Rsip::SrlgAttribute::has_data() const
{
    if (is_presence_container) return true;
    return srlg_value.is_set
	|| priority.is_set
	|| srlg_index.is_set;
}

bool Srlg::Rsips::Rsip::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(srlg_index.yfilter);
}

std::string Srlg::Rsips::Rsip::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Rsips::Rsip::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Rsips::Rsip::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Rsips::Rsip::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Rsips::Rsip::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Rsips::Rsip::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
}

bool Srlg::Rsips::Rsip::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value" || name == "priority" || name == "srlg-index")
        return true;
    return false;
}

Srlg::SrlgMaps::SrlgMaps()
    :
    srlg_map(this, {"srlg_name"})
{

    yang_name = "srlg-maps"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::SrlgMaps::~SrlgMaps()
{
}

bool Srlg::SrlgMaps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_map.len(); index++)
    {
        if(srlg_map[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::SrlgMaps::has_operation() const
{
    for (std::size_t index=0; index<srlg_map.len(); index++)
    {
        if(srlg_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::SrlgMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::SrlgMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::SrlgMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::SrlgMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-map")
    {
        auto c = std::make_shared<Srlg::SrlgMaps::SrlgMap>();
        c->parent = this;
        srlg_map.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::SrlgMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_map.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::SrlgMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::SrlgMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::SrlgMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-map")
        return true;
    return false;
}

Srlg::SrlgMaps::SrlgMap::SrlgMap()
    :
    srlg_name{YType::str, "srlg-name"},
    srlg_value{YType::uint32, "srlg-value"},
    srlg_name_xr{YType::str, "srlg-name-xr"}
{

    yang_name = "srlg-map"; yang_parent_name = "srlg-maps"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::SrlgMaps::SrlgMap::~SrlgMap()
{
}

bool Srlg::SrlgMaps::SrlgMap::has_data() const
{
    if (is_presence_container) return true;
    return srlg_name.is_set
	|| srlg_value.is_set
	|| srlg_name_xr.is_set;
}

bool Srlg::SrlgMaps::SrlgMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(srlg_name_xr.yfilter);
}

std::string Srlg::SrlgMaps::SrlgMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/srlg-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::SrlgMaps::SrlgMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-map";
    ADD_KEY_TOKEN(srlg_name, "srlg-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::SrlgMaps::SrlgMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.yfilter)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::SrlgMaps::SrlgMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::SrlgMaps::SrlgMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::SrlgMaps::SrlgMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
        srlg_name_xr.value_namespace = name_space;
        srlg_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::SrlgMaps::SrlgMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr.yfilter = yfilter;
    }
}

bool Srlg::SrlgMaps::SrlgMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-name" || name == "srlg-value" || name == "srlg-name-xr")
        return true;
    return false;
}

Srlg::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::Nodes::~Nodes()
{
}

bool Srlg::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<Srlg::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::get_children() const
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

void Srlg::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Srlg::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    srlg_maps(std::make_shared<Srlg::Nodes::Node::SrlgMaps>())
    , groups(std::make_shared<Srlg::Nodes::Node::Groups>())
    , inherit_nodes(std::make_shared<Srlg::Nodes::Node::InheritNodes>())
    , interfaces(std::make_shared<Srlg::Nodes::Node::Interfaces>())
    , interface_details(std::make_shared<Srlg::Nodes::Node::InterfaceDetails>())
    , srlg_values(std::make_shared<Srlg::Nodes::Node::SrlgValues>())
    , interface_srlg_names(std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames>())
{
    srlg_maps->parent = this;
    groups->parent = this;
    inherit_nodes->parent = this;
    interfaces->parent = this;
    interface_details->parent = this;
    srlg_values->parent = this;
    interface_srlg_names->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::Nodes::Node::~Node()
{
}

bool Srlg::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (srlg_maps !=  nullptr && srlg_maps->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (interface_details !=  nullptr && interface_details->has_data())
	|| (srlg_values !=  nullptr && srlg_values->has_data())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_data());
}

bool Srlg::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (srlg_maps !=  nullptr && srlg_maps->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (interface_details !=  nullptr && interface_details->has_operation())
	|| (srlg_values !=  nullptr && srlg_values->has_operation())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_operation());
}

std::string Srlg::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-maps")
    {
        if(srlg_maps == nullptr)
        {
            srlg_maps = std::make_shared<Srlg::Nodes::Node::SrlgMaps>();
        }
        return srlg_maps;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Srlg::Nodes::Node::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "inherit-nodes")
    {
        if(inherit_nodes == nullptr)
        {
            inherit_nodes = std::make_shared<Srlg::Nodes::Node::InheritNodes>();
        }
        return inherit_nodes;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Srlg::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "interface-details")
    {
        if(interface_details == nullptr)
        {
            interface_details = std::make_shared<Srlg::Nodes::Node::InterfaceDetails>();
        }
        return interface_details;
    }

    if(child_yang_name == "srlg-values")
    {
        if(srlg_values == nullptr)
        {
            srlg_values = std::make_shared<Srlg::Nodes::Node::SrlgValues>();
        }
        return srlg_values;
    }

    if(child_yang_name == "interface-srlg-names")
    {
        if(interface_srlg_names == nullptr)
        {
            interface_srlg_names = std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames>();
        }
        return interface_srlg_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(srlg_maps != nullptr)
    {
        children["srlg-maps"] = srlg_maps;
    }

    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(inherit_nodes != nullptr)
    {
        children["inherit-nodes"] = inherit_nodes;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(interface_details != nullptr)
    {
        children["interface-details"] = interface_details;
    }

    if(srlg_values != nullptr)
    {
        children["srlg-values"] = srlg_values;
    }

    if(interface_srlg_names != nullptr)
    {
        children["interface-srlg-names"] = interface_srlg_names;
    }

    return children;
}

void Srlg::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-maps" || name == "groups" || name == "inherit-nodes" || name == "interfaces" || name == "interface-details" || name == "srlg-values" || name == "interface-srlg-names" || name == "node-name")
        return true;
    return false;
}

Srlg::Nodes::Node::SrlgMaps::SrlgMaps()
    :
    srlg_map(this, {"srlg_name"})
{

    yang_name = "srlg-maps"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::SrlgMaps::~SrlgMaps()
{
}

bool Srlg::Nodes::Node::SrlgMaps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_map.len(); index++)
    {
        if(srlg_map[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::SrlgMaps::has_operation() const
{
    for (std::size_t index=0; index<srlg_map.len(); index++)
    {
        if(srlg_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::SrlgMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::SrlgMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::SrlgMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-map")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::SrlgMaps::SrlgMap>();
        c->parent = this;
        srlg_map.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::SrlgMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_map.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Nodes::Node::SrlgMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::SrlgMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::SrlgMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-map")
        return true;
    return false;
}

Srlg::Nodes::Node::SrlgMaps::SrlgMap::SrlgMap()
    :
    srlg_name{YType::str, "srlg-name"},
    srlg_value{YType::uint32, "srlg-value"},
    srlg_name_xr{YType::str, "srlg-name-xr"}
{

    yang_name = "srlg-map"; yang_parent_name = "srlg-maps"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::SrlgMaps::SrlgMap::~SrlgMap()
{
}

bool Srlg::Nodes::Node::SrlgMaps::SrlgMap::has_data() const
{
    if (is_presence_container) return true;
    return srlg_name.is_set
	|| srlg_value.is_set
	|| srlg_name_xr.is_set;
}

bool Srlg::Nodes::Node::SrlgMaps::SrlgMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(srlg_name_xr.yfilter);
}

std::string Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-map";
    ADD_KEY_TOKEN(srlg_name, "srlg-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.yfilter)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::SrlgMaps::SrlgMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Nodes::Node::SrlgMaps::SrlgMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
        srlg_name_xr.value_namespace = name_space;
        srlg_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::SrlgMaps::SrlgMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::SrlgMaps::SrlgMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-name" || name == "srlg-value" || name == "srlg-name-xr")
        return true;
    return false;
}

Srlg::Nodes::Node::Groups::Groups()
    :
    group(this, {"group_name"})
{

    yang_name = "groups"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::Groups::~Groups()
{
}

bool Srlg::Nodes::Node::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::Groups::Group>();
        c->parent = this;
        group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Nodes::Node::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Srlg::Nodes::Node::Groups::Group::Group()
    :
    group_name{YType::str, "group-name"},
    group_name_xr{YType::str, "group-name-xr"},
    group_values{YType::uint32, "group-values"}
        ,
    srlg_attribute(this, {})
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::Groups::Group::~Group()
{
}

bool Srlg::Nodes::Node::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| group_name_xr.is_set
	|| group_values.is_set;
}

bool Srlg::Nodes::Node::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(group_values.yfilter);
}

std::string Srlg::Nodes::Node::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (group_values.is_set || is_set(group_values.yfilter)) leaf_name_data.push_back(group_values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::Groups::Group::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Nodes::Node::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-values")
    {
        group_values = value;
        group_values.value_namespace = name_space;
        group_values.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "group-values")
    {
        group_values.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "group-name" || name == "group-name-xr" || name == "group-values")
        return true;
    return false;
}

Srlg::Nodes::Node::Groups::Group::SrlgAttribute::SrlgAttribute()
    :
    srlg_value{YType::uint32, "srlg-value"},
    priority{YType::enumeration, "priority"},
    srlg_index{YType::uint16, "srlg-index"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::Groups::Group::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Nodes::Node::Groups::Group::SrlgAttribute::has_data() const
{
    if (is_presence_container) return true;
    return srlg_value.is_set
	|| priority.is_set
	|| srlg_index.is_set;
}

bool Srlg::Nodes::Node::Groups::Group::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(srlg_index.yfilter);
}

std::string Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Groups::Group::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Nodes::Node::Groups::Group::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::Groups::Group::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::Groups::Group::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value" || name == "priority" || name == "srlg-index")
        return true;
    return false;
}

Srlg::Nodes::Node::InheritNodes::InheritNodes()
    :
    inherit_node(this, {"inherit_node_name"})
{

    yang_name = "inherit-nodes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::InheritNodes::~InheritNodes()
{
}

bool Srlg::Nodes::Node::InheritNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inherit_node.len(); index++)
    {
        if(inherit_node[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InheritNodes::has_operation() const
{
    for (std::size_t index=0; index<inherit_node.len(); index++)
    {
        if(inherit_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::InheritNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InheritNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InheritNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit-node")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::InheritNodes::InheritNode>();
        c->parent = this;
        inherit_node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InheritNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : inherit_node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InheritNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::InheritNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::InheritNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit-node")
        return true;
    return false;
}

Srlg::Nodes::Node::InheritNodes::InheritNode::InheritNode()
    :
    inherit_node_name{YType::str, "inherit-node-name"},
    node_name{YType::str, "node-name"},
    node_values{YType::uint32, "node-values"}
        ,
    srlg_attribute(this, {})
{

    yang_name = "inherit-node"; yang_parent_name = "inherit-nodes"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::InheritNodes::InheritNode::~InheritNode()
{
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return inherit_node_name.is_set
	|| node_name.is_set
	|| node_values.is_set;
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inherit_node_name.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(node_values.yfilter);
}

std::string Srlg::Nodes::Node::InheritNodes::InheritNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node";
    ADD_KEY_TOKEN(inherit_node_name, "inherit-node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InheritNodes::InheritNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit_node_name.is_set || is_set(inherit_node_name.yfilter)) leaf_name_data.push_back(inherit_node_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (node_values.is_set || is_set(node_values.yfilter)) leaf_name_data.push_back(node_values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InheritNodes::InheritNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InheritNodes::InheritNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name = value;
        inherit_node_name.value_namespace = name_space;
        inherit_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-values")
    {
        node_values = value;
        node_values.value_namespace = name_space;
        node_values.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "node-values")
    {
        node_values.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "inherit-node-name" || name == "node-name" || name == "node-values")
        return true;
    return false;
}

Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::SrlgAttribute()
    :
    srlg_value{YType::uint32, "srlg-value"},
    priority{YType::enumeration, "priority"},
    srlg_index{YType::uint16, "srlg-index"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "inherit-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::has_data() const
{
    if (is_presence_container) return true;
    return srlg_value.is_set
	|| priority.is_set
	|| srlg_index.is_set;
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(srlg_index.yfilter);
}

std::string Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value" || name == "priority" || name == "srlg-index")
        return true;
    return false;
}

Srlg::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Srlg::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Interfaces::get_children() const
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

void Srlg::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Srlg::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    value_count{YType::uint32, "value-count"},
    registrations{YType::uint32, "registrations"},
    srlg_value{YType::uint32, "srlg-value"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Srlg::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| value_count.is_set
	|| registrations.is_set;
}

bool Srlg::Nodes::Node::Interfaces::Interface::has_operation() const
{
    for (auto const & leaf : srlg_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(value_count.yfilter)
	|| ydk::is_set(registrations.yfilter)
	|| ydk::is_set(srlg_value.yfilter);
}

std::string Srlg::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (value_count.is_set || is_set(value_count.yfilter)) leaf_name_data.push_back(value_count.get_name_leafdata());
    if (registrations.is_set || is_set(registrations.yfilter)) leaf_name_data.push_back(registrations.get_name_leafdata());

    auto srlg_value_name_datas = srlg_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_value_name_datas.begin(), srlg_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-count")
    {
        value_count = value;
        value_count.value_namespace = name_space;
        value_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registrations")
    {
        registrations = value;
        registrations.value_namespace = name_space;
        registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.append(value);
    }
}

void Srlg::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "value-count")
    {
        value_count.yfilter = yfilter;
    }
    if(value_path == "registrations")
    {
        registrations.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "value-count" || name == "registrations" || name == "srlg-value")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetails()
    :
    interface_detail(this, {"interface_name"})
{

    yang_name = "interface-details"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::InterfaceDetails::~InterfaceDetails()
{
}

bool Srlg::Nodes::Node::InterfaceDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InterfaceDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::InterfaceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-detail")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail>();
        c->parent = this;
        interface_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::InterfaceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::InterfaceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-detail")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::InterfaceDetail()
    :
    interface_name{YType::str, "interface-name"},
    groups{YType::uint32, "groups"},
    nodes{YType::uint32, "nodes"}
        ,
    srlg_attribute(this, {})
{

    yang_name = "interface-detail"; yang_parent_name = "interface-details"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::~InterfaceDetail()
{
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| groups.is_set
	|| nodes.is_set;
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(nodes.yfilter);
}

std::string Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detail";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (nodes.is_set || is_set(nodes.yfilter)) leaf_name_data.push_back(nodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodes")
    {
        nodes = value;
        nodes.value_namespace = name_space;
        nodes.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "interface-name" || name == "groups" || name == "nodes")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::SrlgAttribute()
    :
    srlg_value{YType::uint32, "srlg-value"},
    priority{YType::enumeration, "priority"},
    source{YType::enumeration, "source"},
    source_name{YType::str, "source-name"},
    srlg_index{YType::uint16, "srlg-index"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "interface-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_data() const
{
    if (is_presence_container) return true;
    return srlg_value.is_set
	|| priority.is_set
	|| source.is_set
	|| source_name.is_set
	|| srlg_index.is_set;
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(source_name.yfilter)
	|| ydk::is_set(srlg_index.yfilter);
}

std::string Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (source_name.is_set || is_set(source_name.yfilter)) leaf_name_data.push_back(source_name.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-name")
    {
        source_name = value;
        source_name.value_namespace = name_space;
        source_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "source-name")
    {
        source_name.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value" || name == "priority" || name == "source" || name == "source-name" || name == "srlg-index")
        return true;
    return false;
}

Srlg::Nodes::Node::SrlgValues::SrlgValues()
    :
    srlg_value(this, {"value_"})
{

    yang_name = "srlg-values"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::SrlgValues::~SrlgValues()
{
}

bool Srlg::Nodes::Node::SrlgValues::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_value.len(); index++)
    {
        if(srlg_value[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::SrlgValues::has_operation() const
{
    for (std::size_t index=0; index<srlg_value.len(); index++)
    {
        if(srlg_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::SrlgValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::SrlgValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::SrlgValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-value")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::SrlgValues::SrlgValue>();
        c->parent = this;
        srlg_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::SrlgValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Nodes::Node::SrlgValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::SrlgValues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::SrlgValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value")
        return true;
    return false;
}

Srlg::Nodes::Node::SrlgValues::SrlgValue::SrlgValue()
    :
    value_{YType::uint32, "value"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "srlg-value"; yang_parent_name = "srlg-values"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::SrlgValues::SrlgValue::~SrlgValue()
{
}

bool Srlg::Nodes::Node::SrlgValues::SrlgValue::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set;
}

bool Srlg::Nodes::Node::SrlgValues::SrlgValue::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Srlg::Nodes::Node::SrlgValues::SrlgValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-value";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::SrlgValues::SrlgValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::SrlgValues::SrlgValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::SrlgValues::SrlgValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Nodes::Node::SrlgValues::SrlgValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

void Srlg::Nodes::Node::SrlgValues::SrlgValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::SrlgValues::SrlgValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "interface-name")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgNames()
    :
    interface_srlg_name(this, {"srlg_name"})
{

    yang_name = "interface-srlg-names"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::InterfaceSrlgNames::~InterfaceSrlgNames()
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_srlg_name.len(); index++)
    {
        if(interface_srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::has_operation() const
{
    for (std::size_t index=0; index<interface_srlg_name.len(); index++)
    {
        if(interface_srlg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::Nodes::Node::InterfaceSrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceSrlgNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceSrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-srlg-name")
    {
        auto c = std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName>();
        c->parent = this;
        interface_srlg_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceSrlgNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_srlg_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceSrlgNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::Nodes::Node::InterfaceSrlgNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-srlg-name")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::InterfaceSrlgName()
    :
    srlg_name{YType::str, "srlg-name"},
    srlg_name_xr{YType::str, "srlg-name-xr"},
    srlg_value{YType::uint32, "srlg-value"}
        ,
    interfaces(std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "interface-srlg-name"; yang_parent_name = "interface-srlg-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::~InterfaceSrlgName()
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::has_data() const
{
    if (is_presence_container) return true;
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_name_xr.yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-name";
    ADD_KEY_TOKEN(srlg_name, "srlg-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.yfilter)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
        srlg_name_xr.value_namespace = name_space;
        srlg_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "srlg-name" || name == "srlg-name-xr" || name == "srlg-value")
        return true;
    return false;
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::Interfaces()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interfaces"; yang_parent_name = "interface-srlg-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::~Interfaces()
{
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

void Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Srlg::InterfaceSrlgNames::InterfaceSrlgNames()
    :
    interface_srlg_name(this, {"srlg_name"})
{

    yang_name = "interface-srlg-names"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::InterfaceSrlgNames::~InterfaceSrlgNames()
{
}

bool Srlg::InterfaceSrlgNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_srlg_name.len(); index++)
    {
        if(interface_srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::InterfaceSrlgNames::has_operation() const
{
    for (std::size_t index=0; index<interface_srlg_name.len(); index++)
    {
        if(interface_srlg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::InterfaceSrlgNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InterfaceSrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InterfaceSrlgNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InterfaceSrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-srlg-name")
    {
        auto c = std::make_shared<Srlg::InterfaceSrlgNames::InterfaceSrlgName>();
        c->parent = this;
        interface_srlg_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InterfaceSrlgNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_srlg_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::InterfaceSrlgNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::InterfaceSrlgNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::InterfaceSrlgNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-srlg-name")
        return true;
    return false;
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::InterfaceSrlgName()
    :
    srlg_name{YType::str, "srlg-name"},
    srlg_name_xr{YType::str, "srlg-name-xr"},
    srlg_value{YType::uint32, "srlg-value"}
        ,
    interfaces(std::make_shared<Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "interface-srlg-name"; yang_parent_name = "interface-srlg-names"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::~InterfaceSrlgName()
{
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::has_data() const
{
    if (is_presence_container) return true;
    return srlg_name.is_set
	|| srlg_name_xr.is_set
	|| srlg_value.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(srlg_name_xr.yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/interface-srlg-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-name";
    ADD_KEY_TOKEN(srlg_name, "srlg-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_name_xr.is_set || is_set(srlg_name_xr.yfilter)) leaf_name_data.push_back(srlg_name_xr.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InterfaceSrlgNames::InterfaceSrlgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr = value;
        srlg_name_xr.value_namespace = name_space;
        srlg_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "srlg-name-xr")
    {
        srlg_name_xr.yfilter = yfilter;
    }
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "srlg-name" || name == "srlg-name-xr" || name == "srlg-value")
        return true;
    return false;
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::Interfaces()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interfaces"; yang_parent_name = "interface-srlg-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::~Interfaces()
{
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

void Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Srlg::InheritNodes::InheritNodes()
    :
    inherit_node(this, {"inherit_node_name"})
{

    yang_name = "inherit-nodes"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::InheritNodes::~InheritNodes()
{
}

bool Srlg::InheritNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inherit_node.len(); index++)
    {
        if(inherit_node[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::InheritNodes::has_operation() const
{
    for (std::size_t index=0; index<inherit_node.len(); index++)
    {
        if(inherit_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::InheritNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InheritNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InheritNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InheritNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit-node")
    {
        auto c = std::make_shared<Srlg::InheritNodes::InheritNode>();
        c->parent = this;
        inherit_node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InheritNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : inherit_node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::InheritNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::InheritNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::InheritNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit-node")
        return true;
    return false;
}

Srlg::InheritNodes::InheritNode::InheritNode()
    :
    inherit_node_name{YType::str, "inherit-node-name"},
    node_name{YType::str, "node-name"},
    node_values{YType::uint32, "node-values"}
        ,
    srlg_attribute(this, {})
{

    yang_name = "inherit-node"; yang_parent_name = "inherit-nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::InheritNodes::InheritNode::~InheritNode()
{
}

bool Srlg::InheritNodes::InheritNode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return inherit_node_name.is_set
	|| node_name.is_set
	|| node_values.is_set;
}

bool Srlg::InheritNodes::InheritNode::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inherit_node_name.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(node_values.yfilter);
}

std::string Srlg::InheritNodes::InheritNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/inherit-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InheritNodes::InheritNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node";
    ADD_KEY_TOKEN(inherit_node_name, "inherit-node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InheritNodes::InheritNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit_node_name.is_set || is_set(inherit_node_name.yfilter)) leaf_name_data.push_back(inherit_node_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (node_values.is_set || is_set(node_values.yfilter)) leaf_name_data.push_back(node_values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InheritNodes::InheritNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        auto c = std::make_shared<Srlg::InheritNodes::InheritNode::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InheritNodes::InheritNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::InheritNodes::InheritNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name = value;
        inherit_node_name.value_namespace = name_space;
        inherit_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-values")
    {
        node_values = value;
        node_values.value_namespace = name_space;
        node_values.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::InheritNodes::InheritNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "node-values")
    {
        node_values.yfilter = yfilter;
    }
}

bool Srlg::InheritNodes::InheritNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "inherit-node-name" || name == "node-name" || name == "node-values")
        return true;
    return false;
}

Srlg::InheritNodes::InheritNode::SrlgAttribute::SrlgAttribute()
    :
    srlg_value{YType::uint32, "srlg-value"},
    priority{YType::enumeration, "priority"},
    srlg_index{YType::uint16, "srlg-index"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "inherit-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::InheritNodes::InheritNode::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::InheritNodes::InheritNode::SrlgAttribute::has_data() const
{
    if (is_presence_container) return true;
    return srlg_value.is_set
	|| priority.is_set
	|| srlg_index.is_set;
}

bool Srlg::InheritNodes::InheritNode::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(srlg_index.yfilter);
}

std::string Srlg::InheritNodes::InheritNode::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InheritNodes::InheritNode::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InheritNodes::InheritNode::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InheritNodes::InheritNode::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::InheritNodes::InheritNode::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::InheritNodes::InheritNode::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
}

bool Srlg::InheritNodes::InheritNode::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value" || name == "priority" || name == "srlg-index")
        return true;
    return false;
}

Srlg::SrlgValues::SrlgValues()
    :
    srlg_value(this, {"value_"})
{

    yang_name = "srlg-values"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::SrlgValues::~SrlgValues()
{
}

bool Srlg::SrlgValues::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_value.len(); index++)
    {
        if(srlg_value[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::SrlgValues::has_operation() const
{
    for (std::size_t index=0; index<srlg_value.len(); index++)
    {
        if(srlg_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::SrlgValues::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::SrlgValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::SrlgValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::SrlgValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-value")
    {
        auto c = std::make_shared<Srlg::SrlgValues::SrlgValue>();
        c->parent = this;
        srlg_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::SrlgValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::SrlgValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::SrlgValues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::SrlgValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value")
        return true;
    return false;
}

Srlg::SrlgValues::SrlgValue::SrlgValue()
    :
    value_{YType::uint32, "value"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "srlg-value"; yang_parent_name = "srlg-values"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::SrlgValues::SrlgValue::~SrlgValue()
{
}

bool Srlg::SrlgValues::SrlgValue::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set;
}

bool Srlg::SrlgValues::SrlgValue::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Srlg::SrlgValues::SrlgValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/srlg-values/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::SrlgValues::SrlgValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-value";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::SrlgValues::SrlgValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::SrlgValues::SrlgValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::SrlgValues::SrlgValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::SrlgValues::SrlgValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
}

void Srlg::SrlgValues::SrlgValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Srlg::SrlgValues::SrlgValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "interface-name")
        return true;
    return false;
}

Srlg::InterfaceDetails::InterfaceDetails()
    :
    interface_detail(this, {"interface_name"})
{

    yang_name = "interface-details"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::InterfaceDetails::~InterfaceDetails()
{
}

bool Srlg::InterfaceDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::InterfaceDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Srlg::InterfaceDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InterfaceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InterfaceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InterfaceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-detail")
    {
        auto c = std::make_shared<Srlg::InterfaceDetails::InterfaceDetail>();
        c->parent = this;
        interface_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InterfaceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::InterfaceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Srlg::InterfaceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Srlg::InterfaceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-detail")
        return true;
    return false;
}

Srlg::InterfaceDetails::InterfaceDetail::InterfaceDetail()
    :
    interface_name{YType::str, "interface-name"},
    groups{YType::uint32, "groups"},
    nodes{YType::uint32, "nodes"}
        ,
    srlg_attribute(this, {})
{

    yang_name = "interface-detail"; yang_parent_name = "interface-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Srlg::InterfaceDetails::InterfaceDetail::~InterfaceDetail()
{
}

bool Srlg::InterfaceDetails::InterfaceDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| groups.is_set
	|| nodes.is_set;
}

bool Srlg::InterfaceDetails::InterfaceDetail::has_operation() const
{
    for (std::size_t index=0; index<srlg_attribute.len(); index++)
    {
        if(srlg_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(nodes.yfilter);
}

std::string Srlg::InterfaceDetails::InterfaceDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:srlg/interface-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Srlg::InterfaceDetails::InterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detail";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InterfaceDetails::InterfaceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (nodes.is_set || is_set(nodes.yfilter)) leaf_name_data.push_back(nodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InterfaceDetails::InterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-attribute")
    {
        auto c = std::make_shared<Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute>();
        c->parent = this;
        srlg_attribute.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InterfaceDetails::InterfaceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_attribute.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Srlg::InterfaceDetails::InterfaceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodes")
    {
        nodes = value;
        nodes.value_namespace = name_space;
        nodes.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::InterfaceDetails::InterfaceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
}

bool Srlg::InterfaceDetails::InterfaceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-attribute" || name == "interface-name" || name == "groups" || name == "nodes")
        return true;
    return false;
}

Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::SrlgAttribute()
    :
    srlg_value{YType::uint32, "srlg-value"},
    priority{YType::enumeration, "priority"},
    source{YType::enumeration, "source"},
    source_name{YType::str, "source-name"},
    srlg_index{YType::uint16, "srlg-index"}
{

    yang_name = "srlg-attribute"; yang_parent_name = "interface-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::~SrlgAttribute()
{
}

bool Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_data() const
{
    if (is_presence_container) return true;
    return srlg_value.is_set
	|| priority.is_set
	|| source.is_set
	|| source_name.is_set
	|| srlg_index.is_set;
}

bool Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_value.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(source_name.yfilter)
	|| ydk::is_set(srlg_index.yfilter);
}

std::string Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_value.is_set || is_set(srlg_value.yfilter)) leaf_name_data.push_back(srlg_value.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (source_name.is_set || is_set(source_name.yfilter)) leaf_name_data.push_back(source_name.get_name_leafdata());
    if (srlg_index.is_set || is_set(srlg_index.yfilter)) leaf_name_data.push_back(srlg_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-value")
    {
        srlg_value = value;
        srlg_value.value_namespace = name_space;
        srlg_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-name")
    {
        source_name = value;
        source_name.value_namespace = name_space;
        source_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-index")
    {
        srlg_index = value;
        srlg_index.value_namespace = name_space;
        srlg_index.value_namespace_prefix = name_space_prefix;
    }
}

void Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-value")
    {
        srlg_value.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "source-name")
    {
        source_name.yfilter = yfilter;
    }
    if(value_path == "srlg-index")
    {
        srlg_index.yfilter = yfilter;
    }
}

bool Srlg::InterfaceDetails::InterfaceDetail::SrlgAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-value" || name == "priority" || name == "source" || name == "source-name" || name == "srlg-index")
        return true;
    return false;
}

SelectiveVrfDownload::SelectiveVrfDownload()
    :
    state(std::make_shared<SelectiveVrfDownload::State>())
{
    state->parent = this;

    yang_name = "selective-vrf-download"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SelectiveVrfDownload::~SelectiveVrfDownload()
{
}

bool SelectiveVrfDownload::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool SelectiveVrfDownload::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string SelectiveVrfDownload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:selective-vrf-download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SelectiveVrfDownload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SelectiveVrfDownload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<SelectiveVrfDownload::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SelectiveVrfDownload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void SelectiveVrfDownload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SelectiveVrfDownload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SelectiveVrfDownload::clone_ptr() const
{
    return std::make_shared<SelectiveVrfDownload>();
}

std::string SelectiveVrfDownload::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SelectiveVrfDownload::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SelectiveVrfDownload::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SelectiveVrfDownload::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SelectiveVrfDownload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

SelectiveVrfDownload::State::State()
    :
    is_svd_enabled{YType::boolean, "is-svd-enabled"},
    is_svd_enabled_cfg{YType::boolean, "is-svd-enabled-cfg"}
{

    yang_name = "state"; yang_parent_name = "selective-vrf-download"; is_top_level_class = false; has_list_ancestor = false; 
}

SelectiveVrfDownload::State::~State()
{
}

bool SelectiveVrfDownload::State::has_data() const
{
    if (is_presence_container) return true;
    return is_svd_enabled.is_set
	|| is_svd_enabled_cfg.is_set;
}

bool SelectiveVrfDownload::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_svd_enabled.yfilter)
	|| ydk::is_set(is_svd_enabled_cfg.yfilter);
}

std::string SelectiveVrfDownload::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-oper:selective-vrf-download/" << get_segment_path();
    return path_buffer.str();
}

std::string SelectiveVrfDownload::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SelectiveVrfDownload::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_svd_enabled.is_set || is_set(is_svd_enabled.yfilter)) leaf_name_data.push_back(is_svd_enabled.get_name_leafdata());
    if (is_svd_enabled_cfg.is_set || is_set(is_svd_enabled_cfg.yfilter)) leaf_name_data.push_back(is_svd_enabled_cfg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SelectiveVrfDownload::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SelectiveVrfDownload::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SelectiveVrfDownload::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-svd-enabled")
    {
        is_svd_enabled = value;
        is_svd_enabled.value_namespace = name_space;
        is_svd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-svd-enabled-cfg")
    {
        is_svd_enabled_cfg = value;
        is_svd_enabled_cfg.value_namespace = name_space;
        is_svd_enabled_cfg.value_namespace_prefix = name_space_prefix;
    }
}

void SelectiveVrfDownload::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-svd-enabled")
    {
        is_svd_enabled.yfilter = yfilter;
    }
    if(value_path == "is-svd-enabled-cfg")
    {
        is_svd_enabled_cfg.yfilter = yfilter;
    }
}

bool SelectiveVrfDownload::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-svd-enabled" || name == "is-svd-enabled-cfg")
        return true;
    return false;
}

const Enum::YLeaf Priority::critical {0, "critical"};
const Enum::YLeaf Priority::high {1, "high"};
const Enum::YLeaf Priority::medium {2, "medium"};
const Enum::YLeaf Priority::low {3, "low"};
const Enum::YLeaf Priority::very_low {4, "very-low"};
const Enum::YLeaf Priority::invald {5, "invald"};

const Enum::YLeaf Source::configured {1, "configured"};
const Enum::YLeaf Source::from_group {2, "from-group"};
const Enum::YLeaf Source::inherited {4, "inherited"};
const Enum::YLeaf Source::from_optical {8, "from-optical"};
const Enum::YLeaf Source::configured_and_notified {17, "configured-and-notified"};
const Enum::YLeaf Source::from_group_and_notified {18, "from-group-and-notified"};
const Enum::YLeaf Source::inherited_and_notified {20, "inherited-and-notified"};
const Enum::YLeaf Source::from_optical_and_notified {24, "from-optical-and-notified"};


}
}

