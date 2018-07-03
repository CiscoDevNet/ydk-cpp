
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysmgr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysmgr_cfg {

ProcessMandatory::ProcessMandatory()
    :
    nodes(std::make_shared<ProcessMandatory::Nodes>())
    , all(std::make_shared<ProcessMandatory::All>())
{
    nodes->parent = this;
    all->parent = this;

    yang_name = "process-mandatory"; yang_parent_name = "Cisco-IOS-XR-sysmgr-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

ProcessMandatory::~ProcessMandatory()
{
}

bool ProcessMandatory::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool ProcessMandatory::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string ProcessMandatory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-cfg:process-mandatory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessMandatory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessMandatory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<ProcessMandatory::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<ProcessMandatory::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessMandatory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void ProcessMandatory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessMandatory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ProcessMandatory::clone_ptr() const
{
    return std::make_shared<ProcessMandatory>();
}

std::string ProcessMandatory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ProcessMandatory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ProcessMandatory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ProcessMandatory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ProcessMandatory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes" || name == "all")
        return true;
    return false;
}

ProcessMandatory::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "process-mandatory"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcessMandatory::Nodes::~Nodes()
{
}

bool ProcessMandatory::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool ProcessMandatory::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ProcessMandatory::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-cfg:process-mandatory/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcessMandatory::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessMandatory::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessMandatory::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<ProcessMandatory::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessMandatory::Nodes::get_children() const
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

void ProcessMandatory::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessMandatory::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ProcessMandatory::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

ProcessMandatory::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    processes(std::make_shared<ProcessMandatory::Nodes::Node::Processes>())
{
    processes->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcessMandatory::Nodes::Node::~Node()
{
}

bool ProcessMandatory::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (processes !=  nullptr && processes->has_data());
}

bool ProcessMandatory::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (processes !=  nullptr && processes->has_operation());
}

std::string ProcessMandatory::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-cfg:process-mandatory/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcessMandatory::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessMandatory::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessMandatory::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<ProcessMandatory::Nodes::Node::Processes>();
        }
        return processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessMandatory::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    return children;
}

void ProcessMandatory::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void ProcessMandatory::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool ProcessMandatory::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processes" || name == "node-name")
        return true;
    return false;
}

ProcessMandatory::Nodes::Node::Processes::Processes()
    :
    process(this, {"process_name"})
{

    yang_name = "processes"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

ProcessMandatory::Nodes::Node::Processes::~Processes()
{
}

bool ProcessMandatory::Nodes::Node::Processes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool ProcessMandatory::Nodes::Node::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ProcessMandatory::Nodes::Node::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessMandatory::Nodes::Node::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessMandatory::Nodes::Node::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto c = std::make_shared<ProcessMandatory::Nodes::Node::Processes::Process>();
        c->parent = this;
        process.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessMandatory::Nodes::Node::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : process.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ProcessMandatory::Nodes::Node::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessMandatory::Nodes::Node::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ProcessMandatory::Nodes::Node::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

ProcessMandatory::Nodes::Node::Processes::Process::Process()
    :
    process_name{YType::str, "process-name"}
{

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = true; 
}

ProcessMandatory::Nodes::Node::Processes::Process::~Process()
{
}

bool ProcessMandatory::Nodes::Node::Processes::Process::has_data() const
{
    if (is_presence_container) return true;
    return process_name.is_set;
}

bool ProcessMandatory::Nodes::Node::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string ProcessMandatory::Nodes::Node::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(process_name, "process-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessMandatory::Nodes::Node::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessMandatory::Nodes::Node::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessMandatory::Nodes::Node::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ProcessMandatory::Nodes::Node::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void ProcessMandatory::Nodes::Node::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool ProcessMandatory::Nodes::Node::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name")
        return true;
    return false;
}

