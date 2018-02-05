
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_nto_misc_shprocmem_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_nto_misc_shprocmem_oper {

ProcessesMemory::ProcessesMemory()
    :
    nodes(std::make_shared<ProcessesMemory::Nodes>())
{
    nodes->parent = this;

    yang_name = "processes-memory"; yang_parent_name = "Cisco-IOS-XR-nto-misc-shprocmem-oper"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string ProcessesMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-nto-misc-shprocmem-oper:processes-memory";
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
{

    yang_name = "nodes"; yang_parent_name = "processes-memory"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string ProcessesMemory::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-nto-misc-shprocmem-oper:processes-memory/" << get_segment_path();
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
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::get_children() const
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
    job_ids(std::make_shared<ProcessesMemory::Nodes::Node::JobIds>())
{
    job_ids->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (job_ids !=  nullptr && job_ids->has_operation());
}

std::string ProcessesMemory::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-nto-misc-shprocmem-oper:processes-memory/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcessesMemory::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
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
    if(child_yang_name == "job-ids")
    {
        if(job_ids == nullptr)
        {
            job_ids = std::make_shared<ProcessesMemory::Nodes::Node::JobIds>();
        }
        return job_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(job_ids != nullptr)
    {
        children["job-ids"] = job_ids;
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
    if(name == "job-ids" || name == "node-name")
        return true;
    return false;
}

ProcessesMemory::Nodes::Node::JobIds::JobIds()
{

    yang_name = "job-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string ProcessesMemory::Nodes::Node::JobIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "job-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessesMemory::Nodes::Node::JobIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::Node::JobIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "job-id")
    {
        auto c = std::make_shared<ProcessesMemory::Nodes::Node::JobIds::JobId>();
        c->parent = this;
        job_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::Node::JobIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : job_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ProcessesMemory::Nodes::Node::JobIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessesMemory::Nodes::Node::JobIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ProcessesMemory::Nodes::Node::JobIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "job-id")
        return true;
    return false;
}

ProcessesMemory::Nodes::Node::JobIds::JobId::JobId()
    :
    job_id{YType::int32, "job-id"},
    name{YType::str, "name"},
    jid{YType::uint32, "jid"},
    text_seg_size{YType::uint32, "text-seg-size"},
    data_seg_size{YType::uint32, "data-seg-size"},
    stack_seg_size{YType::uint32, "stack-seg-size"},
    malloc_size{YType::uint32, "malloc-size"}
{

    yang_name = "job-id"; yang_parent_name = "job-ids"; is_top_level_class = false; has_list_ancestor = true;
}

ProcessesMemory::Nodes::Node::JobIds::JobId::~JobId()
{
}

bool ProcessesMemory::Nodes::Node::JobIds::JobId::has_data() const
{
    return job_id.is_set
	|| name.is_set
	|| jid.is_set
	|| text_seg_size.is_set
	|| data_seg_size.is_set
	|| stack_seg_size.is_set
	|| malloc_size.is_set;
}

bool ProcessesMemory::Nodes::Node::JobIds::JobId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(job_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(text_seg_size.yfilter)
	|| ydk::is_set(data_seg_size.yfilter)
	|| ydk::is_set(stack_seg_size.yfilter)
	|| ydk::is_set(malloc_size.yfilter);
}

std::string ProcessesMemory::Nodes::Node::JobIds::JobId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "job-id" <<"[job-id='" <<job_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessesMemory::Nodes::Node::JobIds::JobId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (job_id.is_set || is_set(job_id.yfilter)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (text_seg_size.is_set || is_set(text_seg_size.yfilter)) leaf_name_data.push_back(text_seg_size.get_name_leafdata());
    if (data_seg_size.is_set || is_set(data_seg_size.yfilter)) leaf_name_data.push_back(data_seg_size.get_name_leafdata());
    if (stack_seg_size.is_set || is_set(stack_seg_size.yfilter)) leaf_name_data.push_back(stack_seg_size.get_name_leafdata());
    if (malloc_size.is_set || is_set(malloc_size.yfilter)) leaf_name_data.push_back(malloc_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessesMemory::Nodes::Node::JobIds::JobId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessesMemory::Nodes::Node::JobIds::JobId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ProcessesMemory::Nodes::Node::JobIds::JobId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "job-id")
    {
        job_id = value;
        job_id.value_namespace = name_space;
        job_id.value_namespace_prefix = name_space_prefix;
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
}

void ProcessesMemory::Nodes::Node::JobIds::JobId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "job-id")
    {
        job_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
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
}

bool ProcessesMemory::Nodes::Node::JobIds::JobId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "job-id" || name == "name" || name == "jid" || name == "text-seg-size" || name == "data-seg-size" || name == "stack-seg-size" || name == "malloc-size")
        return true;
    return false;
}


}
}

