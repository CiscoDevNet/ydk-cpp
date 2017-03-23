
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asic_errors_oper_0.hpp"
#include "Cisco_IOS_XR_asic_errors_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asic_errors_oper {

AsicErrors::AsicErrors()
    :
    nodes(std::make_shared<AsicErrors::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "asic-errors"; yang_parent_name = "Cisco-IOS-XR-asic-errors-oper";
}

AsicErrors::~AsicErrors()
{
}

bool AsicErrors::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool AsicErrors::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string AsicErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asic-errors-oper:asic-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> AsicErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<AsicErrors::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::get_children()
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

void AsicErrors::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> AsicErrors::clone_ptr() const
{
    return std::make_shared<AsicErrors>();
}

std::string AsicErrors::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AsicErrors::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AsicErrors::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

AsicErrors::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "asic-errors";
}

AsicErrors::Nodes::~Nodes()
{
}

bool AsicErrors::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asic-errors-oper:asic-errors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<AsicErrors::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::get_children()
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

void AsicErrors::Nodes::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

AsicErrors::Nodes::Node::~Node()
{
}

bool AsicErrors::Nodes::Node::has_data() const
{
    for (std::size_t index=0; index<asic_information.size(); index++)
    {
        if(asic_information[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool AsicErrors::Nodes::Node::has_operation() const
{
    for (std::size_t index=0; index<asic_information.size(); index++)
    {
        if(asic_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation);
}

std::string AsicErrors::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asic-errors-oper:asic-errors/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-information")
    {
        for(auto const & c : asic_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation>();
        c->parent = this;
        asic_information.push_back(std::move(c));
        children[segment_path] = asic_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::get_children()
{
    for (auto const & c : asic_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::AsicInformation()
    :
    asic{YType::str, "asic"}
    	,
    all_instances(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances>())
	,instances(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances>())
{
    all_instances->parent = this;
    children["all-instances"] = all_instances;

    instances->parent = this;
    children["instances"] = instances;

    yang_name = "asic-information"; yang_parent_name = "node";
}

AsicErrors::Nodes::Node::AsicInformation::~AsicInformation()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::has_data() const
{
    return asic.is_set
	|| (all_instances !=  nullptr && all_instances->has_data())
	|| (instances !=  nullptr && instances->has_data());
}

bool AsicErrors::Nodes::Node::AsicInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(asic.operation)
	|| (all_instances !=  nullptr && all_instances->has_operation())
	|| (instances !=  nullptr && instances->has_operation());
}

std::string AsicErrors::Nodes::Node::AsicInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-information" <<"[asic='" <<asic <<"']";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicInformation' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic.is_set || is_set(asic.operation)) leaf_name_data.push_back(asic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-instances")
    {
        if(all_instances != nullptr)
        {
            children["all-instances"] = all_instances;
        }
        else
        {
            all_instances = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances>();
            all_instances->parent = this;
            children["all-instances"] = all_instances;
        }
        return children.at("all-instances");
    }

    if(child_yang_name == "instances")
    {
        if(instances != nullptr)
        {
            children["instances"] = instances;
        }
        else
        {
            instances = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances>();
            instances->parent = this;
            children["instances"] = instances;
        }
        return children.at("instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::get_children()
{
    if(children.find("all-instances") == children.end())
    {
        if(all_instances != nullptr)
        {
            children["all-instances"] = all_instances;
        }
    }

    if(children.find("instances") == children.end())
    {
        if(instances != nullptr)
        {
            children["instances"] = instances;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic")
    {
        asic = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllInstances()
    :
    all_error_path(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath>())
{
    all_error_path->parent = this;
    children["all-error-path"] = all_error_path;

    yang_name = "all-instances"; yang_parent_name = "asic-information";
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::~AllInstances()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::has_data() const
{
    return (all_error_path !=  nullptr && all_error_path->has_data());
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::has_operation() const
{
    return is_set(operation)
	|| (all_error_path !=  nullptr && all_error_path->has_operation());
}

std::string AsicErrors::Nodes::Node::AsicInformation::AllInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-instances";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::AllInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllInstances' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::AllInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-error-path")
    {
        if(all_error_path != nullptr)
        {
            children["all-error-path"] = all_error_path;
        }
        else
        {
            all_error_path = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath>();
            all_error_path->parent = this;
            children["all-error-path"] = all_error_path;
        }
        return children.at("all-error-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::AllInstances::get_children()
{
    if(children.find("all-error-path") == children.end())
    {
        if(all_error_path != nullptr)
        {
            children["all-error-path"] = all_error_path;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::AllErrorPath()
    :
    summary(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary>())
{
    summary->parent = this;
    children["summary"] = summary;

    yang_name = "all-error-path"; yang_parent_name = "all-instances";
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::~AllErrorPath()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-error-path";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllErrorPath' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::get_children()
{
    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::Summary()
    :
    cih_client{YType::boolean, "cih-client"},
    legacy_client{YType::boolean, "legacy-client"}
{
    yang_name = "summary"; yang_parent_name = "all-error-path";
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::~Summary()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::has_data() const
{
    for (std::size_t index=0; index<sum_data.size(); index++)
    {
        if(sum_data[index]->has_data())
            return true;
    }
    return cih_client.is_set
	|| legacy_client.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::has_operation() const
{
    for (std::size_t index=0; index<sum_data.size(); index++)
    {
        if(sum_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cih_client.operation)
	|| is_set(legacy_client.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cih_client.is_set || is_set(cih_client.operation)) leaf_name_data.push_back(cih_client.get_name_leafdata());
    if (legacy_client.is_set || is_set(legacy_client.operation)) leaf_name_data.push_back(legacy_client.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sum-data")
    {
        for(auto const & c : sum_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData>();
        c->parent = this;
        sum_data.push_back(std::move(c));
        children[segment_path] = sum_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::get_children()
{
    for (auto const & c : sum_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cih-client")
    {
        cih_client = value;
    }
    if(value_path == "legacy-client")
    {
        legacy_client = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::SumData()
    :
    crc_err_count{YType::uint32, "crc-err-count"},
    err_count{YType::uint32, "err-count"},
    gen_err_count{YType::uint32, "gen-err-count"},
    mbe_err_count{YType::uint32, "mbe-err-count"},
    node_key{YType::uint32, "node-key"},
    num_nodes{YType::uint32, "num-nodes"},
    par_err_count{YType::uint32, "par-err-count"},
    pcie_err_count{YType::uint32, "pcie-err-count"},
    reset_err_count{YType::uint32, "reset-err-count"},
    sbe_err_count{YType::uint32, "sbe-err-count"}
{
    yang_name = "sum-data"; yang_parent_name = "summary";
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::~SumData()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::has_data() const
{
    for (auto const & leaf : err_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_key.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pcie_err_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return crc_err_count.is_set
	|| gen_err_count.is_set
	|| mbe_err_count.is_set
	|| num_nodes.is_set
	|| par_err_count.is_set
	|| reset_err_count.is_set
	|| sbe_err_count.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::has_operation() const
{
    for (auto const & leaf : err_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : node_key.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : pcie_err_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(crc_err_count.operation)
	|| is_set(err_count.operation)
	|| is_set(gen_err_count.operation)
	|| is_set(mbe_err_count.operation)
	|| is_set(node_key.operation)
	|| is_set(num_nodes.operation)
	|| is_set(par_err_count.operation)
	|| is_set(pcie_err_count.operation)
	|| is_set(reset_err_count.operation)
	|| is_set(sbe_err_count.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-data";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SumData' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_err_count.is_set || is_set(crc_err_count.operation)) leaf_name_data.push_back(crc_err_count.get_name_leafdata());
    if (gen_err_count.is_set || is_set(gen_err_count.operation)) leaf_name_data.push_back(gen_err_count.get_name_leafdata());
    if (mbe_err_count.is_set || is_set(mbe_err_count.operation)) leaf_name_data.push_back(mbe_err_count.get_name_leafdata());
    if (num_nodes.is_set || is_set(num_nodes.operation)) leaf_name_data.push_back(num_nodes.get_name_leafdata());
    if (par_err_count.is_set || is_set(par_err_count.operation)) leaf_name_data.push_back(par_err_count.get_name_leafdata());
    if (reset_err_count.is_set || is_set(reset_err_count.operation)) leaf_name_data.push_back(reset_err_count.get_name_leafdata());
    if (sbe_err_count.is_set || is_set(sbe_err_count.operation)) leaf_name_data.push_back(sbe_err_count.get_name_leafdata());

    auto err_count_name_datas = err_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), err_count_name_datas.begin(), err_count_name_datas.end());
    auto node_key_name_datas = node_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_key_name_datas.begin(), node_key_name_datas.end());
    auto pcie_err_count_name_datas = pcie_err_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pcie_err_count_name_datas.begin(), pcie_err_count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "crc-err-count")
    {
        crc_err_count = value;
    }
    if(value_path == "err-count")
    {
        err_count.append(value);
    }
    if(value_path == "gen-err-count")
    {
        gen_err_count = value;
    }
    if(value_path == "mbe-err-count")
    {
        mbe_err_count = value;
    }
    if(value_path == "node-key")
    {
        node_key.append(value);
    }
    if(value_path == "num-nodes")
    {
        num_nodes = value;
    }
    if(value_path == "par-err-count")
    {
        par_err_count = value;
    }
    if(value_path == "pcie-err-count")
    {
        pcie_err_count.append(value);
    }
    if(value_path == "reset-err-count")
    {
        reset_err_count = value;
    }
    if(value_path == "sbe-err-count")
    {
        sbe_err_count = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instances()
{
    yang_name = "instances"; yang_parent_name = "asic-information";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::~Instances()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instances' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::get_children()
{
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::Instance()
    :
    asic_instance{YType::int32, "asic-instance"}
    	,
    error_path(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath>())
{
    error_path->parent = this;
    children["error-path"] = error_path;

    yang_name = "instance"; yang_parent_name = "instances";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::~Instance()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::has_data() const
{
    return asic_instance.is_set
	|| (error_path !=  nullptr && error_path->has_data());
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(asic_instance.operation)
	|| (error_path !=  nullptr && error_path->has_operation());
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[asic-instance='" <<asic_instance <<"']";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instance' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_instance.is_set || is_set(asic_instance.operation)) leaf_name_data.push_back(asic_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error-path")
    {
        if(error_path != nullptr)
        {
            children["error-path"] = error_path;
        }
        else
        {
            error_path = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath>();
            error_path->parent = this;
            children["error-path"] = error_path;
        }
        return children.at("error-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::get_children()
{
    if(children.find("error-path") == children.end())
    {
        if(error_path != nullptr)
        {
            children["error-path"] = error_path;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ErrorPath()
    :
    asic_error_crc_hard(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard>())
	,asic_error_crc_soft(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft>())
	,asic_error_generic_hard(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard>())
	,asic_error_generic_soft(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft>())
	,asic_error_mbe_hard(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard>())
	,asic_error_mbe_soft(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft>())
	,asic_error_parity_hard(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard>())
	,asic_error_parity_soft(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft>())
	,asic_error_reset_hard(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard>())
	,asic_error_reset_soft(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft>())
	,asic_error_sbe_hard(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard>())
	,asic_error_sbe_soft(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft>())
	,back_pressure_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors>())
	,back_pressure_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors>())
	,barrier_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors>())
	,barrier_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors>())
	,configuration_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors>())
	,configuration_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors>())
	,crc_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors>())
	,crc_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors>())
	,descriptor_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors>())
	,descriptor_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors>())
	,generic_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors>())
	,generic_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors>())
	,hardware_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors>())
	,hardware_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors>())
	,indirect_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors>())
	,indirect_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors>())
	,instance_summary(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary>())
	,interface_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors>())
	,interface_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors>())
	,io_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors>())
	,io_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors>())
	,link_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors>())
	,link_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors>())
	,multiple_bit_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors>())
	,multiple_bit_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors>())
	,outof_resource_hard(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard>())
	,outof_resource_soft(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft>())
	,parity_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors>())
	,parity_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors>())
	,reset_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors>())
	,reset_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors>())
	,single_bit_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors>())
	,single_bit_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors>())
	,time_out_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors>())
	,time_out_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors>())
	,ucode_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors>())
	,ucode_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors>())
	,unexpected_hard_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors>())
	,unexpected_soft_errors(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors>())
{
    asic_error_crc_hard->parent = this;
    children["asic-error-crc-hard"] = asic_error_crc_hard;

    asic_error_crc_soft->parent = this;
    children["asic-error-crc-soft"] = asic_error_crc_soft;

    asic_error_generic_hard->parent = this;
    children["asic-error-generic-hard"] = asic_error_generic_hard;

    asic_error_generic_soft->parent = this;
    children["asic-error-generic-soft"] = asic_error_generic_soft;

    asic_error_mbe_hard->parent = this;
    children["asic-error-mbe-hard"] = asic_error_mbe_hard;

    asic_error_mbe_soft->parent = this;
    children["asic-error-mbe-soft"] = asic_error_mbe_soft;

    asic_error_parity_hard->parent = this;
    children["asic-error-parity-hard"] = asic_error_parity_hard;

    asic_error_parity_soft->parent = this;
    children["asic-error-parity-soft"] = asic_error_parity_soft;

    asic_error_reset_hard->parent = this;
    children["asic-error-reset-hard"] = asic_error_reset_hard;

    asic_error_reset_soft->parent = this;
    children["asic-error-reset-soft"] = asic_error_reset_soft;

    asic_error_sbe_hard->parent = this;
    children["asic-error-sbe-hard"] = asic_error_sbe_hard;

    asic_error_sbe_soft->parent = this;
    children["asic-error-sbe-soft"] = asic_error_sbe_soft;

    back_pressure_hard_errors->parent = this;
    children["back-pressure-hard-errors"] = back_pressure_hard_errors;

    back_pressure_soft_errors->parent = this;
    children["back-pressure-soft-errors"] = back_pressure_soft_errors;

    barrier_hard_errors->parent = this;
    children["barrier-hard-errors"] = barrier_hard_errors;

    barrier_soft_errors->parent = this;
    children["barrier-soft-errors"] = barrier_soft_errors;

    configuration_hard_errors->parent = this;
    children["configuration-hard-errors"] = configuration_hard_errors;

    configuration_soft_errors->parent = this;
    children["configuration-soft-errors"] = configuration_soft_errors;

    crc_hard_errors->parent = this;
    children["crc-hard-errors"] = crc_hard_errors;

    crc_soft_errors->parent = this;
    children["crc-soft-errors"] = crc_soft_errors;

    descriptor_hard_errors->parent = this;
    children["descriptor-hard-errors"] = descriptor_hard_errors;

    descriptor_soft_errors->parent = this;
    children["descriptor-soft-errors"] = descriptor_soft_errors;

    generic_hard_errors->parent = this;
    children["generic-hard-errors"] = generic_hard_errors;

    generic_soft_errors->parent = this;
    children["generic-soft-errors"] = generic_soft_errors;

    hardware_hard_errors->parent = this;
    children["hardware-hard-errors"] = hardware_hard_errors;

    hardware_soft_errors->parent = this;
    children["hardware-soft-errors"] = hardware_soft_errors;

    indirect_hard_errors->parent = this;
    children["indirect-hard-errors"] = indirect_hard_errors;

    indirect_soft_errors->parent = this;
    children["indirect-soft-errors"] = indirect_soft_errors;

    instance_summary->parent = this;
    children["instance-summary"] = instance_summary;

    interface_hard_errors->parent = this;
    children["interface-hard-errors"] = interface_hard_errors;

    interface_soft_errors->parent = this;
    children["interface-soft-errors"] = interface_soft_errors;

    io_hard_errors->parent = this;
    children["io-hard-errors"] = io_hard_errors;

    io_soft_errors->parent = this;
    children["io-soft-errors"] = io_soft_errors;

    link_hard_errors->parent = this;
    children["link-hard-errors"] = link_hard_errors;

    link_soft_errors->parent = this;
    children["link-soft-errors"] = link_soft_errors;

    multiple_bit_hard_errors->parent = this;
    children["multiple-bit-hard-errors"] = multiple_bit_hard_errors;

    multiple_bit_soft_errors->parent = this;
    children["multiple-bit-soft-errors"] = multiple_bit_soft_errors;

    outof_resource_hard->parent = this;
    children["outof-resource-hard"] = outof_resource_hard;

    outof_resource_soft->parent = this;
    children["outof-resource-soft"] = outof_resource_soft;

    parity_hard_errors->parent = this;
    children["parity-hard-errors"] = parity_hard_errors;

    parity_soft_errors->parent = this;
    children["parity-soft-errors"] = parity_soft_errors;

    reset_hard_errors->parent = this;
    children["reset-hard-errors"] = reset_hard_errors;

    reset_soft_errors->parent = this;
    children["reset-soft-errors"] = reset_soft_errors;

    single_bit_hard_errors->parent = this;
    children["single-bit-hard-errors"] = single_bit_hard_errors;

    single_bit_soft_errors->parent = this;
    children["single-bit-soft-errors"] = single_bit_soft_errors;

    time_out_hard_errors->parent = this;
    children["time-out-hard-errors"] = time_out_hard_errors;

    time_out_soft_errors->parent = this;
    children["time-out-soft-errors"] = time_out_soft_errors;

    ucode_hard_errors->parent = this;
    children["ucode-hard-errors"] = ucode_hard_errors;

    ucode_soft_errors->parent = this;
    children["ucode-soft-errors"] = ucode_soft_errors;

    unexpected_hard_errors->parent = this;
    children["unexpected-hard-errors"] = unexpected_hard_errors;

    unexpected_soft_errors->parent = this;
    children["unexpected-soft-errors"] = unexpected_soft_errors;

    yang_name = "error-path"; yang_parent_name = "instance";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::~ErrorPath()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::has_data() const
{
    return (asic_error_crc_hard !=  nullptr && asic_error_crc_hard->has_data())
	|| (asic_error_crc_soft !=  nullptr && asic_error_crc_soft->has_data())
	|| (asic_error_generic_hard !=  nullptr && asic_error_generic_hard->has_data())
	|| (asic_error_generic_soft !=  nullptr && asic_error_generic_soft->has_data())
	|| (asic_error_mbe_hard !=  nullptr && asic_error_mbe_hard->has_data())
	|| (asic_error_mbe_soft !=  nullptr && asic_error_mbe_soft->has_data())
	|| (asic_error_parity_hard !=  nullptr && asic_error_parity_hard->has_data())
	|| (asic_error_parity_soft !=  nullptr && asic_error_parity_soft->has_data())
	|| (asic_error_reset_hard !=  nullptr && asic_error_reset_hard->has_data())
	|| (asic_error_reset_soft !=  nullptr && asic_error_reset_soft->has_data())
	|| (asic_error_sbe_hard !=  nullptr && asic_error_sbe_hard->has_data())
	|| (asic_error_sbe_soft !=  nullptr && asic_error_sbe_soft->has_data())
	|| (back_pressure_hard_errors !=  nullptr && back_pressure_hard_errors->has_data())
	|| (back_pressure_soft_errors !=  nullptr && back_pressure_soft_errors->has_data())
	|| (barrier_hard_errors !=  nullptr && barrier_hard_errors->has_data())
	|| (barrier_soft_errors !=  nullptr && barrier_soft_errors->has_data())
	|| (configuration_hard_errors !=  nullptr && configuration_hard_errors->has_data())
	|| (configuration_soft_errors !=  nullptr && configuration_soft_errors->has_data())
	|| (crc_hard_errors !=  nullptr && crc_hard_errors->has_data())
	|| (crc_soft_errors !=  nullptr && crc_soft_errors->has_data())
	|| (descriptor_hard_errors !=  nullptr && descriptor_hard_errors->has_data())
	|| (descriptor_soft_errors !=  nullptr && descriptor_soft_errors->has_data())
	|| (generic_hard_errors !=  nullptr && generic_hard_errors->has_data())
	|| (generic_soft_errors !=  nullptr && generic_soft_errors->has_data())
	|| (hardware_hard_errors !=  nullptr && hardware_hard_errors->has_data())
	|| (hardware_soft_errors !=  nullptr && hardware_soft_errors->has_data())
	|| (indirect_hard_errors !=  nullptr && indirect_hard_errors->has_data())
	|| (indirect_soft_errors !=  nullptr && indirect_soft_errors->has_data())
	|| (instance_summary !=  nullptr && instance_summary->has_data())
	|| (interface_hard_errors !=  nullptr && interface_hard_errors->has_data())
	|| (interface_soft_errors !=  nullptr && interface_soft_errors->has_data())
	|| (io_hard_errors !=  nullptr && io_hard_errors->has_data())
	|| (io_soft_errors !=  nullptr && io_soft_errors->has_data())
	|| (link_hard_errors !=  nullptr && link_hard_errors->has_data())
	|| (link_soft_errors !=  nullptr && link_soft_errors->has_data())
	|| (multiple_bit_hard_errors !=  nullptr && multiple_bit_hard_errors->has_data())
	|| (multiple_bit_soft_errors !=  nullptr && multiple_bit_soft_errors->has_data())
	|| (outof_resource_hard !=  nullptr && outof_resource_hard->has_data())
	|| (outof_resource_soft !=  nullptr && outof_resource_soft->has_data())
	|| (parity_hard_errors !=  nullptr && parity_hard_errors->has_data())
	|| (parity_soft_errors !=  nullptr && parity_soft_errors->has_data())
	|| (reset_hard_errors !=  nullptr && reset_hard_errors->has_data())
	|| (reset_soft_errors !=  nullptr && reset_soft_errors->has_data())
	|| (single_bit_hard_errors !=  nullptr && single_bit_hard_errors->has_data())
	|| (single_bit_soft_errors !=  nullptr && single_bit_soft_errors->has_data())
	|| (time_out_hard_errors !=  nullptr && time_out_hard_errors->has_data())
	|| (time_out_soft_errors !=  nullptr && time_out_soft_errors->has_data())
	|| (ucode_hard_errors !=  nullptr && ucode_hard_errors->has_data())
	|| (ucode_soft_errors !=  nullptr && ucode_soft_errors->has_data())
	|| (unexpected_hard_errors !=  nullptr && unexpected_hard_errors->has_data())
	|| (unexpected_soft_errors !=  nullptr && unexpected_soft_errors->has_data());
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::has_operation() const
{
    return is_set(operation)
	|| (asic_error_crc_hard !=  nullptr && asic_error_crc_hard->has_operation())
	|| (asic_error_crc_soft !=  nullptr && asic_error_crc_soft->has_operation())
	|| (asic_error_generic_hard !=  nullptr && asic_error_generic_hard->has_operation())
	|| (asic_error_generic_soft !=  nullptr && asic_error_generic_soft->has_operation())
	|| (asic_error_mbe_hard !=  nullptr && asic_error_mbe_hard->has_operation())
	|| (asic_error_mbe_soft !=  nullptr && asic_error_mbe_soft->has_operation())
	|| (asic_error_parity_hard !=  nullptr && asic_error_parity_hard->has_operation())
	|| (asic_error_parity_soft !=  nullptr && asic_error_parity_soft->has_operation())
	|| (asic_error_reset_hard !=  nullptr && asic_error_reset_hard->has_operation())
	|| (asic_error_reset_soft !=  nullptr && asic_error_reset_soft->has_operation())
	|| (asic_error_sbe_hard !=  nullptr && asic_error_sbe_hard->has_operation())
	|| (asic_error_sbe_soft !=  nullptr && asic_error_sbe_soft->has_operation())
	|| (back_pressure_hard_errors !=  nullptr && back_pressure_hard_errors->has_operation())
	|| (back_pressure_soft_errors !=  nullptr && back_pressure_soft_errors->has_operation())
	|| (barrier_hard_errors !=  nullptr && barrier_hard_errors->has_operation())
	|| (barrier_soft_errors !=  nullptr && barrier_soft_errors->has_operation())
	|| (configuration_hard_errors !=  nullptr && configuration_hard_errors->has_operation())
	|| (configuration_soft_errors !=  nullptr && configuration_soft_errors->has_operation())
	|| (crc_hard_errors !=  nullptr && crc_hard_errors->has_operation())
	|| (crc_soft_errors !=  nullptr && crc_soft_errors->has_operation())
	|| (descriptor_hard_errors !=  nullptr && descriptor_hard_errors->has_operation())
	|| (descriptor_soft_errors !=  nullptr && descriptor_soft_errors->has_operation())
	|| (generic_hard_errors !=  nullptr && generic_hard_errors->has_operation())
	|| (generic_soft_errors !=  nullptr && generic_soft_errors->has_operation())
	|| (hardware_hard_errors !=  nullptr && hardware_hard_errors->has_operation())
	|| (hardware_soft_errors !=  nullptr && hardware_soft_errors->has_operation())
	|| (indirect_hard_errors !=  nullptr && indirect_hard_errors->has_operation())
	|| (indirect_soft_errors !=  nullptr && indirect_soft_errors->has_operation())
	|| (instance_summary !=  nullptr && instance_summary->has_operation())
	|| (interface_hard_errors !=  nullptr && interface_hard_errors->has_operation())
	|| (interface_soft_errors !=  nullptr && interface_soft_errors->has_operation())
	|| (io_hard_errors !=  nullptr && io_hard_errors->has_operation())
	|| (io_soft_errors !=  nullptr && io_soft_errors->has_operation())
	|| (link_hard_errors !=  nullptr && link_hard_errors->has_operation())
	|| (link_soft_errors !=  nullptr && link_soft_errors->has_operation())
	|| (multiple_bit_hard_errors !=  nullptr && multiple_bit_hard_errors->has_operation())
	|| (multiple_bit_soft_errors !=  nullptr && multiple_bit_soft_errors->has_operation())
	|| (outof_resource_hard !=  nullptr && outof_resource_hard->has_operation())
	|| (outof_resource_soft !=  nullptr && outof_resource_soft->has_operation())
	|| (parity_hard_errors !=  nullptr && parity_hard_errors->has_operation())
	|| (parity_soft_errors !=  nullptr && parity_soft_errors->has_operation())
	|| (reset_hard_errors !=  nullptr && reset_hard_errors->has_operation())
	|| (reset_soft_errors !=  nullptr && reset_soft_errors->has_operation())
	|| (single_bit_hard_errors !=  nullptr && single_bit_hard_errors->has_operation())
	|| (single_bit_soft_errors !=  nullptr && single_bit_soft_errors->has_operation())
	|| (time_out_hard_errors !=  nullptr && time_out_hard_errors->has_operation())
	|| (time_out_soft_errors !=  nullptr && time_out_soft_errors->has_operation())
	|| (ucode_hard_errors !=  nullptr && ucode_hard_errors->has_operation())
	|| (ucode_soft_errors !=  nullptr && ucode_soft_errors->has_operation())
	|| (unexpected_hard_errors !=  nullptr && unexpected_hard_errors->has_operation())
	|| (unexpected_soft_errors !=  nullptr && unexpected_soft_errors->has_operation());
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-path";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorPath' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "asic-error-crc-hard")
    {
        if(asic_error_crc_hard != nullptr)
        {
            children["asic-error-crc-hard"] = asic_error_crc_hard;
        }
        else
        {
            asic_error_crc_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard>();
            asic_error_crc_hard->parent = this;
            children["asic-error-crc-hard"] = asic_error_crc_hard;
        }
        return children.at("asic-error-crc-hard");
    }

    if(child_yang_name == "asic-error-crc-soft")
    {
        if(asic_error_crc_soft != nullptr)
        {
            children["asic-error-crc-soft"] = asic_error_crc_soft;
        }
        else
        {
            asic_error_crc_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft>();
            asic_error_crc_soft->parent = this;
            children["asic-error-crc-soft"] = asic_error_crc_soft;
        }
        return children.at("asic-error-crc-soft");
    }

    if(child_yang_name == "asic-error-generic-hard")
    {
        if(asic_error_generic_hard != nullptr)
        {
            children["asic-error-generic-hard"] = asic_error_generic_hard;
        }
        else
        {
            asic_error_generic_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard>();
            asic_error_generic_hard->parent = this;
            children["asic-error-generic-hard"] = asic_error_generic_hard;
        }
        return children.at("asic-error-generic-hard");
    }

    if(child_yang_name == "asic-error-generic-soft")
    {
        if(asic_error_generic_soft != nullptr)
        {
            children["asic-error-generic-soft"] = asic_error_generic_soft;
        }
        else
        {
            asic_error_generic_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft>();
            asic_error_generic_soft->parent = this;
            children["asic-error-generic-soft"] = asic_error_generic_soft;
        }
        return children.at("asic-error-generic-soft");
    }

    if(child_yang_name == "asic-error-mbe-hard")
    {
        if(asic_error_mbe_hard != nullptr)
        {
            children["asic-error-mbe-hard"] = asic_error_mbe_hard;
        }
        else
        {
            asic_error_mbe_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard>();
            asic_error_mbe_hard->parent = this;
            children["asic-error-mbe-hard"] = asic_error_mbe_hard;
        }
        return children.at("asic-error-mbe-hard");
    }

    if(child_yang_name == "asic-error-mbe-soft")
    {
        if(asic_error_mbe_soft != nullptr)
        {
            children["asic-error-mbe-soft"] = asic_error_mbe_soft;
        }
        else
        {
            asic_error_mbe_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft>();
            asic_error_mbe_soft->parent = this;
            children["asic-error-mbe-soft"] = asic_error_mbe_soft;
        }
        return children.at("asic-error-mbe-soft");
    }

    if(child_yang_name == "asic-error-parity-hard")
    {
        if(asic_error_parity_hard != nullptr)
        {
            children["asic-error-parity-hard"] = asic_error_parity_hard;
        }
        else
        {
            asic_error_parity_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard>();
            asic_error_parity_hard->parent = this;
            children["asic-error-parity-hard"] = asic_error_parity_hard;
        }
        return children.at("asic-error-parity-hard");
    }

    if(child_yang_name == "asic-error-parity-soft")
    {
        if(asic_error_parity_soft != nullptr)
        {
            children["asic-error-parity-soft"] = asic_error_parity_soft;
        }
        else
        {
            asic_error_parity_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft>();
            asic_error_parity_soft->parent = this;
            children["asic-error-parity-soft"] = asic_error_parity_soft;
        }
        return children.at("asic-error-parity-soft");
    }

    if(child_yang_name == "asic-error-reset-hard")
    {
        if(asic_error_reset_hard != nullptr)
        {
            children["asic-error-reset-hard"] = asic_error_reset_hard;
        }
        else
        {
            asic_error_reset_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard>();
            asic_error_reset_hard->parent = this;
            children["asic-error-reset-hard"] = asic_error_reset_hard;
        }
        return children.at("asic-error-reset-hard");
    }

    if(child_yang_name == "asic-error-reset-soft")
    {
        if(asic_error_reset_soft != nullptr)
        {
            children["asic-error-reset-soft"] = asic_error_reset_soft;
        }
        else
        {
            asic_error_reset_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft>();
            asic_error_reset_soft->parent = this;
            children["asic-error-reset-soft"] = asic_error_reset_soft;
        }
        return children.at("asic-error-reset-soft");
    }

    if(child_yang_name == "asic-error-sbe-hard")
    {
        if(asic_error_sbe_hard != nullptr)
        {
            children["asic-error-sbe-hard"] = asic_error_sbe_hard;
        }
        else
        {
            asic_error_sbe_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard>();
            asic_error_sbe_hard->parent = this;
            children["asic-error-sbe-hard"] = asic_error_sbe_hard;
        }
        return children.at("asic-error-sbe-hard");
    }

    if(child_yang_name == "asic-error-sbe-soft")
    {
        if(asic_error_sbe_soft != nullptr)
        {
            children["asic-error-sbe-soft"] = asic_error_sbe_soft;
        }
        else
        {
            asic_error_sbe_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft>();
            asic_error_sbe_soft->parent = this;
            children["asic-error-sbe-soft"] = asic_error_sbe_soft;
        }
        return children.at("asic-error-sbe-soft");
    }

    if(child_yang_name == "back-pressure-hard-errors")
    {
        if(back_pressure_hard_errors != nullptr)
        {
            children["back-pressure-hard-errors"] = back_pressure_hard_errors;
        }
        else
        {
            back_pressure_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors>();
            back_pressure_hard_errors->parent = this;
            children["back-pressure-hard-errors"] = back_pressure_hard_errors;
        }
        return children.at("back-pressure-hard-errors");
    }

    if(child_yang_name == "back-pressure-soft-errors")
    {
        if(back_pressure_soft_errors != nullptr)
        {
            children["back-pressure-soft-errors"] = back_pressure_soft_errors;
        }
        else
        {
            back_pressure_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors>();
            back_pressure_soft_errors->parent = this;
            children["back-pressure-soft-errors"] = back_pressure_soft_errors;
        }
        return children.at("back-pressure-soft-errors");
    }

    if(child_yang_name == "barrier-hard-errors")
    {
        if(barrier_hard_errors != nullptr)
        {
            children["barrier-hard-errors"] = barrier_hard_errors;
        }
        else
        {
            barrier_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors>();
            barrier_hard_errors->parent = this;
            children["barrier-hard-errors"] = barrier_hard_errors;
        }
        return children.at("barrier-hard-errors");
    }

    if(child_yang_name == "barrier-soft-errors")
    {
        if(barrier_soft_errors != nullptr)
        {
            children["barrier-soft-errors"] = barrier_soft_errors;
        }
        else
        {
            barrier_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors>();
            barrier_soft_errors->parent = this;
            children["barrier-soft-errors"] = barrier_soft_errors;
        }
        return children.at("barrier-soft-errors");
    }

    if(child_yang_name == "configuration-hard-errors")
    {
        if(configuration_hard_errors != nullptr)
        {
            children["configuration-hard-errors"] = configuration_hard_errors;
        }
        else
        {
            configuration_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors>();
            configuration_hard_errors->parent = this;
            children["configuration-hard-errors"] = configuration_hard_errors;
        }
        return children.at("configuration-hard-errors");
    }

    if(child_yang_name == "configuration-soft-errors")
    {
        if(configuration_soft_errors != nullptr)
        {
            children["configuration-soft-errors"] = configuration_soft_errors;
        }
        else
        {
            configuration_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors>();
            configuration_soft_errors->parent = this;
            children["configuration-soft-errors"] = configuration_soft_errors;
        }
        return children.at("configuration-soft-errors");
    }

    if(child_yang_name == "crc-hard-errors")
    {
        if(crc_hard_errors != nullptr)
        {
            children["crc-hard-errors"] = crc_hard_errors;
        }
        else
        {
            crc_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors>();
            crc_hard_errors->parent = this;
            children["crc-hard-errors"] = crc_hard_errors;
        }
        return children.at("crc-hard-errors");
    }

    if(child_yang_name == "crc-soft-errors")
    {
        if(crc_soft_errors != nullptr)
        {
            children["crc-soft-errors"] = crc_soft_errors;
        }
        else
        {
            crc_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors>();
            crc_soft_errors->parent = this;
            children["crc-soft-errors"] = crc_soft_errors;
        }
        return children.at("crc-soft-errors");
    }

    if(child_yang_name == "descriptor-hard-errors")
    {
        if(descriptor_hard_errors != nullptr)
        {
            children["descriptor-hard-errors"] = descriptor_hard_errors;
        }
        else
        {
            descriptor_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors>();
            descriptor_hard_errors->parent = this;
            children["descriptor-hard-errors"] = descriptor_hard_errors;
        }
        return children.at("descriptor-hard-errors");
    }

    if(child_yang_name == "descriptor-soft-errors")
    {
        if(descriptor_soft_errors != nullptr)
        {
            children["descriptor-soft-errors"] = descriptor_soft_errors;
        }
        else
        {
            descriptor_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors>();
            descriptor_soft_errors->parent = this;
            children["descriptor-soft-errors"] = descriptor_soft_errors;
        }
        return children.at("descriptor-soft-errors");
    }

    if(child_yang_name == "generic-hard-errors")
    {
        if(generic_hard_errors != nullptr)
        {
            children["generic-hard-errors"] = generic_hard_errors;
        }
        else
        {
            generic_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors>();
            generic_hard_errors->parent = this;
            children["generic-hard-errors"] = generic_hard_errors;
        }
        return children.at("generic-hard-errors");
    }

    if(child_yang_name == "generic-soft-errors")
    {
        if(generic_soft_errors != nullptr)
        {
            children["generic-soft-errors"] = generic_soft_errors;
        }
        else
        {
            generic_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors>();
            generic_soft_errors->parent = this;
            children["generic-soft-errors"] = generic_soft_errors;
        }
        return children.at("generic-soft-errors");
    }

    if(child_yang_name == "hardware-hard-errors")
    {
        if(hardware_hard_errors != nullptr)
        {
            children["hardware-hard-errors"] = hardware_hard_errors;
        }
        else
        {
            hardware_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors>();
            hardware_hard_errors->parent = this;
            children["hardware-hard-errors"] = hardware_hard_errors;
        }
        return children.at("hardware-hard-errors");
    }

    if(child_yang_name == "hardware-soft-errors")
    {
        if(hardware_soft_errors != nullptr)
        {
            children["hardware-soft-errors"] = hardware_soft_errors;
        }
        else
        {
            hardware_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors>();
            hardware_soft_errors->parent = this;
            children["hardware-soft-errors"] = hardware_soft_errors;
        }
        return children.at("hardware-soft-errors");
    }

    if(child_yang_name == "indirect-hard-errors")
    {
        if(indirect_hard_errors != nullptr)
        {
            children["indirect-hard-errors"] = indirect_hard_errors;
        }
        else
        {
            indirect_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors>();
            indirect_hard_errors->parent = this;
            children["indirect-hard-errors"] = indirect_hard_errors;
        }
        return children.at("indirect-hard-errors");
    }

    if(child_yang_name == "indirect-soft-errors")
    {
        if(indirect_soft_errors != nullptr)
        {
            children["indirect-soft-errors"] = indirect_soft_errors;
        }
        else
        {
            indirect_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors>();
            indirect_soft_errors->parent = this;
            children["indirect-soft-errors"] = indirect_soft_errors;
        }
        return children.at("indirect-soft-errors");
    }

    if(child_yang_name == "instance-summary")
    {
        if(instance_summary != nullptr)
        {
            children["instance-summary"] = instance_summary;
        }
        else
        {
            instance_summary = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary>();
            instance_summary->parent = this;
            children["instance-summary"] = instance_summary;
        }
        return children.at("instance-summary");
    }

    if(child_yang_name == "interface-hard-errors")
    {
        if(interface_hard_errors != nullptr)
        {
            children["interface-hard-errors"] = interface_hard_errors;
        }
        else
        {
            interface_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors>();
            interface_hard_errors->parent = this;
            children["interface-hard-errors"] = interface_hard_errors;
        }
        return children.at("interface-hard-errors");
    }

    if(child_yang_name == "interface-soft-errors")
    {
        if(interface_soft_errors != nullptr)
        {
            children["interface-soft-errors"] = interface_soft_errors;
        }
        else
        {
            interface_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors>();
            interface_soft_errors->parent = this;
            children["interface-soft-errors"] = interface_soft_errors;
        }
        return children.at("interface-soft-errors");
    }

    if(child_yang_name == "io-hard-errors")
    {
        if(io_hard_errors != nullptr)
        {
            children["io-hard-errors"] = io_hard_errors;
        }
        else
        {
            io_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors>();
            io_hard_errors->parent = this;
            children["io-hard-errors"] = io_hard_errors;
        }
        return children.at("io-hard-errors");
    }

    if(child_yang_name == "io-soft-errors")
    {
        if(io_soft_errors != nullptr)
        {
            children["io-soft-errors"] = io_soft_errors;
        }
        else
        {
            io_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors>();
            io_soft_errors->parent = this;
            children["io-soft-errors"] = io_soft_errors;
        }
        return children.at("io-soft-errors");
    }

    if(child_yang_name == "link-hard-errors")
    {
        if(link_hard_errors != nullptr)
        {
            children["link-hard-errors"] = link_hard_errors;
        }
        else
        {
            link_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors>();
            link_hard_errors->parent = this;
            children["link-hard-errors"] = link_hard_errors;
        }
        return children.at("link-hard-errors");
    }

    if(child_yang_name == "link-soft-errors")
    {
        if(link_soft_errors != nullptr)
        {
            children["link-soft-errors"] = link_soft_errors;
        }
        else
        {
            link_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors>();
            link_soft_errors->parent = this;
            children["link-soft-errors"] = link_soft_errors;
        }
        return children.at("link-soft-errors");
    }

    if(child_yang_name == "multiple-bit-hard-errors")
    {
        if(multiple_bit_hard_errors != nullptr)
        {
            children["multiple-bit-hard-errors"] = multiple_bit_hard_errors;
        }
        else
        {
            multiple_bit_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors>();
            multiple_bit_hard_errors->parent = this;
            children["multiple-bit-hard-errors"] = multiple_bit_hard_errors;
        }
        return children.at("multiple-bit-hard-errors");
    }

    if(child_yang_name == "multiple-bit-soft-errors")
    {
        if(multiple_bit_soft_errors != nullptr)
        {
            children["multiple-bit-soft-errors"] = multiple_bit_soft_errors;
        }
        else
        {
            multiple_bit_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors>();
            multiple_bit_soft_errors->parent = this;
            children["multiple-bit-soft-errors"] = multiple_bit_soft_errors;
        }
        return children.at("multiple-bit-soft-errors");
    }

    if(child_yang_name == "outof-resource-hard")
    {
        if(outof_resource_hard != nullptr)
        {
            children["outof-resource-hard"] = outof_resource_hard;
        }
        else
        {
            outof_resource_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard>();
            outof_resource_hard->parent = this;
            children["outof-resource-hard"] = outof_resource_hard;
        }
        return children.at("outof-resource-hard");
    }

    if(child_yang_name == "outof-resource-soft")
    {
        if(outof_resource_soft != nullptr)
        {
            children["outof-resource-soft"] = outof_resource_soft;
        }
        else
        {
            outof_resource_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft>();
            outof_resource_soft->parent = this;
            children["outof-resource-soft"] = outof_resource_soft;
        }
        return children.at("outof-resource-soft");
    }

    if(child_yang_name == "parity-hard-errors")
    {
        if(parity_hard_errors != nullptr)
        {
            children["parity-hard-errors"] = parity_hard_errors;
        }
        else
        {
            parity_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors>();
            parity_hard_errors->parent = this;
            children["parity-hard-errors"] = parity_hard_errors;
        }
        return children.at("parity-hard-errors");
    }

    if(child_yang_name == "parity-soft-errors")
    {
        if(parity_soft_errors != nullptr)
        {
            children["parity-soft-errors"] = parity_soft_errors;
        }
        else
        {
            parity_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors>();
            parity_soft_errors->parent = this;
            children["parity-soft-errors"] = parity_soft_errors;
        }
        return children.at("parity-soft-errors");
    }

    if(child_yang_name == "reset-hard-errors")
    {
        if(reset_hard_errors != nullptr)
        {
            children["reset-hard-errors"] = reset_hard_errors;
        }
        else
        {
            reset_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors>();
            reset_hard_errors->parent = this;
            children["reset-hard-errors"] = reset_hard_errors;
        }
        return children.at("reset-hard-errors");
    }

    if(child_yang_name == "reset-soft-errors")
    {
        if(reset_soft_errors != nullptr)
        {
            children["reset-soft-errors"] = reset_soft_errors;
        }
        else
        {
            reset_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors>();
            reset_soft_errors->parent = this;
            children["reset-soft-errors"] = reset_soft_errors;
        }
        return children.at("reset-soft-errors");
    }

    if(child_yang_name == "single-bit-hard-errors")
    {
        if(single_bit_hard_errors != nullptr)
        {
            children["single-bit-hard-errors"] = single_bit_hard_errors;
        }
        else
        {
            single_bit_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors>();
            single_bit_hard_errors->parent = this;
            children["single-bit-hard-errors"] = single_bit_hard_errors;
        }
        return children.at("single-bit-hard-errors");
    }

    if(child_yang_name == "single-bit-soft-errors")
    {
        if(single_bit_soft_errors != nullptr)
        {
            children["single-bit-soft-errors"] = single_bit_soft_errors;
        }
        else
        {
            single_bit_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors>();
            single_bit_soft_errors->parent = this;
            children["single-bit-soft-errors"] = single_bit_soft_errors;
        }
        return children.at("single-bit-soft-errors");
    }

    if(child_yang_name == "time-out-hard-errors")
    {
        if(time_out_hard_errors != nullptr)
        {
            children["time-out-hard-errors"] = time_out_hard_errors;
        }
        else
        {
            time_out_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors>();
            time_out_hard_errors->parent = this;
            children["time-out-hard-errors"] = time_out_hard_errors;
        }
        return children.at("time-out-hard-errors");
    }

    if(child_yang_name == "time-out-soft-errors")
    {
        if(time_out_soft_errors != nullptr)
        {
            children["time-out-soft-errors"] = time_out_soft_errors;
        }
        else
        {
            time_out_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors>();
            time_out_soft_errors->parent = this;
            children["time-out-soft-errors"] = time_out_soft_errors;
        }
        return children.at("time-out-soft-errors");
    }

    if(child_yang_name == "ucode-hard-errors")
    {
        if(ucode_hard_errors != nullptr)
        {
            children["ucode-hard-errors"] = ucode_hard_errors;
        }
        else
        {
            ucode_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors>();
            ucode_hard_errors->parent = this;
            children["ucode-hard-errors"] = ucode_hard_errors;
        }
        return children.at("ucode-hard-errors");
    }

    if(child_yang_name == "ucode-soft-errors")
    {
        if(ucode_soft_errors != nullptr)
        {
            children["ucode-soft-errors"] = ucode_soft_errors;
        }
        else
        {
            ucode_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors>();
            ucode_soft_errors->parent = this;
            children["ucode-soft-errors"] = ucode_soft_errors;
        }
        return children.at("ucode-soft-errors");
    }

    if(child_yang_name == "unexpected-hard-errors")
    {
        if(unexpected_hard_errors != nullptr)
        {
            children["unexpected-hard-errors"] = unexpected_hard_errors;
        }
        else
        {
            unexpected_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors>();
            unexpected_hard_errors->parent = this;
            children["unexpected-hard-errors"] = unexpected_hard_errors;
        }
        return children.at("unexpected-hard-errors");
    }

    if(child_yang_name == "unexpected-soft-errors")
    {
        if(unexpected_soft_errors != nullptr)
        {
            children["unexpected-soft-errors"] = unexpected_soft_errors;
        }
        else
        {
            unexpected_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors>();
            unexpected_soft_errors->parent = this;
            children["unexpected-soft-errors"] = unexpected_soft_errors;
        }
        return children.at("unexpected-soft-errors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::get_children()
{
    if(children.find("asic-error-crc-hard") == children.end())
    {
        if(asic_error_crc_hard != nullptr)
        {
            children["asic-error-crc-hard"] = asic_error_crc_hard;
        }
    }

    if(children.find("asic-error-crc-soft") == children.end())
    {
        if(asic_error_crc_soft != nullptr)
        {
            children["asic-error-crc-soft"] = asic_error_crc_soft;
        }
    }

    if(children.find("asic-error-generic-hard") == children.end())
    {
        if(asic_error_generic_hard != nullptr)
        {
            children["asic-error-generic-hard"] = asic_error_generic_hard;
        }
    }

    if(children.find("asic-error-generic-soft") == children.end())
    {
        if(asic_error_generic_soft != nullptr)
        {
            children["asic-error-generic-soft"] = asic_error_generic_soft;
        }
    }

    if(children.find("asic-error-mbe-hard") == children.end())
    {
        if(asic_error_mbe_hard != nullptr)
        {
            children["asic-error-mbe-hard"] = asic_error_mbe_hard;
        }
    }

    if(children.find("asic-error-mbe-soft") == children.end())
    {
        if(asic_error_mbe_soft != nullptr)
        {
            children["asic-error-mbe-soft"] = asic_error_mbe_soft;
        }
    }

    if(children.find("asic-error-parity-hard") == children.end())
    {
        if(asic_error_parity_hard != nullptr)
        {
            children["asic-error-parity-hard"] = asic_error_parity_hard;
        }
    }

    if(children.find("asic-error-parity-soft") == children.end())
    {
        if(asic_error_parity_soft != nullptr)
        {
            children["asic-error-parity-soft"] = asic_error_parity_soft;
        }
    }

    if(children.find("asic-error-reset-hard") == children.end())
    {
        if(asic_error_reset_hard != nullptr)
        {
            children["asic-error-reset-hard"] = asic_error_reset_hard;
        }
    }

    if(children.find("asic-error-reset-soft") == children.end())
    {
        if(asic_error_reset_soft != nullptr)
        {
            children["asic-error-reset-soft"] = asic_error_reset_soft;
        }
    }

    if(children.find("asic-error-sbe-hard") == children.end())
    {
        if(asic_error_sbe_hard != nullptr)
        {
            children["asic-error-sbe-hard"] = asic_error_sbe_hard;
        }
    }

    if(children.find("asic-error-sbe-soft") == children.end())
    {
        if(asic_error_sbe_soft != nullptr)
        {
            children["asic-error-sbe-soft"] = asic_error_sbe_soft;
        }
    }

    if(children.find("back-pressure-hard-errors") == children.end())
    {
        if(back_pressure_hard_errors != nullptr)
        {
            children["back-pressure-hard-errors"] = back_pressure_hard_errors;
        }
    }

    if(children.find("back-pressure-soft-errors") == children.end())
    {
        if(back_pressure_soft_errors != nullptr)
        {
            children["back-pressure-soft-errors"] = back_pressure_soft_errors;
        }
    }

    if(children.find("barrier-hard-errors") == children.end())
    {
        if(barrier_hard_errors != nullptr)
        {
            children["barrier-hard-errors"] = barrier_hard_errors;
        }
    }

    if(children.find("barrier-soft-errors") == children.end())
    {
        if(barrier_soft_errors != nullptr)
        {
            children["barrier-soft-errors"] = barrier_soft_errors;
        }
    }

    if(children.find("configuration-hard-errors") == children.end())
    {
        if(configuration_hard_errors != nullptr)
        {
            children["configuration-hard-errors"] = configuration_hard_errors;
        }
    }

    if(children.find("configuration-soft-errors") == children.end())
    {
        if(configuration_soft_errors != nullptr)
        {
            children["configuration-soft-errors"] = configuration_soft_errors;
        }
    }

    if(children.find("crc-hard-errors") == children.end())
    {
        if(crc_hard_errors != nullptr)
        {
            children["crc-hard-errors"] = crc_hard_errors;
        }
    }

    if(children.find("crc-soft-errors") == children.end())
    {
        if(crc_soft_errors != nullptr)
        {
            children["crc-soft-errors"] = crc_soft_errors;
        }
    }

    if(children.find("descriptor-hard-errors") == children.end())
    {
        if(descriptor_hard_errors != nullptr)
        {
            children["descriptor-hard-errors"] = descriptor_hard_errors;
        }
    }

    if(children.find("descriptor-soft-errors") == children.end())
    {
        if(descriptor_soft_errors != nullptr)
        {
            children["descriptor-soft-errors"] = descriptor_soft_errors;
        }
    }

    if(children.find("generic-hard-errors") == children.end())
    {
        if(generic_hard_errors != nullptr)
        {
            children["generic-hard-errors"] = generic_hard_errors;
        }
    }

    if(children.find("generic-soft-errors") == children.end())
    {
        if(generic_soft_errors != nullptr)
        {
            children["generic-soft-errors"] = generic_soft_errors;
        }
    }

    if(children.find("hardware-hard-errors") == children.end())
    {
        if(hardware_hard_errors != nullptr)
        {
            children["hardware-hard-errors"] = hardware_hard_errors;
        }
    }

    if(children.find("hardware-soft-errors") == children.end())
    {
        if(hardware_soft_errors != nullptr)
        {
            children["hardware-soft-errors"] = hardware_soft_errors;
        }
    }

    if(children.find("indirect-hard-errors") == children.end())
    {
        if(indirect_hard_errors != nullptr)
        {
            children["indirect-hard-errors"] = indirect_hard_errors;
        }
    }

    if(children.find("indirect-soft-errors") == children.end())
    {
        if(indirect_soft_errors != nullptr)
        {
            children["indirect-soft-errors"] = indirect_soft_errors;
        }
    }

    if(children.find("instance-summary") == children.end())
    {
        if(instance_summary != nullptr)
        {
            children["instance-summary"] = instance_summary;
        }
    }

    if(children.find("interface-hard-errors") == children.end())
    {
        if(interface_hard_errors != nullptr)
        {
            children["interface-hard-errors"] = interface_hard_errors;
        }
    }

    if(children.find("interface-soft-errors") == children.end())
    {
        if(interface_soft_errors != nullptr)
        {
            children["interface-soft-errors"] = interface_soft_errors;
        }
    }

    if(children.find("io-hard-errors") == children.end())
    {
        if(io_hard_errors != nullptr)
        {
            children["io-hard-errors"] = io_hard_errors;
        }
    }

    if(children.find("io-soft-errors") == children.end())
    {
        if(io_soft_errors != nullptr)
        {
            children["io-soft-errors"] = io_soft_errors;
        }
    }

    if(children.find("link-hard-errors") == children.end())
    {
        if(link_hard_errors != nullptr)
        {
            children["link-hard-errors"] = link_hard_errors;
        }
    }

    if(children.find("link-soft-errors") == children.end())
    {
        if(link_soft_errors != nullptr)
        {
            children["link-soft-errors"] = link_soft_errors;
        }
    }

    if(children.find("multiple-bit-hard-errors") == children.end())
    {
        if(multiple_bit_hard_errors != nullptr)
        {
            children["multiple-bit-hard-errors"] = multiple_bit_hard_errors;
        }
    }

    if(children.find("multiple-bit-soft-errors") == children.end())
    {
        if(multiple_bit_soft_errors != nullptr)
        {
            children["multiple-bit-soft-errors"] = multiple_bit_soft_errors;
        }
    }

    if(children.find("outof-resource-hard") == children.end())
    {
        if(outof_resource_hard != nullptr)
        {
            children["outof-resource-hard"] = outof_resource_hard;
        }
    }

    if(children.find("outof-resource-soft") == children.end())
    {
        if(outof_resource_soft != nullptr)
        {
            children["outof-resource-soft"] = outof_resource_soft;
        }
    }

    if(children.find("parity-hard-errors") == children.end())
    {
        if(parity_hard_errors != nullptr)
        {
            children["parity-hard-errors"] = parity_hard_errors;
        }
    }

    if(children.find("parity-soft-errors") == children.end())
    {
        if(parity_soft_errors != nullptr)
        {
            children["parity-soft-errors"] = parity_soft_errors;
        }
    }

    if(children.find("reset-hard-errors") == children.end())
    {
        if(reset_hard_errors != nullptr)
        {
            children["reset-hard-errors"] = reset_hard_errors;
        }
    }

    if(children.find("reset-soft-errors") == children.end())
    {
        if(reset_soft_errors != nullptr)
        {
            children["reset-soft-errors"] = reset_soft_errors;
        }
    }

    if(children.find("single-bit-hard-errors") == children.end())
    {
        if(single_bit_hard_errors != nullptr)
        {
            children["single-bit-hard-errors"] = single_bit_hard_errors;
        }
    }

    if(children.find("single-bit-soft-errors") == children.end())
    {
        if(single_bit_soft_errors != nullptr)
        {
            children["single-bit-soft-errors"] = single_bit_soft_errors;
        }
    }

    if(children.find("time-out-hard-errors") == children.end())
    {
        if(time_out_hard_errors != nullptr)
        {
            children["time-out-hard-errors"] = time_out_hard_errors;
        }
    }

    if(children.find("time-out-soft-errors") == children.end())
    {
        if(time_out_soft_errors != nullptr)
        {
            children["time-out-soft-errors"] = time_out_soft_errors;
        }
    }

    if(children.find("ucode-hard-errors") == children.end())
    {
        if(ucode_hard_errors != nullptr)
        {
            children["ucode-hard-errors"] = ucode_hard_errors;
        }
    }

    if(children.find("ucode-soft-errors") == children.end())
    {
        if(ucode_soft_errors != nullptr)
        {
            children["ucode-soft-errors"] = ucode_soft_errors;
        }
    }

    if(children.find("unexpected-hard-errors") == children.end())
    {
        if(unexpected_hard_errors != nullptr)
        {
            children["unexpected-hard-errors"] = unexpected_hard_errors;
        }
    }

    if(children.find("unexpected-soft-errors") == children.end())
    {
        if(unexpected_soft_errors != nullptr)
        {
            children["unexpected-soft-errors"] = unexpected_soft_errors;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::MultipleBitSoftErrors()
{
    yang_name = "multiple-bit-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::~MultipleBitSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multiple-bit-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultipleBitSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "multiple-bit-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::AsicErrorGenericSoft()
{
    yang_name = "asic-error-generic-soft"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::~AsicErrorGenericSoft()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-generic-soft";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorGenericSoft' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-generic-soft";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::CrcHardErrors()
{
    yang_name = "crc-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::~CrcHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrcHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "crc-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::AsicErrorSbeSoft()
{
    yang_name = "asic-error-sbe-soft"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::~AsicErrorSbeSoft()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-sbe-soft";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorSbeSoft' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-sbe-soft";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::HardwareSoftErrors()
{
    yang_name = "hardware-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::~HardwareSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HardwareSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "hardware-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::AsicErrorCrcSoft()
{
    yang_name = "asic-error-crc-soft"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::~AsicErrorCrcSoft()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-crc-soft";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorCrcSoft' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-crc-soft";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::AsicErrorParitySoft()
{
    yang_name = "asic-error-parity-soft"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::~AsicErrorParitySoft()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-parity-soft";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorParitySoft' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-parity-soft";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::IoSoftErrors()
{
    yang_name = "io-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::~IoSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IoSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "io-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::ResetSoftErrors()
{
    yang_name = "reset-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::~ResetSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResetSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "reset-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::BarrierHardErrors()
{
    yang_name = "barrier-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::~BarrierHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BarrierHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "barrier-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::UcodeSoftErrors()
{
    yang_name = "ucode-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::~UcodeSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucode-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcodeSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "ucode-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::AsicErrorResetHard()
{
    yang_name = "asic-error-reset-hard"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::~AsicErrorResetHard()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-reset-hard";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorResetHard' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-reset-hard";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::SingleBitHardErrors()
{
    yang_name = "single-bit-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::~SingleBitHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-bit-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleBitHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "single-bit-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::IndirectHardErrors()
{
    yang_name = "indirect-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::~IndirectHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IndirectHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "indirect-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::OutofResourceSoft()
{
    yang_name = "outof-resource-soft"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::~OutofResourceSoft()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outof-resource-soft";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutofResourceSoft' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "outof-resource-soft";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::CrcSoftErrors()
{
    yang_name = "crc-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::~CrcSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrcSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "crc-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::TimeOutHardErrors()
{
    yang_name = "time-out-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::~TimeOutHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-out-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeOutHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "time-out-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::BarrierSoftErrors()
{
    yang_name = "barrier-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::~BarrierSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BarrierSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "barrier-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::AsicErrorMbeSoft()
{
    yang_name = "asic-error-mbe-soft"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::~AsicErrorMbeSoft()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-mbe-soft";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorMbeSoft' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-mbe-soft";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::BackPressureHardErrors()
{
    yang_name = "back-pressure-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::~BackPressureHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "back-pressure-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackPressureHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "back-pressure-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::SingleBitSoftErrors()
{
    yang_name = "single-bit-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::~SingleBitSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-bit-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleBitSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "single-bit-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::IndirectSoftErrors()
{
    yang_name = "indirect-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::~IndirectSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IndirectSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "indirect-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::GenericHardErrors()
{
    yang_name = "generic-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::~GenericHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "generic-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::LinkHardErrors()
{
    yang_name = "link-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::~LinkHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "link-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::ConfigurationHardErrors()
{
    yang_name = "configuration-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::~ConfigurationHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfigurationHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "configuration-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::InstanceSummary()
    :
    cih_client{YType::boolean, "cih-client"},
    legacy_client{YType::boolean, "legacy-client"}
{
    yang_name = "instance-summary"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::~InstanceSummary()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::has_data() const
{
    for (std::size_t index=0; index<sum_data.size(); index++)
    {
        if(sum_data[index]->has_data())
            return true;
    }
    return cih_client.is_set
	|| legacy_client.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::has_operation() const
{
    for (std::size_t index=0; index<sum_data.size(); index++)
    {
        if(sum_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cih_client.operation)
	|| is_set(legacy_client.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-summary";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InstanceSummary' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cih_client.is_set || is_set(cih_client.operation)) leaf_name_data.push_back(cih_client.get_name_leafdata());
    if (legacy_client.is_set || is_set(legacy_client.operation)) leaf_name_data.push_back(legacy_client.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sum-data")
    {
        for(auto const & c : sum_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData>();
        c->parent = this;
        sum_data.push_back(std::move(c));
        children[segment_path] = sum_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::get_children()
{
    for (auto const & c : sum_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cih-client")
    {
        cih_client = value;
    }
    if(value_path == "legacy-client")
    {
        legacy_client = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::SumData()
    :
    crc_err_count{YType::uint32, "crc-err-count"},
    err_count{YType::uint32, "err-count"},
    gen_err_count{YType::uint32, "gen-err-count"},
    mbe_err_count{YType::uint32, "mbe-err-count"},
    node_key{YType::uint32, "node-key"},
    num_nodes{YType::uint32, "num-nodes"},
    par_err_count{YType::uint32, "par-err-count"},
    pcie_err_count{YType::uint32, "pcie-err-count"},
    reset_err_count{YType::uint32, "reset-err-count"},
    sbe_err_count{YType::uint32, "sbe-err-count"}
{
    yang_name = "sum-data"; yang_parent_name = "instance-summary";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::~SumData()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::has_data() const
{
    for (auto const & leaf : err_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : node_key.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : pcie_err_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return crc_err_count.is_set
	|| gen_err_count.is_set
	|| mbe_err_count.is_set
	|| num_nodes.is_set
	|| par_err_count.is_set
	|| reset_err_count.is_set
	|| sbe_err_count.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::has_operation() const
{
    for (auto const & leaf : err_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : node_key.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : pcie_err_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(crc_err_count.operation)
	|| is_set(err_count.operation)
	|| is_set(gen_err_count.operation)
	|| is_set(mbe_err_count.operation)
	|| is_set(node_key.operation)
	|| is_set(num_nodes.operation)
	|| is_set(par_err_count.operation)
	|| is_set(pcie_err_count.operation)
	|| is_set(reset_err_count.operation)
	|| is_set(sbe_err_count.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-data";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SumData' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_err_count.is_set || is_set(crc_err_count.operation)) leaf_name_data.push_back(crc_err_count.get_name_leafdata());
    if (gen_err_count.is_set || is_set(gen_err_count.operation)) leaf_name_data.push_back(gen_err_count.get_name_leafdata());
    if (mbe_err_count.is_set || is_set(mbe_err_count.operation)) leaf_name_data.push_back(mbe_err_count.get_name_leafdata());
    if (num_nodes.is_set || is_set(num_nodes.operation)) leaf_name_data.push_back(num_nodes.get_name_leafdata());
    if (par_err_count.is_set || is_set(par_err_count.operation)) leaf_name_data.push_back(par_err_count.get_name_leafdata());
    if (reset_err_count.is_set || is_set(reset_err_count.operation)) leaf_name_data.push_back(reset_err_count.get_name_leafdata());
    if (sbe_err_count.is_set || is_set(sbe_err_count.operation)) leaf_name_data.push_back(sbe_err_count.get_name_leafdata());

    auto err_count_name_datas = err_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), err_count_name_datas.begin(), err_count_name_datas.end());
    auto node_key_name_datas = node_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_key_name_datas.begin(), node_key_name_datas.end());
    auto pcie_err_count_name_datas = pcie_err_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pcie_err_count_name_datas.begin(), pcie_err_count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "crc-err-count")
    {
        crc_err_count = value;
    }
    if(value_path == "err-count")
    {
        err_count.append(value);
    }
    if(value_path == "gen-err-count")
    {
        gen_err_count = value;
    }
    if(value_path == "mbe-err-count")
    {
        mbe_err_count = value;
    }
    if(value_path == "node-key")
    {
        node_key.append(value);
    }
    if(value_path == "num-nodes")
    {
        num_nodes = value;
    }
    if(value_path == "par-err-count")
    {
        par_err_count = value;
    }
    if(value_path == "pcie-err-count")
    {
        pcie_err_count.append(value);
    }
    if(value_path == "reset-err-count")
    {
        reset_err_count = value;
    }
    if(value_path == "sbe-err-count")
    {
        sbe_err_count = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::UnexpectedHardErrors()
{
    yang_name = "unexpected-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::~UnexpectedHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unexpected-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnexpectedHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "unexpected-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::TimeOutSoftErrors()
{
    yang_name = "time-out-soft-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::~TimeOutSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-out-soft-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeOutSoftErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "time-out-soft-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::AsicErrorGenericHard()
{
    yang_name = "asic-error-generic-hard"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::~AsicErrorGenericHard()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-generic-hard";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorGenericHard' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-generic-hard";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::ParityHardErrors()
{
    yang_name = "parity-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::~ParityHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParityHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "parity-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::DescriptorHardErrors()
{
    yang_name = "descriptor-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::~DescriptorHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "descriptor-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DescriptorHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "descriptor-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::InterfaceHardErrors()
{
    yang_name = "interface-hard-errors"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::~InterfaceHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-hard-errors";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceHardErrors' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "interface-hard-errors";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::AsicErrorSbeHard()
{
    yang_name = "asic-error-sbe-hard"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::~AsicErrorSbeHard()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-sbe-hard";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorSbeHard' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-sbe-hard";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::AsicErrorCrcHard()
{
    yang_name = "asic-error-crc-hard"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::~AsicErrorCrcHard()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-crc-hard";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorCrcHard' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-crc-hard";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::AsicErrorParityHard()
{
    yang_name = "asic-error-parity-hard"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::~AsicErrorParityHard()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-parity-hard";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorParityHard' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::set_value(const std::string & value_path, std::string value)
{
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{
    yang_name = "error"; yang_parent_name = "asic-error-parity-hard";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alarm_on.operation)
	|| is_set(asic_info.operation)
	|| is_set(count.operation)
	|| is_set(intr_type.operation)
	|| is_set(last_cleared.operation)
	|| is_set(leaf_id.operation)
	|| is_set(name.operation)
	|| is_set(node_key.operation)
	|| is_set(period_hi.operation)
	|| is_set(period_lo.operation)
	|| is_set(thresh_hi.operation)
	|| is_set(thresh_lo.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Error' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.operation)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.operation)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.operation)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.operation)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.operation)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.operation)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.operation)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.operation)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.operation)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.operation)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(std::move(c));
        children[segment_path] = csrs_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(std::move(c));
        children[segment_path] = last_err.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::get_children()
{
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-key")
    {
        node_key = value;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{
    yang_name = "csrs-info"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(name.operation)
	|| is_set(width.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsrsInfo' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{
    yang_name = "last-err"; yang_parent_name = "error";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(at_time.operation)
	|| is_set(at_time_nsec.operation)
	|| is_set(counter_val.operation)
	|| is_set(error_desc.operation)
	|| is_set(error_regval.operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastErr' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.operation)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.operation)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.operation)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.operation)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::get_children()
{
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "at-time")
    {
        at_time = value;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::AsicErrorResetSoft()
{
    yang_name = "asic-error-reset-soft"; yang_parent_name = "error-path";
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::~AsicErrorResetSoft()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-reset-soft";

    return path_buffer.str();

}

EntityPath AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsicErrorResetSoft' in Cisco_IOS_XR_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error>();
        c->parent = this;
        error.push_back(std::move(c));
        children[segment_path] = error.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::get_children()
{
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::set_value(const std::string & value_path, std::string value)
{
}


}
}

