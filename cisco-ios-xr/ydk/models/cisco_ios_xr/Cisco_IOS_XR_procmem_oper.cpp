
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_procmem_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_procmem_oper {

ProcessesMemory::ProcessesMemory()
    :
    nodes(std::make_shared<ProcessesMemory::Nodes>())
{
    nodes->parent = this;

    yang_name = "processes-memory"; yang_parent_name = "Cisco-IOS-XR-procmem-oper";
}

ProcessesMemory::~ProcessesMemory()
{
}

bool ProcessesMemory::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool ProcessesMemory::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string ProcessesMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-procmem-oper:processes-memory";

    return path_buffer.str();

}

const EntityPath ProcessesMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void ProcessesMemory::set_value(const std::string & value_path, std::string value)
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

ProcessesMemory::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "processes-memory";
}

ProcessesMemory::Nodes::~Nodes()
{
}

bool ProcessesMemory::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool ProcessesMemory::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ProcessesMemory::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath ProcessesMemory::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-procmem-oper:processes-memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ProcessesMemory::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ProcessesMemory::Nodes::set_value(const std::string & value_path, std::string value)
{
}

ProcessesMemory::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    process_ids(std::make_shared<ProcessesMemory::Nodes::Node::ProcessIds>())
{
    process_ids->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

ProcessesMemory::Nodes::Node::~Node()
{
}

bool ProcessesMemory::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (process_ids !=  nullptr && process_ids->has_data());
}

bool ProcessesMemory::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (process_ids !=  nullptr && process_ids->has_operation());
}

std::string ProcessesMemory::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath ProcessesMemory::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-procmem-oper:processes-memory/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(process_ids != nullptr)
    {
        children["process-ids"] = process_ids;
    }

    return children;
}

void ProcessesMemory::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

ProcessesMemory::Nodes::Node::ProcessIds::ProcessIds()
{
    yang_name = "process-ids"; yang_parent_name = "node";
}

ProcessesMemory::Nodes::Node::ProcessIds::~ProcessIds()
{
}

bool ProcessesMemory::Nodes::Node::ProcessIds::has_data() const
{
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    return false;
}

bool ProcessesMemory::Nodes::Node::ProcessIds::has_operation() const
{
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ProcessesMemory::Nodes::Node::ProcessIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-ids";

    return path_buffer.str();

}

const EntityPath ProcessesMemory::Nodes::Node::ProcessIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessIds' in Cisco_IOS_XR_procmem_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::Node::ProcessIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-id")
    {
        for(auto const & c : process_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ProcessesMemory::Nodes::Node::ProcessIds::ProcessId>();
        c->parent = this;
        process_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::Node::ProcessIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ProcessesMemory::Nodes::Node::ProcessIds::set_value(const std::string & value_path, std::string value)
{
}

ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::ProcessId()
    :
    process_id{YType::int32, "process-id"},
    data_seg_size{YType::uint32, "data-seg-size"},
    dyn_limit{YType::uint32, "dyn-limit"},
    jid{YType::uint32, "jid"},
    malloc_size{YType::uint32, "malloc-size"},
    name{YType::str, "name"},
    physical_mem{YType::uint32, "physical-mem"},
    pid{YType::uint32, "pid"},
    shared_mem{YType::uint32, "shared-mem"},
    stack_seg_size{YType::uint32, "stack-seg-size"},
    text_seg_size{YType::uint32, "text-seg-size"}
{
    yang_name = "process-id"; yang_parent_name = "process-ids";
}

ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::~ProcessId()
{
}

bool ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::has_data() const
{
    return process_id.is_set
	|| data_seg_size.is_set
	|| dyn_limit.is_set
	|| jid.is_set
	|| malloc_size.is_set
	|| name.is_set
	|| physical_mem.is_set
	|| pid.is_set
	|| shared_mem.is_set
	|| stack_seg_size.is_set
	|| text_seg_size.is_set;
}

bool ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| is_set(data_seg_size.operation)
	|| is_set(dyn_limit.operation)
	|| is_set(jid.operation)
	|| is_set(malloc_size.operation)
	|| is_set(name.operation)
	|| is_set(physical_mem.operation)
	|| is_set(pid.operation)
	|| is_set(shared_mem.operation)
	|| is_set(stack_seg_size.operation)
	|| is_set(text_seg_size.operation);
}

std::string ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessId' in Cisco_IOS_XR_procmem_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (data_seg_size.is_set || is_set(data_seg_size.operation)) leaf_name_data.push_back(data_seg_size.get_name_leafdata());
    if (dyn_limit.is_set || is_set(dyn_limit.operation)) leaf_name_data.push_back(dyn_limit.get_name_leafdata());
    if (jid.is_set || is_set(jid.operation)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (malloc_size.is_set || is_set(malloc_size.operation)) leaf_name_data.push_back(malloc_size.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (physical_mem.is_set || is_set(physical_mem.operation)) leaf_name_data.push_back(physical_mem.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (shared_mem.is_set || is_set(shared_mem.operation)) leaf_name_data.push_back(shared_mem.get_name_leafdata());
    if (stack_seg_size.is_set || is_set(stack_seg_size.operation)) leaf_name_data.push_back(stack_seg_size.get_name_leafdata());
    if (text_seg_size.is_set || is_set(text_seg_size.operation)) leaf_name_data.push_back(text_seg_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
    if(value_path == "data-seg-size")
    {
        data_seg_size = value;
    }
    if(value_path == "dyn-limit")
    {
        dyn_limit = value;
    }
    if(value_path == "jid")
    {
        jid = value;
    }
    if(value_path == "malloc-size")
    {
        malloc_size = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "physical-mem")
    {
        physical_mem = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "shared-mem")
    {
        shared_mem = value;
    }
    if(value_path == "stack-seg-size")
    {
        stack_seg_size = value;
    }
    if(value_path == "text-seg-size")
    {
        text_seg_size = value;
    }
}


}
}

