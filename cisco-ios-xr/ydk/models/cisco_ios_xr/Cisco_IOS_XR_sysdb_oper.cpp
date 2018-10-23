
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysdb_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysdb_oper {

SysdbConnections::SysdbConnections()
    :
    nodes(std::make_shared<SysdbConnections::Nodes>())
{
    nodes->parent = this;

    yang_name = "sysdb-connections"; yang_parent_name = "Cisco-IOS-XR-sysdb-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SysdbConnections::~SysdbConnections()
{
}

bool SysdbConnections::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool SysdbConnections::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SysdbConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysdb-oper:sysdb-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SysdbConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SysdbConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SysdbConnections::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SysdbConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void SysdbConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SysdbConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SysdbConnections::clone_ptr() const
{
    return std::make_shared<SysdbConnections>();
}

std::string SysdbConnections::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SysdbConnections::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SysdbConnections::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SysdbConnections::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SysdbConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

SysdbConnections::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "sysdb-connections"; is_top_level_class = false; has_list_ancestor = false; 
}

SysdbConnections::Nodes::~Nodes()
{
}

bool SysdbConnections::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SysdbConnections::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SysdbConnections::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysdb-oper:sysdb-connections/" << get_segment_path();
    return path_buffer.str();
}

std::string SysdbConnections::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SysdbConnections::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SysdbConnections::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<SysdbConnections::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SysdbConnections::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SysdbConnections::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SysdbConnections::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SysdbConnections::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

SysdbConnections::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"},
    connections{YType::str, "connections"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

SysdbConnections::Nodes::Node::~Node()
{
}

bool SysdbConnections::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| connections.is_set;
}

bool SysdbConnections::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(connections.yfilter);
}

std::string SysdbConnections::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysdb-oper:sysdb-connections/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string SysdbConnections::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SysdbConnections::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (connections.is_set || is_set(connections.yfilter)) leaf_name_data.push_back(connections.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SysdbConnections::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SysdbConnections::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SysdbConnections::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connections")
    {
        connections = value;
        connections.value_namespace = name_space;
        connections.value_namespace_prefix = name_space_prefix;
    }
}

void SysdbConnections::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "connections")
    {
        connections.yfilter = yfilter;
    }
}

bool SysdbConnections::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "connections")
        return true;
    return false;
}

Sysdb::Sysdb()
    :
    configuration_space{YType::str, "configuration-space"},
    memory{YType::str, "memory"},
    ipc_space{YType::str, "ipc-space"},
    cpu{YType::str, "cpu"}
{

    yang_name = "sysdb"; yang_parent_name = "Cisco-IOS-XR-sysdb-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Sysdb::~Sysdb()
{
}

bool Sysdb::has_data() const
{
    if (is_presence_container) return true;
    return configuration_space.is_set
	|| memory.is_set
	|| ipc_space.is_set
	|| cpu.is_set;
}

bool Sysdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configuration_space.yfilter)
	|| ydk::is_set(memory.yfilter)
	|| ydk::is_set(ipc_space.yfilter)
	|| ydk::is_set(cpu.yfilter);
}

std::string Sysdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysdb-oper:sysdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sysdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_space.is_set || is_set(configuration_space.yfilter)) leaf_name_data.push_back(configuration_space.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (ipc_space.is_set || is_set(ipc_space.yfilter)) leaf_name_data.push_back(ipc_space.get_name_leafdata());
    if (cpu.is_set || is_set(cpu.yfilter)) leaf_name_data.push_back(cpu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sysdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sysdb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sysdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configuration-space")
    {
        configuration_space = value;
        configuration_space.value_namespace = name_space;
        configuration_space.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipc-space")
    {
        ipc_space = value;
        ipc_space.value_namespace = name_space;
        ipc_space.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu")
    {
        cpu = value;
        cpu.value_namespace = name_space;
        cpu.value_namespace_prefix = name_space_prefix;
    }
}

void Sysdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configuration-space")
    {
        configuration_space.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
    if(value_path == "ipc-space")
    {
        ipc_space.yfilter = yfilter;
    }
    if(value_path == "cpu")
    {
        cpu.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Sysdb::clone_ptr() const
{
    return std::make_shared<Sysdb>();
}

std::string Sysdb::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sysdb::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sysdb::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Sysdb::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Sysdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-space" || name == "memory" || name == "ipc-space" || name == "cpu")
        return true;
    return false;
}


}
}

