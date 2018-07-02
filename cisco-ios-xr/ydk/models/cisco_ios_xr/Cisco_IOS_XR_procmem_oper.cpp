
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_procmem_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_procmem_oper {

ProcessesMemory::ProcessesMemory()
    :
    nodes(std::make_shared<ProcessesMemory::Nodes>())
{
    nodes->parent = this;

    yang_name = "processes-memory"; yang_parent_name = "Cisco-IOS-XR-procmem-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ProcessesMemory::~ProcessesMemory()
{
}

bool ProcessesMemory::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool ProcessesMemory::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string ProcessesMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-procmem-oper:processes-memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessesMemory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessesMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<ProcessesMemory::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void ProcessesMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessesMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ProcessesMemory::clone_ptr() const
{
    return std::make_shared<ProcessesMemory>();
}

std::string ProcessesMemory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ProcessesMemory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ProcessesMemory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ProcessesMemory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ProcessesMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

ProcessesMemory::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "processes-memory"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcessesMemory::Nodes::~Nodes()
{
}

bool ProcessesMemory::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool ProcessesMemory::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ProcessesMemory::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-procmem-oper:processes-memory/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcessesMemory::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessesMemory::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<ProcessesMemory::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::get_children() const
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

void ProcessesMemory::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessesMemory::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ProcessesMemory::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

ProcessesMemory::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    process_ids(std::make_shared<ProcessesMemory::Nodes::Node::ProcessIds>())
{
    process_ids->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcessesMemory::Nodes::Node::~Node()
{
}

bool ProcessesMemory::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (process_ids !=  nullptr && process_ids->has_data());
}

bool ProcessesMemory::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (process_ids !=  nullptr && process_ids->has_operation());
}

std::string ProcessesMemory::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-procmem-oper:processes-memory/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcessesMemory::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessesMemory::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-ids")
    {
        if(process_ids == nullptr)
        {
            process_ids = std::make_shared<ProcessesMemory::Nodes::Node::ProcessIds>();
        }
        return process_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(process_ids != nullptr)
    {
        children["process-ids"] = process_ids;
    }

    return children;
}

void ProcessesMemory::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void ProcessesMemory::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool ProcessesMemory::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-ids" || name == "node-name")
        return true;
    return false;
}

