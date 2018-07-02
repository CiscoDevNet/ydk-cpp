
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pbr_vservice_ea_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pbr_vservice_ea_oper {

ServiceFunctionChaining::ServiceFunctionChaining()
    :
    nodes(std::make_shared<ServiceFunctionChaining::Nodes>())
{
    nodes->parent = this;

    yang_name = "service-function-chaining"; yang_parent_name = "Cisco-IOS-XR-pbr-vservice-ea-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ServiceFunctionChaining::~ServiceFunctionChaining()
{
}

bool ServiceFunctionChaining::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool ServiceFunctionChaining::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string ServiceFunctionChaining::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-ea-oper:service-function-chaining";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<ServiceFunctionChaining::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void ServiceFunctionChaining::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ServiceFunctionChaining::clone_ptr() const
{
    return std::make_shared<ServiceFunctionChaining>();
}

std::string ServiceFunctionChaining::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ServiceFunctionChaining::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ServiceFunctionChaining::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ServiceFunctionChaining::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ServiceFunctionChaining::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "service-function-chaining"; is_top_level_class = false; has_list_ancestor = false; 
}

ServiceFunctionChaining::Nodes::~Nodes()
{
}

bool ServiceFunctionChaining::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ServiceFunctionChaining::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-ea-oper:service-function-chaining/" << get_segment_path();
    return path_buffer.str();
}

std::string ServiceFunctionChaining::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node>();
        c->parent = this;
        node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::get_children() const
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

