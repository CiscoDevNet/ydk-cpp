
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_procfind_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_procfind_oper {

ProcDistribution::ProcDistribution()
    :
    nodes(std::make_shared<ProcDistribution::Nodes>())
{
    nodes->parent = this;

    yang_name = "proc-distribution"; yang_parent_name = "Cisco-IOS-XR-procfind-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ProcDistribution::~ProcDistribution()
{
}

bool ProcDistribution::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool ProcDistribution::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string ProcDistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-procfind-oper:proc-distribution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcDistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ProcDistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<ProcDistribution::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ProcDistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void ProcDistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcDistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ProcDistribution::clone_ptr() const
{
    return std::make_shared<ProcDistribution>();
}

std::string ProcDistribution::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ProcDistribution::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ProcDistribution::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ProcDistribution::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ProcDistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

ProcDistribution::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "proc-distribution"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcDistribution::Nodes::~Nodes()
{
}

bool ProcDistribution::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool ProcDistribution::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ProcDistribution::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-procfind-oper:proc-distribution/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcDistribution::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcDistribution::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ProcDistribution::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<ProcDistribution::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ProcDistribution::Nodes::get_children() const
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

void ProcDistribution::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcDistribution::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ProcDistribution::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

ProcDistribution::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    process(this, {"proc_name"})
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcDistribution::Nodes::Node::~Node()
{
}

bool ProcDistribution::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool ProcDistribution::Nodes::Node::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string ProcDistribution::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-procfind-oper:proc-distribution/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcDistribution::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcDistribution::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ProcDistribution::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<ProcDistribution::Nodes::Node::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ProcDistribution::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ProcDistribution::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void ProcDistribution::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool ProcDistribution::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "node-name")
        return true;
    return false;
}

ProcDistribution::Nodes::Node::Process::Process()
    :
    proc_name{YType::str, "proc-name"}
        ,
    filter_type(this, {"filter_type"})
{

    yang_name = "process"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

ProcDistribution::Nodes::Node::Process::~Process()
{
}

bool ProcDistribution::Nodes::Node::Process::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter_type.len(); index++)
    {
        if(filter_type[index]->has_data())
            return true;
    }
    return proc_name.is_set;
}

bool ProcDistribution::Nodes::Node::Process::has_operation() const
{
    for (std::size_t index=0; index<filter_type.len(); index++)
    {
        if(filter_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(proc_name.yfilter);
}

std::string ProcDistribution::Nodes::Node::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(proc_name, "proc-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcDistribution::Nodes::Node::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ProcDistribution::Nodes::Node::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter-type")
    {
        auto ent_ = std::make_shared<ProcDistribution::Nodes::Node::Process::FilterType>();
        ent_->parent = this;
        filter_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ProcDistribution::Nodes::Node::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filter_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ProcDistribution::Nodes::Node::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
}

void ProcDistribution::Nodes::Node::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
}

bool ProcDistribution::Nodes::Node::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-type" || name == "proc-name")
        return true;
    return false;
}

ProcDistribution::Nodes::Node::Process::FilterType::FilterType()
    :
    filter_type{YType::str, "filter-type"},
    nodeid{YType::uint32, "nodeid"},
    nodetype{YType::uint32, "nodetype"},
    pid{YType::int32, "pid"},
    jid{YType::int32, "jid"},
    num_threads{YType::int32, "num-threads"},
    name{YType::str, "name"}
{

    yang_name = "filter-type"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

ProcDistribution::Nodes::Node::Process::FilterType::~FilterType()
{
}

bool ProcDistribution::Nodes::Node::Process::FilterType::has_data() const
{
    if (is_presence_container) return true;
    return filter_type.is_set
	|| nodeid.is_set
	|| nodetype.is_set
	|| pid.is_set
	|| jid.is_set
	|| num_threads.is_set
	|| name.is_set;
}

bool ProcDistribution::Nodes::Node::Process::FilterType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| ydk::is_set(nodeid.yfilter)
	|| ydk::is_set(nodetype.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(jid.yfilter)
	|| ydk::is_set(num_threads.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ProcDistribution::Nodes::Node::Process::FilterType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-type";
    ADD_KEY_TOKEN(filter_type, "filter-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcDistribution::Nodes::Node::Process::FilterType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());
    if (nodeid.is_set || is_set(nodeid.yfilter)) leaf_name_data.push_back(nodeid.get_name_leafdata());
    if (nodetype.is_set || is_set(nodetype.yfilter)) leaf_name_data.push_back(nodetype.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (jid.is_set || is_set(jid.yfilter)) leaf_name_data.push_back(jid.get_name_leafdata());
    if (num_threads.is_set || is_set(num_threads.yfilter)) leaf_name_data.push_back(num_threads.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ProcDistribution::Nodes::Node::Process::FilterType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ProcDistribution::Nodes::Node::Process::FilterType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ProcDistribution::Nodes::Node::Process::FilterType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeid")
    {
        nodeid = value;
        nodeid.value_namespace = name_space;
        nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodetype")
    {
        nodetype = value;
        nodetype.value_namespace = name_space;
        nodetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jid")
    {
        jid = value;
        jid.value_namespace = name_space;
        jid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-threads")
    {
        num_threads = value;
        num_threads.value_namespace = name_space;
        num_threads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ProcDistribution::Nodes::Node::Process::FilterType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
    if(value_path == "nodeid")
    {
        nodeid.yfilter = yfilter;
    }
    if(value_path == "nodetype")
    {
        nodetype.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "jid")
    {
        jid.yfilter = yfilter;
    }
    if(value_path == "num-threads")
    {
        num_threads.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ProcDistribution::Nodes::Node::Process::FilterType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-type" || name == "nodeid" || name == "nodetype" || name == "pid" || name == "jid" || name == "num-threads" || name == "name")
        return true;
    return false;
}


}
}

