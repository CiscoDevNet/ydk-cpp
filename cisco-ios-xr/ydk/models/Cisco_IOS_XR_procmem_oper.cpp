
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_procmem_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_procmem_oper {

ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::ProcessId()
    :
    	process_id{YType::int32, "process-id"},
	 data_seg_size{YType::uint32, "data-seg-size"},
	 jid{YType::uint32, "jid"},
	 malloc_size{YType::uint32, "malloc-size"},
	 name{YType::str, "name"},
	 pid{YType::uint32, "pid"},
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
	|| jid.is_set
	|| malloc_size.is_set
	|| name.is_set
	|| pid.is_set
	|| stack_seg_size.is_set
	|| text_seg_size.is_set;
}

bool ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| is_set(data_seg_size.operation)
	|| is_set(jid.operation)
	|| is_set(malloc_size.operation)
	|| is_set(name.operation)
	|| is_set(pid.operation)
	|| is_set(stack_seg_size.operation)
	|| is_set(text_seg_size.operation);
}

std::string ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id" <<"[process-id='" <<process_id.get() <<"']";

    return path_buffer.str();

}

EntityPath ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (data_seg_size.is_set || is_set(data_seg_size.operation)) leaf_name_data.push_back(data_seg_size.get_name_leafdata());
    if (jid.is_set || is_set(jid.operation)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (malloc_size.is_set || is_set(malloc_size.operation)) leaf_name_data.push_back(malloc_size.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (stack_seg_size.is_set || is_set(stack_seg_size.operation)) leaf_name_data.push_back(stack_seg_size.get_name_leafdata());
    if (text_seg_size.is_set || is_set(text_seg_size.operation)) leaf_name_data.push_back(text_seg_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ProcessesMemory::Nodes::Node::ProcessIds::ProcessId::get_children()
{
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
    if(value_path == "pid")
    {
        pid = value;
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

EntityPath ProcessesMemory::Nodes::Node::ProcessIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ProcessesMemory::Nodes::Node::ProcessIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process-id")
    {
        for(auto const & c : process_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ProcessesMemory::Nodes::Node::ProcessIds::ProcessId>();
        c->parent = this;
        process_id.push_back(std::move(c));
        children[segment_path] = process_id.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ProcessesMemory::Nodes::Node::ProcessIds::get_children()
{
    for (auto const & c : process_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ProcessesMemory::Nodes::Node::ProcessIds::set_value(const std::string & value_path, std::string value)
{
}

ProcessesMemory::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    process_ids(std::make_unique<ProcessesMemory::Nodes::Node::ProcessIds>())
{
    process_ids->parent = this;
    children["process-ids"] = process_ids.get();

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
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ProcessesMemory::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-procmem-oper:processes-memory/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ProcessesMemory::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process-ids")
    {
        if(process_ids != nullptr)
        {
            children["process-ids"] = process_ids.get();
        }
        else
        {
            process_ids = std::make_unique<ProcessesMemory::Nodes::Node::ProcessIds>();
            process_ids->parent = this;
            children["process-ids"] = process_ids.get();
        }
        return children.at("process-ids");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ProcessesMemory::Nodes::Node::get_children()
{
    if(children.find("process-ids") == children.end())
    {
        if(process_ids != nullptr)
        {
            children["process-ids"] = process_ids.get();
        }
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

EntityPath ProcessesMemory::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-procmem-oper:processes-memory/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ProcessesMemory::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ProcessesMemory::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ProcessesMemory::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ProcessesMemory::Nodes::set_value(const std::string & value_path, std::string value)
{
}

ProcessesMemory::ProcessesMemory()
    :
    nodes(std::make_unique<ProcessesMemory::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

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

EntityPath ProcessesMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ProcessesMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<ProcessesMemory::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ProcessesMemory::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void ProcessesMemory::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> ProcessesMemory::clone_ptr()
{
    return std::make_unique<ProcessesMemory>();
}


}
}

