
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dnx_port_mapper_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dnx_port_mapper_oper {

Oor::Oor()
    :
    nodes(std::make_shared<Oor::Nodes>())
{
    nodes->parent = this;

    yang_name = "oor"; yang_parent_name = "Cisco-IOS-XR-dnx-port-mapper-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Oor::~Oor()
{
}

bool Oor::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Oor::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-port-mapper-oper:oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Oor::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Oor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Oor::clone_ptr() const
{
    return std::make_shared<Oor>();
}

std::string Oor::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Oor::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Oor::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Oor::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Oor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Oor::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "oor"; is_top_level_class = false; has_list_ancestor = false;
}

Oor::Nodes::~Nodes()
{
}

bool Oor::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Oor::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oor::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-port-mapper-oper:oor/" << get_segment_path();
    return path_buffer.str();
}

std::string Oor::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oor::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oor::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<Oor::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oor::Nodes::get_children() const
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

void Oor::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oor::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oor::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Oor::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    summary(std::make_shared<Oor::Nodes::Node::Summary>())
	,interface_names(std::make_shared<Oor::Nodes::Node::InterfaceNames>())
{
    summary->parent = this;
    interface_names->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Oor::Nodes::Node::~Node()
{
}

bool Oor::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (summary !=  nullptr && summary->has_data())
	|| (interface_names !=  nullptr && interface_names->has_data());
}

bool Oor::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (interface_names !=  nullptr && interface_names->has_operation());
}

std::string Oor::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dnx-port-mapper-oper:oor/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Oor::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oor::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oor::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Oor::Nodes::Node::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interface-names")
    {
        if(interface_names == nullptr)
        {
            interface_names = std::make_shared<Oor::Nodes::Node::InterfaceNames>();
        }
        return interface_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oor::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(interface_names != nullptr)
    {
        children["interface-names"] = interface_names;
    }

    return children;
}

void Oor::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Oor::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Oor::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "interface-names" || name == "node-name")
        return true;
    return false;
}

Oor::Nodes::Node::Summary::Summary()
    :
    red{YType::uint32, "red"},
    green{YType::uint32, "green"},
    yel_low{YType::uint32, "yel-low"}
{

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Oor::Nodes::Node::Summary::~Summary()
{
}

bool Oor::Nodes::Node::Summary::has_data() const
{
    return red.is_set
	|| green.is_set
	|| yel_low.is_set;
}

bool Oor::Nodes::Node::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(red.yfilter)
	|| ydk::is_set(green.yfilter)
	|| ydk::is_set(yel_low.yfilter);
}

std::string Oor::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oor::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (red.is_set || is_set(red.yfilter)) leaf_name_data.push_back(red.get_name_leafdata());
    if (green.is_set || is_set(green.yfilter)) leaf_name_data.push_back(green.get_name_leafdata());
    if (yel_low.is_set || is_set(yel_low.yfilter)) leaf_name_data.push_back(yel_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oor::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oor::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oor::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "red")
    {
        red = value;
        red.value_namespace = name_space;
        red.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "green")
    {
        green = value;
        green.value_namespace = name_space;
        green.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yel-low")
    {
        yel_low = value;
        yel_low.value_namespace = name_space;
        yel_low.value_namespace_prefix = name_space_prefix;
    }
}

void Oor::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "red")
    {
        red.yfilter = yfilter;
    }
    if(value_path == "green")
    {
        green.yfilter = yfilter;
    }
    if(value_path == "yel-low")
    {
        yel_low.yfilter = yfilter;
    }
}

bool Oor::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "red" || name == "green" || name == "yel-low")
        return true;
    return false;
}

Oor::Nodes::Node::InterfaceNames::InterfaceNames()
{

    yang_name = "interface-names"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Oor::Nodes::Node::InterfaceNames::~InterfaceNames()
{
}

bool Oor::Nodes::Node::InterfaceNames::has_data() const
{
    for (std::size_t index=0; index<interface_name.size(); index++)
    {
        if(interface_name[index]->has_data())
            return true;
    }
    return false;
}

bool Oor::Nodes::Node::InterfaceNames::has_operation() const
{
    for (std::size_t index=0; index<interface_name.size(); index++)
    {
        if(interface_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Oor::Nodes::Node::InterfaceNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oor::Nodes::Node::InterfaceNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Oor::Nodes::Node::InterfaceNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-name")
    {
        auto c = std::make_shared<Oor::Nodes::Node::InterfaceNames::InterfaceName>();
        c->parent = this;
        interface_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oor::Nodes::Node::InterfaceNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Oor::Nodes::Node::InterfaceNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Oor::Nodes::Node::InterfaceNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Oor::Nodes::Node::InterfaceNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Oor::Nodes::Node::InterfaceNames::InterfaceName::InterfaceName()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-name"; yang_parent_name = "interface-names"; is_top_level_class = false; has_list_ancestor = true;
}

Oor::Nodes::Node::InterfaceNames::InterfaceName::~InterfaceName()
{
}

bool Oor::Nodes::Node::InterfaceNames::InterfaceName::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool Oor::Nodes::Node::InterfaceNames::InterfaceName::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Oor::Nodes::Node::InterfaceNames::InterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oor::Nodes::Node::InterfaceNames::InterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oor::Nodes::Node::InterfaceNames::InterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oor::Nodes::Node::InterfaceNames::InterfaceName::get_children() const
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

void Oor::Nodes::Node::InterfaceNames::InterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Oor::Nodes::Node::InterfaceNames::InterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Oor::Nodes::Node::InterfaceNames::InterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-name")
        return true;
    return false;
}

Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_status{YType::str, "interface-status"},
    time_stamp{YType::str, "time-stamp"},
    npu_id{YType::str, "npu-id"},
    hardware_resource{YType::str, "hardware-resource"}
{

    yang_name = "interface"; yang_parent_name = "interface-name"; is_top_level_class = false; has_list_ancestor = true;
}

Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::~Interface()
{
}

bool Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_status.is_set
	|| time_stamp.is_set
	|| npu_id.is_set
	|| hardware_resource.is_set;
}

bool Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_status.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(npu_id.yfilter)
	|| ydk::is_set(hardware_resource.yfilter);
}

std::string Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_status.is_set || is_set(interface_status.yfilter)) leaf_name_data.push_back(interface_status.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());
    if (hardware_resource.is_set || is_set(hardware_resource.yfilter)) leaf_name_data.push_back(hardware_resource.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-status")
    {
        interface_status = value;
        interface_status.value_namespace = name_space;
        interface_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-resource")
    {
        hardware_resource = value;
        hardware_resource.value_namespace = name_space;
        hardware_resource.value_namespace_prefix = name_space_prefix;
    }
}

void Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-status")
    {
        interface_status.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
    if(value_path == "hardware-resource")
    {
        hardware_resource.yfilter = yfilter;
    }
}

bool Oor::Nodes::Node::InterfaceNames::InterfaceName::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-status" || name == "time-stamp" || name == "npu-id" || name == "hardware-resource")
        return true;
    return false;
}


}
}