void ServiceFunctionChaining::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    process(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process>())
{
    process->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

ServiceFunctionChaining::Nodes::Node::~Node()
{
}

bool ServiceFunctionChaining::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (process !=  nullptr && process->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (process !=  nullptr && process->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-ea-oper:service-function-chaining/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string ServiceFunctionChaining::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process>();
        }
        return process;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(process != nullptr)
    {
        children["process"] = process;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "node-name")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::Process()
    :
    service_function_path(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath>())
    , service_function(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction>())
    , service_function_forwarder(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder>())
{
    service_function_path->parent = this;
    service_function->parent = this;
    service_function_forwarder->parent = this;

    yang_name = "process"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::~Process()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::has_data() const
{
    if (is_presence_container) return true;
    return (service_function_path !=  nullptr && service_function_path->has_data())
	|| (service_function !=  nullptr && service_function->has_data())
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::has_operation() const
{
    return is_set(yfilter)
	|| (service_function_path !=  nullptr && service_function_path->has_operation())
	|| (service_function !=  nullptr && service_function->has_operation())
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-function-path")
    {
        if(service_function_path == nullptr)
        {
            service_function_path = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath>();
        }
        return service_function_path;
    }

    if(child_yang_name == "service-function")
    {
        if(service_function == nullptr)
        {
            service_function = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction>();
        }
        return service_function;
    }

    if(child_yang_name == "service-function-forwarder")
    {
        if(service_function_forwarder == nullptr)
        {
            service_function_forwarder = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder>();
        }
        return service_function_forwarder;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_function_path != nullptr)
    {
        children["service-function-path"] = service_function_path;
    }

    if(service_function != nullptr)
    {
        children["service-function"] = service_function;
    }

    if(service_function_forwarder != nullptr)
    {
        children["service-function-forwarder"] = service_function_forwarder;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-function-path" || name == "service-function" || name == "service-function-forwarder")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::ServiceFunctionPath()
    :
    path_ids(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds>())
{
    path_ids->parent = this;

    yang_name = "service-function-path"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::~ServiceFunctionPath()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::has_data() const
{
    if (is_presence_container) return true;
    return (path_ids !=  nullptr && path_ids->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::has_operation() const
{
    return is_set(yfilter)
	|| (path_ids !=  nullptr && path_ids->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-ids")
    {
        if(path_ids == nullptr)
        {
            path_ids = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds>();
        }
        return path_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_ids != nullptr)
    {
        children["path-ids"] = path_ids;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-ids")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathIds()
    :
    path_id(this, {"id"})
{

    yang_name = "path-ids"; yang_parent_name = "service-function-path"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::~PathIds()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_id.len(); index++)
    {
        if(path_id[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::has_operation() const
{
    for (std::size_t index=0; index<path_id.len(); index++)
    {
        if(path_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-id")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId>();
        c->parent = this;
        path_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-id")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::PathId()
    :
    id{YType::uint32, "id"}
        ,
    service_indexes(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>())
    , stats(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats>())
{
    service_indexes->parent = this;
    stats->parent = this;

    yang_name = "path-id"; yang_parent_name = "path-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::~PathId()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (service_indexes !=  nullptr && service_indexes->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (service_indexes !=  nullptr && service_indexes->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-indexes")
    {
        if(service_indexes == nullptr)
        {
            service_indexes = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>();
        }
        return service_indexes;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_indexes != nullptr)
    {
        children["service-indexes"] = service_indexes;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-indexes" || name == "stats" || name == "id")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndexes()
    :
    service_index(this, {"index_"})
{

    yang_name = "service-indexes"; yang_parent_name = "path-id"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::~ServiceIndexes()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_index.len(); index++)
    {
        if(service_index[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_operation() const
{
    for (std::size_t index=0; index<service_index.len(); index++)
    {
        if(service_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-index")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex>();
        c->parent = this;
        service_index.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : service_index.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-index")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::ServiceIndex()
    :
    index_{YType::uint32, "index"}
        ,
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data>())
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "service-index"; yang_parent_name = "service-indexes"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::~ServiceIndex()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return index_.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-index";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr>();
        c->parent = this;
        si_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    count = 0;
    for (auto c : si_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr" || name == "index")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    sfp(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp>())
    , spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term>())
    , sf(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf>())
    , sff(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff>())
    , sff_local(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "service-index"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term>();
        }
        return term;
    }

    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal>();
        }
        return sff_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::has_operation() const
{
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
        ,
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data>())
{
    data->parent = this;

    yang_name = "si-arr"; yang_parent_name = "service-index"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::has_data() const
{
    if (is_presence_container) return true;
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Stats()
    :
    detail(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail>())
    , summarized(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized>())
{
    detail->parent = this;
    summarized->parent = this;

    yang_name = "stats"; yang_parent_name = "path-id"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::~Stats()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::has_data() const
{
    if (is_presence_container) return true;
    return (detail !=  nullptr && detail->has_data())
	|| (summarized !=  nullptr && summarized->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::has_operation() const
{
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (summarized !=  nullptr && summarized->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "summarized")
    {
        if(summarized == nullptr)
        {
            summarized = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized>();
        }
        return summarized;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(summarized != nullptr)
    {
        children["summarized"] = summarized;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "summarized")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Detail()
    :
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data>())
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "detail"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::~Detail()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr>();
        c->parent = this;
        si_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    count = 0;
    for (auto c : si_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    sfp(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp>())
    , spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term>())
    , sf(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf>())
    , sff(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff>())
    , sff_local(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term>();
        }
        return term;
    }

    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal>();
        }
        return sff_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::has_operation() const
{
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
        ,
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data>())
{
    data->parent = this;

    yang_name = "si-arr"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::has_data() const
{
    if (is_presence_container) return true;
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Summarized()
    :
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data>())
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "summarized"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::~Summarized()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summarized";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr>();
        c->parent = this;
        si_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    count = 0;
    for (auto c : si_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    sfp(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp>())
    , spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term>())
    , sf(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf>())
    , sff(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff>())
    , sff_local(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "summarized"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term>();
        }
        return term;
    }

    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal>();
        }
        return sff_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::has_operation() const
{
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
        ,
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data>())
{
    data->parent = this;

    yang_name = "si-arr"; yang_parent_name = "summarized"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::has_data() const
{
    if (is_presence_container) return true;
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::ServiceFunction()
    :
    sf_names(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames>())
{
    sf_names->parent = this;

    yang_name = "service-function"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::~ServiceFunction()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::has_data() const
{
    if (is_presence_container) return true;
    return (sf_names !=  nullptr && sf_names->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::has_operation() const
{
    return is_set(yfilter)
	|| (sf_names !=  nullptr && sf_names->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf-names")
    {
        if(sf_names == nullptr)
        {
            sf_names = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames>();
        }
        return sf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sf_names != nullptr)
    {
        children["sf-names"] = sf_names;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf-names")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfNames()
    :
    sf_name(this, {"name"})
{

    yang_name = "sf-names"; yang_parent_name = "service-function"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::~SfNames()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sf_name.len(); index++)
    {
        if(sf_name[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::has_operation() const
{
    for (std::size_t index=0; index<sf_name.len(); index++)
    {
        if(sf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sf-name")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName>();
        c->parent = this;
        sf_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sf_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sf-name")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SfName()
    :
    name{YType::str, "name"}
        ,
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data>())
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "sf-name"; yang_parent_name = "sf-names"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::~SfName()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return name.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr>();
        c->parent = this;
        si_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    count = 0;
    for (auto c : si_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr" || name == "name")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    sfp(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp>())
    , spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term>())
    , sf(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf>())
    , sff(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff>())
    , sff_local(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "sf-name"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term>();
        }
        return term;
    }

    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal>();
        }
        return sff_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::has_operation() const
{
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
        ,
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data>())
{
    data->parent = this;

    yang_name = "si-arr"; yang_parent_name = "sf-name"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::has_data() const
{
    if (is_presence_container) return true;
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::ServiceFunctionForwarder()
    :
    local(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local>())
    , sff_names(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames>())
{
    local->parent = this;
    sff_names->parent = this;

    yang_name = "service-function-forwarder"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::~ServiceFunctionForwarder()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::has_data() const
{
    if (is_presence_container) return true;
    return (local !=  nullptr && local->has_data())
	|| (sff_names !=  nullptr && sff_names->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (sff_names !=  nullptr && sff_names->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-forwarder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local>();
        }
        return local;
    }

    if(child_yang_name == "sff-names")
    {
        if(sff_names == nullptr)
        {
            sff_names = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames>();
        }
        return sff_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(sff_names != nullptr)
    {
        children["sff-names"] = sff_names;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "sff-names")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Local()
    :
    error(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error>())
{
    error->parent = this;

    yang_name = "local"; yang_parent_name = "service-function-forwarder"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::~Local()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::has_data() const
{
    if (is_presence_container) return true;
    return (error !=  nullptr && error->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::has_operation() const
{
    return is_set(yfilter)
	|| (error !=  nullptr && error->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error>();
        }
        return error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(error != nullptr)
    {
        children["error"] = error;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Error()
    :
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data>())
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "error"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::~Error()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr>();
        c->parent = this;
        si_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    count = 0;
    for (auto c : si_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    sfp(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp>())
    , spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term>())
    , sf(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf>())
    , sff(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff>())
    , sff_local(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term>();
        }
        return term;
    }

    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal>();
        }
        return sff_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_operation() const
{
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
        ,
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data>())
{
    data->parent = this;

    yang_name = "si-arr"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::has_data() const
{
    if (is_presence_container) return true;
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffNames()
    :
    sff_name(this, {"name"})
{

    yang_name = "sff-names"; yang_parent_name = "service-function-forwarder"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::~SffNames()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sff_name.len(); index++)
    {
        if(sff_name[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::has_operation() const
{
    for (std::size_t index=0; index<sff_name.len(); index++)
    {
        if(sff_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sff-name")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName>();
        c->parent = this;
        sff_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sff_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sff-name")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SffName()
    :
    name{YType::str, "name"}
        ,
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data>())
    , si_arr(this, {})
{
    data->parent = this;

    yang_name = "sff-name"; yang_parent_name = "sff-names"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::~SffName()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return name.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::has_operation() const
{
    for (std::size_t index=0; index<si_arr.len(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data>();
        }
        return data;
    }

    if(child_yang_name == "si-arr")
    {
        auto c = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr>();
        c->parent = this;
        si_arr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    count = 0;
    for (auto c : si_arr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si-arr" || name == "name")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    sfp(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp>())
    , spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term>())
    , sf(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf>())
    , sff(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff>())
    , sff_local(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal>())
{
    sfp->parent = this;
    spi_si->parent = this;
    term->parent = this;
    sf->parent = this;
    sff->parent = this;
    sff_local->parent = this;

    yang_name = "data"; yang_parent_name = "sff-name"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data())
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (sfp !=  nullptr && sfp->has_operation())
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation())
	|| (sf !=  nullptr && sf->has_operation())
	|| (sff !=  nullptr && sff->has_operation())
	|| (sff_local !=  nullptr && sff_local->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfp")
    {
        if(sfp == nullptr)
        {
            sfp = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp>();
        }
        return sfp;
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term>();
        }
        return term;
    }

    if(child_yang_name == "sf")
    {
        if(sf == nullptr)
        {
            sf = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf>();
        }
        return sf;
    }

    if(child_yang_name == "sff")
    {
        if(sff == nullptr)
        {
            sff = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff>();
        }
        return sff;
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local == nullptr)
        {
            sff_local = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal>();
        }
        return sff_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sfp != nullptr)
    {
        children["sfp"] = sfp;
    }

    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    if(sf != nullptr)
    {
        children["sf"] = sf;
    }

    if(sff != nullptr)
    {
        children["sff"] = sff;
    }

    if(sff_local != nullptr)
    {
        children["sff-local"] = sff_local;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfp" || name == "spi-si" || name == "term" || name == "sf" || name == "sff" || name == "sff-local" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Sfp()
    :
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "sfp"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::has_data() const
{
    if (is_presence_container) return true;
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::has_operation() const
{
    return is_set(yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "sfp"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::Sf()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sf"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::Sff()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "sff"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::SffLocal()
    :
    malformed_err_pkts{YType::uint64, "malformed-err-pkts"},
    lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
    malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
    lookup_err_bytes{YType::uint64, "lookup-err-bytes"}
{

    yang_name = "sff-local"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_data() const
{
    if (is_presence_container) return true;
    return malformed_err_pkts.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| lookup_err_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(malformed_err_pkts.yfilter)
	|| ydk::is_set(lookup_err_pkts.yfilter)
	|| ydk::is_set(malformed_err_bytes.yfilter)
	|| ydk::is_set(lookup_err_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.yfilter)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.yfilter)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.yfilter)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.yfilter)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
        malformed_err_pkts.value_namespace = name_space;
        malformed_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
        lookup_err_pkts.value_namespace = name_space;
        lookup_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
        malformed_err_bytes.value_namespace = name_space;
        malformed_err_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
        lookup_err_bytes.value_namespace = name_space;
        lookup_err_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts.yfilter = yfilter;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts.yfilter = yfilter;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes.yfilter = yfilter;
    }
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "malformed-err-pkts" || name == "lookup-err-pkts" || name == "malformed-err-bytes" || name == "lookup-err-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::SiArr()
    :
    si{YType::uint8, "si"}
        ,
    data(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data>())
{
    data->parent = this;

    yang_name = "si-arr"; yang_parent_name = "sff-name"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::has_data() const
{
    if (is_presence_container) return true;
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.yfilter)) leaf_name_data.push_back(si.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si")
    {
        si = value;
        si.value_namespace = name_space;
        si.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si")
    {
        si.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "si")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Data()
    :
    type{YType::enumeration, "type"}
        ,
    spi_si(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi>())
    , term(std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term>())
{
    spi_si->parent = this;
    term->parent = this;

    yang_name = "data"; yang_parent_name = "si-arr"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (spi_si !=  nullptr && spi_si->has_operation())
	|| (term !=  nullptr && term->has_operation());
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spi-si")
    {
        if(spi_si == nullptr)
        {
            spi_si = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi>();
        }
        return spi_si;
    }

    if(child_yang_name == "term")
    {
        if(term == nullptr)
        {
            term = std::make_shared<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term>();
        }
        return term;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spi_si != nullptr)
    {
        children["spi-si"] = spi_si;
    }

    if(term != nullptr)
    {
        children["term"] = term;
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spi-si" || name == "term" || name == "type")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::SpiSi()
    :
    processed_pkts{YType::uint64, "processed-pkts"},
    processed_bytes{YType::uint64, "processed-bytes"}
{

    yang_name = "spi-si"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_data() const
{
    if (is_presence_container) return true;
    return processed_pkts.is_set
	|| processed_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processed_pkts.yfilter)
	|| ydk::is_set(processed_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_pkts.is_set || is_set(processed_pkts.yfilter)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());
    if (processed_bytes.is_set || is_set(processed_bytes.yfilter)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
        processed_pkts.value_namespace = name_space;
        processed_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
        processed_bytes.value_namespace = name_space;
        processed_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processed-pkts")
    {
        processed_pkts.yfilter = yfilter;
    }
    if(value_path == "processed-bytes")
    {
        processed_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processed-pkts" || name == "processed-bytes")
        return true;
    return false;
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::Term()
    :
    terminated_pkts{YType::uint64, "terminated-pkts"},
    terminated_bytes{YType::uint64, "terminated-bytes"}
{

    yang_name = "term"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_data() const
{
    if (is_presence_container) return true;
    return terminated_pkts.is_set
	|| terminated_bytes.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(terminated_pkts.yfilter)
	|| ydk::is_set(terminated_bytes.yfilter);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_pkts.is_set || is_set(terminated_pkts.yfilter)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());
    if (terminated_bytes.is_set || is_set(terminated_bytes.yfilter)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
        terminated_pkts.value_namespace = name_space;
        terminated_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
        terminated_bytes.value_namespace = name_space;
        terminated_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "terminated-pkts")
    {
        terminated_pkts.yfilter = yfilter;
    }
    if(value_path == "terminated-bytes")
    {
        terminated_bytes.yfilter = yfilter;
    }
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminated-pkts" || name == "terminated-bytes")
        return true;
    return false;
}

const Enum::YLeaf VsNshStats::vs_nsh_stats_spi_si {0, "vs-nsh-stats-spi-si"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_ter_min_ate {1, "vs-nsh-stats-ter-min-ate"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sf {2, "vs-nsh-stats-sf"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sff {3, "vs-nsh-stats-sff"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sff_local {4, "vs-nsh-stats-sff-local"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sfp {5, "vs-nsh-stats-sfp"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_sfp_detail {6, "vs-nsh-stats-sfp-detail"};
const Enum::YLeaf VsNshStats::vs_nsh_stats_max {7, "vs-nsh-stats-max"};


}
}

