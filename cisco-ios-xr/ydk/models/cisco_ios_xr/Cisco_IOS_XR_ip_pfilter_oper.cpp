
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_pfilter_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_pfilter_oper {

PfilterMa::PfilterMa()
    :
    nodes(std::make_shared<PfilterMa::Nodes>())
{
    nodes->parent = this;

    yang_name = "pfilter-ma"; yang_parent_name = "Cisco-IOS-XR-ip-pfilter-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PfilterMa::~PfilterMa()
{
}

bool PfilterMa::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool PfilterMa::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PfilterMa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-oper:pfilter-ma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PfilterMa::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PfilterMa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PfilterMa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PfilterMa::clone_ptr() const
{
    return std::make_shared<PfilterMa>();
}

std::string PfilterMa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PfilterMa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PfilterMa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PfilterMa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PfilterMa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

PfilterMa::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "pfilter-ma"; is_top_level_class = false; has_list_ancestor = false; 
}

PfilterMa::Nodes::~Nodes()
{
}

bool PfilterMa::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PfilterMa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PfilterMa::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-oper:pfilter-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string PfilterMa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<PfilterMa::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::get_children() const
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

void PfilterMa::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PfilterMa::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PfilterMa::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    process(std::make_shared<PfilterMa::Nodes::Node::Process>())
{
    process->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

PfilterMa::Nodes::Node::~Node()
{
}

bool PfilterMa::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (process !=  nullptr && process->has_data());
}

bool PfilterMa::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (process !=  nullptr && process->has_operation());
}

std::string PfilterMa::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-oper:pfilter-ma/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PfilterMa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<PfilterMa::Nodes::Node::Process>();
        }
        return process;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(process != nullptr)
    {
        children["process"] = process;
    }

    return children;
}