ProcessMandatory::All::All()
    :
    processes(std::make_shared<ProcessMandatory::All::Processes>())
{
    processes->parent = this;

    yang_name = "all"; yang_parent_name = "process-mandatory"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcessMandatory::All::~All()
{
}

bool ProcessMandatory::All::has_data() const
{
    if (is_presence_container) return true;
    return (processes !=  nullptr && processes->has_data());
}

bool ProcessMandatory::All::has_operation() const
{
    return is_set(yfilter)
	|| (processes !=  nullptr && processes->has_operation());
}

std::string ProcessMandatory::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-cfg:process-mandatory/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcessMandatory::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessMandatory::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessMandatory::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<ProcessMandatory::All::Processes>();
        }
        return processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessMandatory::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    return children;
}

void ProcessMandatory::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessMandatory::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ProcessMandatory::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processes")
        return true;
    return false;
}

ProcessMandatory::All::Processes::Processes()
    :
    process(this, {"process_name"})
{

    yang_name = "processes"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcessMandatory::All::Processes::~Processes()
{
}

bool ProcessMandatory::All::Processes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool ProcessMandatory::All::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ProcessMandatory::All::Processes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-cfg:process-mandatory/all/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcessMandatory::All::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessMandatory::All::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessMandatory::All::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto c = std::make_shared<ProcessMandatory::All::Processes::Process>();
        c->parent = this;
        process.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessMandatory::All::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : process.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ProcessMandatory::All::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessMandatory::All::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ProcessMandatory::All::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

ProcessMandatory::All::Processes::Process::Process()
    :
    process_name{YType::str, "process-name"}
{

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcessMandatory::All::Processes::Process::~Process()
{
}

bool ProcessMandatory::All::Processes::Process::has_data() const
{
    if (is_presence_container) return true;
    return process_name.is_set;
}

bool ProcessMandatory::All::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string ProcessMandatory::All::Processes::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-cfg:process-mandatory/all/processes/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcessMandatory::All::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(process_name, "process-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessMandatory::All::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessMandatory::All::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessMandatory::All::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ProcessMandatory::All::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void ProcessMandatory::All::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool ProcessMandatory::All::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name")
        return true;
    return false;
}

ProcessSingleCrash::ProcessSingleCrash()
    :
    crashes{YType::uint32, "crashes"},
    minimum_up_time{YType::uint32, "minimum-up-time"}
{

    yang_name = "process-single-crash"; yang_parent_name = "Cisco-IOS-XR-sysmgr-cfg"; is_top_level_class = true; has_list_ancestor = false; is_presence_container = true;
}

ProcessSingleCrash::~ProcessSingleCrash()
{
}

bool ProcessSingleCrash::has_data() const
{
    if (is_presence_container) return true;
    return crashes.is_set
	|| minimum_up_time.is_set;
}

bool ProcessSingleCrash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crashes.yfilter)
	|| ydk::is_set(minimum_up_time.yfilter);
}

std::string ProcessSingleCrash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-cfg:process-single-crash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessSingleCrash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crashes.is_set || is_set(crashes.yfilter)) leaf_name_data.push_back(crashes.get_name_leafdata());
    if (minimum_up_time.is_set || is_set(minimum_up_time.yfilter)) leaf_name_data.push_back(minimum_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ProcessSingleCrash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ProcessSingleCrash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ProcessSingleCrash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crashes")
    {
        crashes = value;
        crashes.value_namespace = name_space;
        crashes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-up-time")
    {
        minimum_up_time = value;
        minimum_up_time.value_namespace = name_space;
        minimum_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void ProcessSingleCrash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crashes")
    {
        crashes.yfilter = yfilter;
    }
    if(value_path == "minimum-up-time")
    {
        minimum_up_time.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> ProcessSingleCrash::clone_ptr() const
{
    return std::make_shared<ProcessSingleCrash>();
}

std::string ProcessSingleCrash::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ProcessSingleCrash::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ProcessSingleCrash::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ProcessSingleCrash::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ProcessSingleCrash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crashes" || name == "minimum-up-time")
        return true;
    return false;
}


}
}