ProcessesMemory::Nodes::Node::ProcessIds::ProcessIds()
    :
    process_id(this, {"process_id"})
{

    yang_name = "process-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

ProcessesMemory::Nodes::Node::ProcessIds::~ProcessIds()
{
}

bool ProcessesMemory::Nodes::Node::ProcessIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_id.len(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    return false;
}

bool ProcessesMemory::Nodes::Node::ProcessIds::has_operation() const
{
    for (std::size_t index=0; index<process_id.len(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ProcessesMemory::Nodes::Node::ProcessIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessesMemory::Nodes::Node::ProcessIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::Node::ProcessIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-id")
    {
        auto c = std::make_shared<ProcessesMemory::Nodes::Node::ProcessIds::ProcessId>();
        c->parent = this;
        process_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::Node::ProcessIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : process_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ProcessesMemory::Nodes::Node::ProcessIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessesMemory::Nodes::Node::ProcessIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ProcessesMemory::Nodes::Node::ProcessIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-id")
        return true;
    return false;
}

ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::ProcessId()
    :
    process_id{YType::uint32, "process-id"},
    name{YType::str, "name"},
    jid{YType::uint32, "jid"},
    pid{YType::uint32, "pid"},
    text_seg_size{YType::uint32, "text-seg-size"},
    data_seg_size{YType::uint32, "data-seg-size"},
    stack_seg_size{YType::uint32, "stack-seg-size"},
    malloc_size{YType::uint32, "malloc-size"},
    dyn_limit{YType::uint32, "dyn-limit"},
    shared_mem{YType::uint32, "shared-mem"},
    physical_mem{YType::uint32, "physical-mem"}
{

    yang_name = "process-id"; yang_parent_name = "process-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::~ProcessId()
{
}

bool ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::has_data() const
{
    if (is_presence_container) return true;
    return process_id.is_set
	|| name.is_set
	|| jid.is_set
	|| pid.is_set
	|| text_seg_size.is_set
	|| data_seg_size.is_set
	|| stack_seg_size.is_set
	|| malloc_size.is_set
	|| dyn_limit.is_set
	|| shared_mem.is_set
	|| physical_mem.is_set;
}

bool ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(text_seg_size.yfilter)
	|| ydk::is_set(data_seg_size.yfilter)
	|| ydk::is_set(stack_seg_size.yfilter)
	|| ydk::is_set(malloc_size.yfilter)
	|| ydk::is_set(dyn_limit.yfilter)
	|| ydk::is_set(shared_mem.yfilter)
	|| ydk::is_set(physical_mem.yfilter);
}

std::string ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id";
    ADD_KEY_TOKEN(process_id, "process-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (text_seg_size.is_set || is_set(text_seg_size.yfilter)) leaf_name_data.push_back(text_seg_size.get_name_leafdata());
    if (data_seg_size.is_set || is_set(data_seg_size.yfilter)) leaf_name_data.push_back(data_seg_size.get_name_leafdata());
    if (stack_seg_size.is_set || is_set(stack_seg_size.yfilter)) leaf_name_data.push_back(stack_seg_size.get_name_leafdata());
    if (malloc_size.is_set || is_set(malloc_size.yfilter)) leaf_name_data.push_back(malloc_size.get_name_leafdata());
    if (dyn_limit.is_set || is_set(dyn_limit.yfilter)) leaf_name_data.push_back(dyn_limit.get_name_leafdata());
    if (shared_mem.is_set || is_set(shared_mem.yfilter)) leaf_name_data.push_back(shared_mem.get_name_leafdata());
    if (physical_mem.is_set || is_set(physical_mem.yfilter)) leaf_name_data.push_back(physical_mem.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text-seg-size")
    {
        text_seg_size = value;
        text_seg_size.value_namespace = name_space;
        text_seg_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-seg-size")
    {
        data_seg_size = value;
        data_seg_size.value_namespace = name_space;
        data_seg_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stack-seg-size")
    {
        stack_seg_size = value;
        stack_seg_size.value_namespace = name_space;
        stack_seg_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malloc-size")
    {
        malloc_size = value;
        malloc_size.value_namespace = name_space;
        malloc_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-limit")
    {
        dyn_limit = value;
        dyn_limit.value_namespace = name_space;
        dyn_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared-mem")
    {
        shared_mem = value;
        shared_mem.value_namespace = name_space;
        shared_mem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-mem")
    {
        physical_mem = value;
        physical_mem.value_namespace = name_space;
        physical_mem.value_namespace_prefix = name_space_prefix;
    }
}

void ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "text-seg-size")
    {
        text_seg_size.yfilter = yfilter;
    }
    if(value_path == "data-seg-size")
    {
        data_seg_size.yfilter = yfilter;
    }
    if(value_path == "stack-seg-size")
    {
        stack_seg_size.yfilter = yfilter;
    }
    if(value_path == "malloc-size")
    {
        malloc_size.yfilter = yfilter;
    }
    if(value_path == "dyn-limit")
    {
        dyn_limit.yfilter = yfilter;
    }
    if(value_path == "shared-mem")
    {
        shared_mem.yfilter = yfilter;
    }
    if(value_path == "physical-mem")
    {
        physical_mem.yfilter = yfilter;
    }
}

bool ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-id" || name == "name" || name == "jid" || name == "pid" || name == "text-seg-size" || name == "data-seg-size" || name == "stack-seg-size" || name == "malloc-size" || name == "dyn-limit" || name == "shared-mem" || name == "physical-mem")
        return true;
    return false;
}


}
}

