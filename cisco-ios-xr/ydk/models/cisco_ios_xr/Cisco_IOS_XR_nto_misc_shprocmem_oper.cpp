
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_nto_misc_shprocmem_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_nto_misc_shprocmem_oper {

ProcessesMemory::ProcessesMemory()
    :
    nodes(std::make_shared<ProcessesMemory::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "processes-memory"; yang_parent_name = "Cisco-IOS-XR-nto-misc-shprocmem-oper";
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
    path_buffer << "Cisco-IOS-XR-nto-misc-shprocmem-oper:processes-memory";

    return path_buffer.str();

}

EntityPath ProcessesMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ProcessesMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<ProcessesMemory::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ProcessesMemory::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
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

EntityPath ProcessesMemory::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-nto-misc-shprocmem-oper:processes-memory/" << get_segment_path();
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ProcessesMemory::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ProcessesMemory::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
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
    job_ids(std::make_shared<ProcessesMemory::Nodes::Node::JobIds>())
{
    job_ids->parent = this;
    children["job-ids"] = job_ids;

    yang_name = "node"; yang_parent_name = "nodes";
}

ProcessesMemory::Nodes::Node::~Node()
{
}

bool ProcessesMemory::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (job_ids !=  nullptr && job_ids->has_data());
}

bool ProcessesMemory::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (job_ids !=  nullptr && job_ids->has_operation());
}

std::string ProcessesMemory::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath ProcessesMemory::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-nto-misc-shprocmem-oper:processes-memory/nodes/" << get_segment_path();
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
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "job-ids")
    {
        if(job_ids != nullptr)
        {
            children["job-ids"] = job_ids;
        }
        else
        {
            job_ids = std::make_shared<ProcessesMemory::Nodes::Node::JobIds>();
            job_ids->parent = this;
            children["job-ids"] = job_ids;
        }
        return children.at("job-ids");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ProcessesMemory::Nodes::Node::get_children()
{
    if(children.find("job-ids") == children.end())
    {
        if(job_ids != nullptr)
        {
            children["job-ids"] = job_ids;
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

ProcessesMemory::Nodes::Node::JobIds::JobIds()
{
    yang_name = "job-ids"; yang_parent_name = "node";
}

ProcessesMemory::Nodes::Node::JobIds::~JobIds()
{
}

bool ProcessesMemory::Nodes::Node::JobIds::has_data() const
{
    for (std::size_t index=0; index<job_id.size(); index++)
    {
        if(job_id[index]->has_data())
            return true;
    }
    return false;
}

bool ProcessesMemory::Nodes::Node::JobIds::has_operation() const
{
    for (std::size_t index=0; index<job_id.size(); index++)
    {
        if(job_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ProcessesMemory::Nodes::Node::JobIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "job-ids";

    return path_buffer.str();

}

EntityPath ProcessesMemory::Nodes::Node::JobIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JobIds' in Cisco_IOS_XR_nto_misc_shprocmem_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::Node::JobIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "job-id")
    {
        for(auto const & c : job_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ProcessesMemory::Nodes::Node::JobIds::JobId>();
        c->parent = this;
        job_id.push_back(std::move(c));
        children[segment_path] = job_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ProcessesMemory::Nodes::Node::JobIds::get_children()
{
    for (auto const & c : job_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ProcessesMemory::Nodes::Node::JobIds::set_value(const std::string & value_path, std::string value)
{
}

ProcessesMemory::Nodes::Node::JobIds::JobId::JobId()
    :
    job_id{YType::int32, "job-id"},
    data_seg_size{YType::uint32, "data-seg-size"},
    jid{YType::uint32, "jid"},
    malloc_size{YType::uint32, "malloc-size"},
    name{YType::str, "name"},
    stack_seg_size{YType::uint32, "stack-seg-size"},
    text_seg_size{YType::uint32, "text-seg-size"}
{
    yang_name = "job-id"; yang_parent_name = "job-ids";
}

ProcessesMemory::Nodes::Node::JobIds::JobId::~JobId()
{
}

bool ProcessesMemory::Nodes::Node::JobIds::JobId::has_data() const
{
    return job_id.is_set
	|| data_seg_size.is_set
	|| jid.is_set
	|| malloc_size.is_set
	|| name.is_set
	|| stack_seg_size.is_set
	|| text_seg_size.is_set;
}

bool ProcessesMemory::Nodes::Node::JobIds::JobId::has_operation() const
{
    return is_set(operation)
	|| is_set(job_id.operation)
	|| is_set(data_seg_size.operation)
	|| is_set(jid.operation)
	|| is_set(malloc_size.operation)
	|| is_set(name.operation)
	|| is_set(stack_seg_size.operation)
	|| is_set(text_seg_size.operation);
}

std::string ProcessesMemory::Nodes::Node::JobIds::JobId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "job-id" <<"[job-id='" <<job_id <<"']";

    return path_buffer.str();

}

EntityPath ProcessesMemory::Nodes::Node::JobIds::JobId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JobId' in Cisco_IOS_XR_nto_misc_shprocmem_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (job_id.is_set || is_set(job_id.operation)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (data_seg_size.is_set || is_set(data_seg_size.operation)) leaf_name_data.push_back(data_seg_size.get_name_leafdata());
    if (jid.is_set || is_set(jid.operation)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (malloc_size.is_set || is_set(malloc_size.operation)) leaf_name_data.push_back(malloc_size.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (stack_seg_size.is_set || is_set(stack_seg_size.operation)) leaf_name_data.push_back(stack_seg_size.get_name_leafdata());
    if (text_seg_size.is_set || is_set(text_seg_size.operation)) leaf_name_data.push_back(text_seg_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::Node::JobIds::JobId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ProcessesMemory::Nodes::Node::JobIds::JobId::get_children()
{
    return children;
}

void ProcessesMemory::Nodes::Node::JobIds::JobId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "job-id")
    {
        job_id = value;
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