void PfilterMa::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PfilterMa::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PfilterMa::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "node-name")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Process::Process()
    :
    ipv6(std::make_shared<PfilterMa::Nodes::Node::Process::Ipv6>())
    , ipv4(std::make_shared<PfilterMa::Nodes::Node::Process::Ipv4>())
{
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "process"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

PfilterMa::Nodes::Node::Process::~Process()
{
}

bool PfilterMa::Nodes::Node::Process::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool PfilterMa::Nodes::Node::Process::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<PfilterMa::Nodes::Node::Process::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<PfilterMa::Nodes::Node::Process::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PfilterMa::Nodes::Node::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PfilterMa::Nodes::Node::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Process::Ipv6::Ipv6()
    :
    acl_info_table(std::make_shared<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable>())
{
    acl_info_table->parent = this;

    yang_name = "ipv6"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

PfilterMa::Nodes::Node::Process::Ipv6::~Ipv6()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (acl_info_table !=  nullptr && acl_info_table->has_data());
}

bool PfilterMa::Nodes::Node::Process::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (acl_info_table !=  nullptr && acl_info_table->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::Process::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::Process::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-info-table")
    {
        if(acl_info_table == nullptr)
        {
            acl_info_table = std::make_shared<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable>();
        }
        return acl_info_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::Process::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_info_table != nullptr)
    {
        children["acl-info-table"] = acl_info_table;
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PfilterMa::Nodes::Node::Process::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-info-table")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::AclInfoTable()
    :
    interface_infos(std::make_shared<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos>())
{
    interface_infos->parent = this;

    yang_name = "acl-info-table"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::~AclInfoTable()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::has_data() const
{
    if (is_presence_container) return true;
    return (interface_infos !=  nullptr && interface_infos->has_data());
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_infos !=  nullptr && interface_infos->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-info-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-infos")
    {
        if(interface_infos == nullptr)
        {
            interface_infos = std::make_shared<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos>();
        }
        return interface_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_infos != nullptr)
    {
        children["interface-infos"] = interface_infos;
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-infos")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfos()
    :
    interface_info(this, {"interface_name"})
{

    yang_name = "interface-infos"; yang_parent_name = "acl-info-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::~InterfaceInfos()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_info.len(); index++)
    {
        if(interface_info[index]->has_data())
            return true;
    }
    return false;
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::has_operation() const
{
    for (std::size_t index=0; index<interface_info.len(); index++)
    {
        if(interface_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-info")
    {
        auto c = std::make_shared<PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo>();
        c->parent = this;
        interface_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-info")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::InterfaceInfo()
    :
    interface_name{YType::str, "interface-name"},
    acl_info{YType::str, "acl-info"}
{

    yang_name = "interface-info"; yang_parent_name = "interface-infos"; is_top_level_class = false; has_list_ancestor = true; 
}

PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::~InterfaceInfo()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| acl_info.is_set;
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(acl_info.yfilter);
}

std::string PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-info";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (acl_info.is_set || is_set(acl_info.yfilter)) leaf_name_data.push_back(acl_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-info")
    {
        acl_info = value;
        acl_info.value_namespace = name_space;
        acl_info.value_namespace_prefix = name_space_prefix;
    }
}

void PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "acl-info")
    {
        acl_info.yfilter = yfilter;
    }
}

bool PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "acl-info")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Process::Ipv4::Ipv4()
    :
    acl_info_table(std::make_shared<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable>())
{
    acl_info_table->parent = this;

    yang_name = "ipv4"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

PfilterMa::Nodes::Node::Process::Ipv4::~Ipv4()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (acl_info_table !=  nullptr && acl_info_table->has_data());
}

bool PfilterMa::Nodes::Node::Process::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (acl_info_table !=  nullptr && acl_info_table->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::Process::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::Process::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-info-table")
    {
        if(acl_info_table == nullptr)
        {
            acl_info_table = std::make_shared<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable>();
        }
        return acl_info_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::Process::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_info_table != nullptr)
    {
        children["acl-info-table"] = acl_info_table;
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PfilterMa::Nodes::Node::Process::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-info-table")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::AclInfoTable()
    :
    interface_infos(std::make_shared<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos>())
{
    interface_infos->parent = this;

    yang_name = "acl-info-table"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::~AclInfoTable()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::has_data() const
{
    if (is_presence_container) return true;
    return (interface_infos !=  nullptr && interface_infos->has_data());
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_infos !=  nullptr && interface_infos->has_operation());
}

std::string PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-info-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-infos")
    {
        if(interface_infos == nullptr)
        {
            interface_infos = std::make_shared<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos>();
        }
        return interface_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_infos != nullptr)
    {
        children["interface-infos"] = interface_infos;
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-infos")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfos()
    :
    interface_info(this, {"interface_name"})
{

    yang_name = "interface-infos"; yang_parent_name = "acl-info-table"; is_top_level_class = false; has_list_ancestor = true; 
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::~InterfaceInfos()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_info.len(); index++)
    {
        if(interface_info[index]->has_data())
            return true;
    }
    return false;
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::has_operation() const
{
    for (std::size_t index=0; index<interface_info.len(); index++)
    {
        if(interface_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-info")
    {
        auto c = std::make_shared<PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo>();
        c->parent = this;
        interface_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-info")
        return true;
    return false;
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::InterfaceInfo()
    :
    interface_name{YType::str, "interface-name"},
    acl_info{YType::str, "acl-info"}
{

    yang_name = "interface-info"; yang_parent_name = "interface-infos"; is_top_level_class = false; has_list_ancestor = true; 
}

PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::~InterfaceInfo()
{
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| acl_info.is_set;
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(acl_info.yfilter);
}

std::string PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-info";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (acl_info.is_set || is_set(acl_info.yfilter)) leaf_name_data.push_back(acl_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-info")
    {
        acl_info = value;
        acl_info.value_namespace = name_space;
        acl_info.value_namespace_prefix = name_space_prefix;
    }
}

void PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "acl-info")
    {
        acl_info.yfilter = yfilter;
    }
}

bool PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "acl-info")
        return true;
    return false;
}


}
}

