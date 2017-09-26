
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asic_errors_oper_0.hpp"
#include "Cisco_IOS_XR_asic_errors_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asic_errors_oper {

AsicErrors::AsicErrors()
    :
    nodes(std::make_shared<AsicErrors::Nodes>())
{
    nodes->parent = this;

    yang_name = "asic-errors"; yang_parent_name = "Cisco-IOS-XR-asic-errors-oper"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string AsicErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asic-errors-oper:asic-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<AsicErrors::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void AsicErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> AsicErrors::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AsicErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

AsicErrors::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "asic-errors"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asic-errors-oper:asic-errors/" << get_segment_path();
    return path_buffer.str();
}

std::string AsicErrors::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<AsicErrors::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

AsicErrors::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string AsicErrors::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asic-errors-oper:asic-errors/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string AsicErrors::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-information")
    {
        for(auto const & c : asic_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation>();
        c->parent = this;
        asic_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : asic_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-information" || name == "node-name")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::AsicInformation()
    :
    asic{YType::str, "asic"}
    	,
    all_instances(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances>())
	,instances(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances>())
{
    all_instances->parent = this;
    instances->parent = this;

    yang_name = "asic-information"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(asic.yfilter)
	|| (all_instances !=  nullptr && all_instances->has_operation())
	|| (instances !=  nullptr && instances->has_operation());
}

std::string AsicErrors::Nodes::Node::AsicInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-information" <<"[asic='" <<asic <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic.is_set || is_set(asic.yfilter)) leaf_name_data.push_back(asic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-instances")
    {
        if(all_instances == nullptr)
        {
            all_instances = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances>();
        }
        return all_instances;
    }

    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances>();
        }
        return instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_instances != nullptr)
    {
        children["all-instances"] = all_instances;
    }

    if(instances != nullptr)
    {
        children["instances"] = instances;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic")
    {
        asic = value;
        asic.value_namespace = name_space;
        asic.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic")
    {
        asic.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-instances" || name == "instances" || name == "asic")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllInstances()
    :
    all_error_path(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath>())
{
    all_error_path->parent = this;

    yang_name = "all-instances"; yang_parent_name = "asic-information"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (all_error_path !=  nullptr && all_error_path->has_operation());
}

std::string AsicErrors::Nodes::Node::AsicInformation::AllInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::AllInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::AllInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-error-path")
    {
        if(all_error_path == nullptr)
        {
            all_error_path = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath>();
        }
        return all_error_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::AllInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_error_path != nullptr)
    {
        children["all-error-path"] = all_error_path;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-error-path")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::AllErrorPath()
    :
    summary(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary>())
{
    summary->parent = this;

    yang_name = "all-error-path"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-error-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::Summary()
    :
    cih_client{YType::boolean, "cih-client"},
    legacy_client{YType::boolean, "legacy-client"}
{

    yang_name = "summary"; yang_parent_name = "all-error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(cih_client.yfilter)
	|| ydk::is_set(legacy_client.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cih_client.is_set || is_set(cih_client.yfilter)) leaf_name_data.push_back(cih_client.get_name_leafdata());
    if (legacy_client.is_set || is_set(legacy_client.yfilter)) leaf_name_data.push_back(legacy_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sum-data")
    {
        for(auto const & c : sum_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData>();
        c->parent = this;
        sum_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sum_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cih-client")
    {
        cih_client = value;
        cih_client.value_namespace = name_space;
        cih_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "legacy-client")
    {
        legacy_client = value;
        legacy_client.value_namespace = name_space;
        legacy_client.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cih-client")
    {
        cih_client.yfilter = yfilter;
    }
    if(value_path == "legacy-client")
    {
        legacy_client.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum-data" || name == "cih-client" || name == "legacy-client")
        return true;
    return false;
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

    yang_name = "sum-data"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_key.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pcie_err_count.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(crc_err_count.yfilter)
	|| ydk::is_set(err_count.yfilter)
	|| ydk::is_set(gen_err_count.yfilter)
	|| ydk::is_set(mbe_err_count.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(num_nodes.yfilter)
	|| ydk::is_set(par_err_count.yfilter)
	|| ydk::is_set(pcie_err_count.yfilter)
	|| ydk::is_set(reset_err_count.yfilter)
	|| ydk::is_set(sbe_err_count.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_err_count.is_set || is_set(crc_err_count.yfilter)) leaf_name_data.push_back(crc_err_count.get_name_leafdata());
    if (gen_err_count.is_set || is_set(gen_err_count.yfilter)) leaf_name_data.push_back(gen_err_count.get_name_leafdata());
    if (mbe_err_count.is_set || is_set(mbe_err_count.yfilter)) leaf_name_data.push_back(mbe_err_count.get_name_leafdata());
    if (num_nodes.is_set || is_set(num_nodes.yfilter)) leaf_name_data.push_back(num_nodes.get_name_leafdata());
    if (par_err_count.is_set || is_set(par_err_count.yfilter)) leaf_name_data.push_back(par_err_count.get_name_leafdata());
    if (reset_err_count.is_set || is_set(reset_err_count.yfilter)) leaf_name_data.push_back(reset_err_count.get_name_leafdata());
    if (sbe_err_count.is_set || is_set(sbe_err_count.yfilter)) leaf_name_data.push_back(sbe_err_count.get_name_leafdata());

    auto err_count_name_datas = err_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), err_count_name_datas.begin(), err_count_name_datas.end());
    auto node_key_name_datas = node_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_key_name_datas.begin(), node_key_name_datas.end());
    auto pcie_err_count_name_datas = pcie_err_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pcie_err_count_name_datas.begin(), pcie_err_count_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-err-count")
    {
        crc_err_count = value;
        crc_err_count.value_namespace = name_space;
        crc_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-count")
    {
        err_count.append(value);
    }
    if(value_path == "gen-err-count")
    {
        gen_err_count = value;
        gen_err_count.value_namespace = name_space;
        gen_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbe-err-count")
    {
        mbe_err_count = value;
        mbe_err_count.value_namespace = name_space;
        mbe_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key.append(value);
    }
    if(value_path == "num-nodes")
    {
        num_nodes = value;
        num_nodes.value_namespace = name_space;
        num_nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "par-err-count")
    {
        par_err_count = value;
        par_err_count.value_namespace = name_space;
        par_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcie-err-count")
    {
        pcie_err_count.append(value);
    }
    if(value_path == "reset-err-count")
    {
        reset_err_count = value;
        reset_err_count.value_namespace = name_space;
        reset_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbe-err-count")
    {
        sbe_err_count = value;
        sbe_err_count.value_namespace = name_space;
        sbe_err_count.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-err-count")
    {
        crc_err_count.yfilter = yfilter;
    }
    if(value_path == "err-count")
    {
        err_count.yfilter = yfilter;
    }
    if(value_path == "gen-err-count")
    {
        gen_err_count.yfilter = yfilter;
    }
    if(value_path == "mbe-err-count")
    {
        mbe_err_count.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "num-nodes")
    {
        num_nodes.yfilter = yfilter;
    }
    if(value_path == "par-err-count")
    {
        par_err_count.yfilter = yfilter;
    }
    if(value_path == "pcie-err-count")
    {
        pcie_err_count.yfilter = yfilter;
    }
    if(value_path == "reset-err-count")
    {
        reset_err_count.yfilter = yfilter;
    }
    if(value_path == "sbe-err-count")
    {
        sbe_err_count.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-err-count" || name == "err-count" || name == "gen-err-count" || name == "mbe-err-count" || name == "node-key" || name == "num-nodes" || name == "par-err-count" || name == "pcie-err-count" || name == "reset-err-count" || name == "sbe-err-count")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instances()
{

    yang_name = "instances"; yang_parent_name = "asic-information"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::Instance()
    :
    asic_instance{YType::int32, "asic-instance"}
    	,
    error_path(std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath>())
{
    error_path->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(asic_instance.yfilter)
	|| (error_path !=  nullptr && error_path->has_operation());
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[asic-instance='" <<asic_instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-path")
    {
        if(error_path == nullptr)
        {
            error_path = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath>();
        }
        return error_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(error_path != nullptr)
    {
        children["error-path"] = error_path;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-instance")
    {
        asic_instance.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-path" || name == "asic-instance")
        return true;
    return false;
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
    asic_error_crc_soft->parent = this;
    asic_error_generic_hard->parent = this;
    asic_error_generic_soft->parent = this;
    asic_error_mbe_hard->parent = this;
    asic_error_mbe_soft->parent = this;
    asic_error_parity_hard->parent = this;
    asic_error_parity_soft->parent = this;
    asic_error_reset_hard->parent = this;
    asic_error_reset_soft->parent = this;
    asic_error_sbe_hard->parent = this;
    asic_error_sbe_soft->parent = this;
    back_pressure_hard_errors->parent = this;
    back_pressure_soft_errors->parent = this;
    barrier_hard_errors->parent = this;
    barrier_soft_errors->parent = this;
    configuration_hard_errors->parent = this;
    configuration_soft_errors->parent = this;
    crc_hard_errors->parent = this;
    crc_soft_errors->parent = this;
    descriptor_hard_errors->parent = this;
    descriptor_soft_errors->parent = this;
    generic_hard_errors->parent = this;
    generic_soft_errors->parent = this;
    hardware_hard_errors->parent = this;
    hardware_soft_errors->parent = this;
    indirect_hard_errors->parent = this;
    indirect_soft_errors->parent = this;
    instance_summary->parent = this;
    interface_hard_errors->parent = this;
    interface_soft_errors->parent = this;
    io_hard_errors->parent = this;
    io_soft_errors->parent = this;
    link_hard_errors->parent = this;
    link_soft_errors->parent = this;
    multiple_bit_hard_errors->parent = this;
    multiple_bit_soft_errors->parent = this;
    outof_resource_hard->parent = this;
    outof_resource_soft->parent = this;
    parity_hard_errors->parent = this;
    parity_soft_errors->parent = this;
    reset_hard_errors->parent = this;
    reset_soft_errors->parent = this;
    single_bit_hard_errors->parent = this;
    single_bit_soft_errors->parent = this;
    time_out_hard_errors->parent = this;
    time_out_soft_errors->parent = this;
    ucode_hard_errors->parent = this;
    ucode_soft_errors->parent = this;
    unexpected_hard_errors->parent = this;
    unexpected_soft_errors->parent = this;

    yang_name = "error-path"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic-error-crc-hard")
    {
        if(asic_error_crc_hard == nullptr)
        {
            asic_error_crc_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard>();
        }
        return asic_error_crc_hard;
    }

    if(child_yang_name == "asic-error-crc-soft")
    {
        if(asic_error_crc_soft == nullptr)
        {
            asic_error_crc_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft>();
        }
        return asic_error_crc_soft;
    }

    if(child_yang_name == "asic-error-generic-hard")
    {
        if(asic_error_generic_hard == nullptr)
        {
            asic_error_generic_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard>();
        }
        return asic_error_generic_hard;
    }

    if(child_yang_name == "asic-error-generic-soft")
    {
        if(asic_error_generic_soft == nullptr)
        {
            asic_error_generic_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft>();
        }
        return asic_error_generic_soft;
    }

    if(child_yang_name == "asic-error-mbe-hard")
    {
        if(asic_error_mbe_hard == nullptr)
        {
            asic_error_mbe_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard>();
        }
        return asic_error_mbe_hard;
    }

    if(child_yang_name == "asic-error-mbe-soft")
    {
        if(asic_error_mbe_soft == nullptr)
        {
            asic_error_mbe_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft>();
        }
        return asic_error_mbe_soft;
    }

    if(child_yang_name == "asic-error-parity-hard")
    {
        if(asic_error_parity_hard == nullptr)
        {
            asic_error_parity_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard>();
        }
        return asic_error_parity_hard;
    }

    if(child_yang_name == "asic-error-parity-soft")
    {
        if(asic_error_parity_soft == nullptr)
        {
            asic_error_parity_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft>();
        }
        return asic_error_parity_soft;
    }

    if(child_yang_name == "asic-error-reset-hard")
    {
        if(asic_error_reset_hard == nullptr)
        {
            asic_error_reset_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard>();
        }
        return asic_error_reset_hard;
    }

    if(child_yang_name == "asic-error-reset-soft")
    {
        if(asic_error_reset_soft == nullptr)
        {
            asic_error_reset_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft>();
        }
        return asic_error_reset_soft;
    }

    if(child_yang_name == "asic-error-sbe-hard")
    {
        if(asic_error_sbe_hard == nullptr)
        {
            asic_error_sbe_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard>();
        }
        return asic_error_sbe_hard;
    }

    if(child_yang_name == "asic-error-sbe-soft")
    {
        if(asic_error_sbe_soft == nullptr)
        {
            asic_error_sbe_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft>();
        }
        return asic_error_sbe_soft;
    }

    if(child_yang_name == "back-pressure-hard-errors")
    {
        if(back_pressure_hard_errors == nullptr)
        {
            back_pressure_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors>();
        }
        return back_pressure_hard_errors;
    }

    if(child_yang_name == "back-pressure-soft-errors")
    {
        if(back_pressure_soft_errors == nullptr)
        {
            back_pressure_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors>();
        }
        return back_pressure_soft_errors;
    }

    if(child_yang_name == "barrier-hard-errors")
    {
        if(barrier_hard_errors == nullptr)
        {
            barrier_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors>();
        }
        return barrier_hard_errors;
    }

    if(child_yang_name == "barrier-soft-errors")
    {
        if(barrier_soft_errors == nullptr)
        {
            barrier_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors>();
        }
        return barrier_soft_errors;
    }

    if(child_yang_name == "configuration-hard-errors")
    {
        if(configuration_hard_errors == nullptr)
        {
            configuration_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors>();
        }
        return configuration_hard_errors;
    }

    if(child_yang_name == "configuration-soft-errors")
    {
        if(configuration_soft_errors == nullptr)
        {
            configuration_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors>();
        }
        return configuration_soft_errors;
    }

    if(child_yang_name == "crc-hard-errors")
    {
        if(crc_hard_errors == nullptr)
        {
            crc_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors>();
        }
        return crc_hard_errors;
    }

    if(child_yang_name == "crc-soft-errors")
    {
        if(crc_soft_errors == nullptr)
        {
            crc_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors>();
        }
        return crc_soft_errors;
    }

    if(child_yang_name == "descriptor-hard-errors")
    {
        if(descriptor_hard_errors == nullptr)
        {
            descriptor_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors>();
        }
        return descriptor_hard_errors;
    }

    if(child_yang_name == "descriptor-soft-errors")
    {
        if(descriptor_soft_errors == nullptr)
        {
            descriptor_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors>();
        }
        return descriptor_soft_errors;
    }

    if(child_yang_name == "generic-hard-errors")
    {
        if(generic_hard_errors == nullptr)
        {
            generic_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors>();
        }
        return generic_hard_errors;
    }

    if(child_yang_name == "generic-soft-errors")
    {
        if(generic_soft_errors == nullptr)
        {
            generic_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors>();
        }
        return generic_soft_errors;
    }

    if(child_yang_name == "hardware-hard-errors")
    {
        if(hardware_hard_errors == nullptr)
        {
            hardware_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors>();
        }
        return hardware_hard_errors;
    }

    if(child_yang_name == "hardware-soft-errors")
    {
        if(hardware_soft_errors == nullptr)
        {
            hardware_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors>();
        }
        return hardware_soft_errors;
    }

    if(child_yang_name == "indirect-hard-errors")
    {
        if(indirect_hard_errors == nullptr)
        {
            indirect_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors>();
        }
        return indirect_hard_errors;
    }

    if(child_yang_name == "indirect-soft-errors")
    {
        if(indirect_soft_errors == nullptr)
        {
            indirect_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors>();
        }
        return indirect_soft_errors;
    }

    if(child_yang_name == "instance-summary")
    {
        if(instance_summary == nullptr)
        {
            instance_summary = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary>();
        }
        return instance_summary;
    }

    if(child_yang_name == "interface-hard-errors")
    {
        if(interface_hard_errors == nullptr)
        {
            interface_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors>();
        }
        return interface_hard_errors;
    }

    if(child_yang_name == "interface-soft-errors")
    {
        if(interface_soft_errors == nullptr)
        {
            interface_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors>();
        }
        return interface_soft_errors;
    }

    if(child_yang_name == "io-hard-errors")
    {
        if(io_hard_errors == nullptr)
        {
            io_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors>();
        }
        return io_hard_errors;
    }

    if(child_yang_name == "io-soft-errors")
    {
        if(io_soft_errors == nullptr)
        {
            io_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors>();
        }
        return io_soft_errors;
    }

    if(child_yang_name == "link-hard-errors")
    {
        if(link_hard_errors == nullptr)
        {
            link_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors>();
        }
        return link_hard_errors;
    }

    if(child_yang_name == "link-soft-errors")
    {
        if(link_soft_errors == nullptr)
        {
            link_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors>();
        }
        return link_soft_errors;
    }

    if(child_yang_name == "multiple-bit-hard-errors")
    {
        if(multiple_bit_hard_errors == nullptr)
        {
            multiple_bit_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors>();
        }
        return multiple_bit_hard_errors;
    }

    if(child_yang_name == "multiple-bit-soft-errors")
    {
        if(multiple_bit_soft_errors == nullptr)
        {
            multiple_bit_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors>();
        }
        return multiple_bit_soft_errors;
    }

    if(child_yang_name == "outof-resource-hard")
    {
        if(outof_resource_hard == nullptr)
        {
            outof_resource_hard = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard>();
        }
        return outof_resource_hard;
    }

    if(child_yang_name == "outof-resource-soft")
    {
        if(outof_resource_soft == nullptr)
        {
            outof_resource_soft = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft>();
        }
        return outof_resource_soft;
    }

    if(child_yang_name == "parity-hard-errors")
    {
        if(parity_hard_errors == nullptr)
        {
            parity_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors>();
        }
        return parity_hard_errors;
    }

    if(child_yang_name == "parity-soft-errors")
    {
        if(parity_soft_errors == nullptr)
        {
            parity_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors>();
        }
        return parity_soft_errors;
    }

    if(child_yang_name == "reset-hard-errors")
    {
        if(reset_hard_errors == nullptr)
        {
            reset_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors>();
        }
        return reset_hard_errors;
    }

    if(child_yang_name == "reset-soft-errors")
    {
        if(reset_soft_errors == nullptr)
        {
            reset_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors>();
        }
        return reset_soft_errors;
    }

    if(child_yang_name == "single-bit-hard-errors")
    {
        if(single_bit_hard_errors == nullptr)
        {
            single_bit_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors>();
        }
        return single_bit_hard_errors;
    }

    if(child_yang_name == "single-bit-soft-errors")
    {
        if(single_bit_soft_errors == nullptr)
        {
            single_bit_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors>();
        }
        return single_bit_soft_errors;
    }

    if(child_yang_name == "time-out-hard-errors")
    {
        if(time_out_hard_errors == nullptr)
        {
            time_out_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors>();
        }
        return time_out_hard_errors;
    }

    if(child_yang_name == "time-out-soft-errors")
    {
        if(time_out_soft_errors == nullptr)
        {
            time_out_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors>();
        }
        return time_out_soft_errors;
    }

    if(child_yang_name == "ucode-hard-errors")
    {
        if(ucode_hard_errors == nullptr)
        {
            ucode_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors>();
        }
        return ucode_hard_errors;
    }

    if(child_yang_name == "ucode-soft-errors")
    {
        if(ucode_soft_errors == nullptr)
        {
            ucode_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors>();
        }
        return ucode_soft_errors;
    }

    if(child_yang_name == "unexpected-hard-errors")
    {
        if(unexpected_hard_errors == nullptr)
        {
            unexpected_hard_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors>();
        }
        return unexpected_hard_errors;
    }

    if(child_yang_name == "unexpected-soft-errors")
    {
        if(unexpected_soft_errors == nullptr)
        {
            unexpected_soft_errors = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors>();
        }
        return unexpected_soft_errors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(asic_error_crc_hard != nullptr)
    {
        children["asic-error-crc-hard"] = asic_error_crc_hard;
    }

    if(asic_error_crc_soft != nullptr)
    {
        children["asic-error-crc-soft"] = asic_error_crc_soft;
    }

    if(asic_error_generic_hard != nullptr)
    {
        children["asic-error-generic-hard"] = asic_error_generic_hard;
    }

    if(asic_error_generic_soft != nullptr)
    {
        children["asic-error-generic-soft"] = asic_error_generic_soft;
    }

    if(asic_error_mbe_hard != nullptr)
    {
        children["asic-error-mbe-hard"] = asic_error_mbe_hard;
    }

    if(asic_error_mbe_soft != nullptr)
    {
        children["asic-error-mbe-soft"] = asic_error_mbe_soft;
    }

    if(asic_error_parity_hard != nullptr)
    {
        children["asic-error-parity-hard"] = asic_error_parity_hard;
    }

    if(asic_error_parity_soft != nullptr)
    {
        children["asic-error-parity-soft"] = asic_error_parity_soft;
    }

    if(asic_error_reset_hard != nullptr)
    {
        children["asic-error-reset-hard"] = asic_error_reset_hard;
    }

    if(asic_error_reset_soft != nullptr)
    {
        children["asic-error-reset-soft"] = asic_error_reset_soft;
    }

    if(asic_error_sbe_hard != nullptr)
    {
        children["asic-error-sbe-hard"] = asic_error_sbe_hard;
    }

    if(asic_error_sbe_soft != nullptr)
    {
        children["asic-error-sbe-soft"] = asic_error_sbe_soft;
    }

    if(back_pressure_hard_errors != nullptr)
    {
        children["back-pressure-hard-errors"] = back_pressure_hard_errors;
    }

    if(back_pressure_soft_errors != nullptr)
    {
        children["back-pressure-soft-errors"] = back_pressure_soft_errors;
    }

    if(barrier_hard_errors != nullptr)
    {
        children["barrier-hard-errors"] = barrier_hard_errors;
    }

    if(barrier_soft_errors != nullptr)
    {
        children["barrier-soft-errors"] = barrier_soft_errors;
    }

    if(configuration_hard_errors != nullptr)
    {
        children["configuration-hard-errors"] = configuration_hard_errors;
    }

    if(configuration_soft_errors != nullptr)
    {
        children["configuration-soft-errors"] = configuration_soft_errors;
    }

    if(crc_hard_errors != nullptr)
    {
        children["crc-hard-errors"] = crc_hard_errors;
    }

    if(crc_soft_errors != nullptr)
    {
        children["crc-soft-errors"] = crc_soft_errors;
    }

    if(descriptor_hard_errors != nullptr)
    {
        children["descriptor-hard-errors"] = descriptor_hard_errors;
    }

    if(descriptor_soft_errors != nullptr)
    {
        children["descriptor-soft-errors"] = descriptor_soft_errors;
    }

    if(generic_hard_errors != nullptr)
    {
        children["generic-hard-errors"] = generic_hard_errors;
    }

    if(generic_soft_errors != nullptr)
    {
        children["generic-soft-errors"] = generic_soft_errors;
    }

    if(hardware_hard_errors != nullptr)
    {
        children["hardware-hard-errors"] = hardware_hard_errors;
    }

    if(hardware_soft_errors != nullptr)
    {
        children["hardware-soft-errors"] = hardware_soft_errors;
    }

    if(indirect_hard_errors != nullptr)
    {
        children["indirect-hard-errors"] = indirect_hard_errors;
    }

    if(indirect_soft_errors != nullptr)
    {
        children["indirect-soft-errors"] = indirect_soft_errors;
    }

    if(instance_summary != nullptr)
    {
        children["instance-summary"] = instance_summary;
    }

    if(interface_hard_errors != nullptr)
    {
        children["interface-hard-errors"] = interface_hard_errors;
    }

    if(interface_soft_errors != nullptr)
    {
        children["interface-soft-errors"] = interface_soft_errors;
    }

    if(io_hard_errors != nullptr)
    {
        children["io-hard-errors"] = io_hard_errors;
    }

    if(io_soft_errors != nullptr)
    {
        children["io-soft-errors"] = io_soft_errors;
    }

    if(link_hard_errors != nullptr)
    {
        children["link-hard-errors"] = link_hard_errors;
    }

    if(link_soft_errors != nullptr)
    {
        children["link-soft-errors"] = link_soft_errors;
    }

    if(multiple_bit_hard_errors != nullptr)
    {
        children["multiple-bit-hard-errors"] = multiple_bit_hard_errors;
    }

    if(multiple_bit_soft_errors != nullptr)
    {
        children["multiple-bit-soft-errors"] = multiple_bit_soft_errors;
    }

    if(outof_resource_hard != nullptr)
    {
        children["outof-resource-hard"] = outof_resource_hard;
    }

    if(outof_resource_soft != nullptr)
    {
        children["outof-resource-soft"] = outof_resource_soft;
    }

    if(parity_hard_errors != nullptr)
    {
        children["parity-hard-errors"] = parity_hard_errors;
    }

    if(parity_soft_errors != nullptr)
    {
        children["parity-soft-errors"] = parity_soft_errors;
    }

    if(reset_hard_errors != nullptr)
    {
        children["reset-hard-errors"] = reset_hard_errors;
    }

    if(reset_soft_errors != nullptr)
    {
        children["reset-soft-errors"] = reset_soft_errors;
    }

    if(single_bit_hard_errors != nullptr)
    {
        children["single-bit-hard-errors"] = single_bit_hard_errors;
    }

    if(single_bit_soft_errors != nullptr)
    {
        children["single-bit-soft-errors"] = single_bit_soft_errors;
    }

    if(time_out_hard_errors != nullptr)
    {
        children["time-out-hard-errors"] = time_out_hard_errors;
    }

    if(time_out_soft_errors != nullptr)
    {
        children["time-out-soft-errors"] = time_out_soft_errors;
    }

    if(ucode_hard_errors != nullptr)
    {
        children["ucode-hard-errors"] = ucode_hard_errors;
    }

    if(ucode_soft_errors != nullptr)
    {
        children["ucode-soft-errors"] = ucode_soft_errors;
    }

    if(unexpected_hard_errors != nullptr)
    {
        children["unexpected-hard-errors"] = unexpected_hard_errors;
    }

    if(unexpected_soft_errors != nullptr)
    {
        children["unexpected-soft-errors"] = unexpected_soft_errors;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-error-crc-hard" || name == "asic-error-crc-soft" || name == "asic-error-generic-hard" || name == "asic-error-generic-soft" || name == "asic-error-mbe-hard" || name == "asic-error-mbe-soft" || name == "asic-error-parity-hard" || name == "asic-error-parity-soft" || name == "asic-error-reset-hard" || name == "asic-error-reset-soft" || name == "asic-error-sbe-hard" || name == "asic-error-sbe-soft" || name == "back-pressure-hard-errors" || name == "back-pressure-soft-errors" || name == "barrier-hard-errors" || name == "barrier-soft-errors" || name == "configuration-hard-errors" || name == "configuration-soft-errors" || name == "crc-hard-errors" || name == "crc-soft-errors" || name == "descriptor-hard-errors" || name == "descriptor-soft-errors" || name == "generic-hard-errors" || name == "generic-soft-errors" || name == "hardware-hard-errors" || name == "hardware-soft-errors" || name == "indirect-hard-errors" || name == "indirect-soft-errors" || name == "instance-summary" || name == "interface-hard-errors" || name == "interface-soft-errors" || name == "io-hard-errors" || name == "io-soft-errors" || name == "link-hard-errors" || name == "link-soft-errors" || name == "multiple-bit-hard-errors" || name == "multiple-bit-soft-errors" || name == "outof-resource-hard" || name == "outof-resource-soft" || name == "parity-hard-errors" || name == "parity-soft-errors" || name == "reset-hard-errors" || name == "reset-soft-errors" || name == "single-bit-hard-errors" || name == "single-bit-soft-errors" || name == "time-out-hard-errors" || name == "time-out-soft-errors" || name == "ucode-hard-errors" || name == "ucode-soft-errors" || name == "unexpected-hard-errors" || name == "unexpected-soft-errors")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::AsicErrorCrcHard()
{

    yang_name = "asic-error-crc-hard"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-crc-hard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-crc-hard"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::AsicErrorCrcSoft()
{

    yang_name = "asic-error-crc-soft"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-crc-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-crc-soft"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::AsicErrorGenericHard()
{

    yang_name = "asic-error-generic-hard"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-generic-hard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-generic-hard"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::AsicErrorGenericSoft()
{

    yang_name = "asic-error-generic-soft"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-generic-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-generic-soft"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::AsicErrorMbeHard()
{

    yang_name = "asic-error-mbe-hard"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::~AsicErrorMbeHard()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-mbe-hard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::Error()
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

    yang_name = "error"; yang_parent_name = "asic-error-mbe-hard"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::AsicErrorMbeSoft()
{

    yang_name = "asic-error-mbe-soft"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-mbe-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-mbe-soft"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::AsicErrorParityHard()
{

    yang_name = "asic-error-parity-hard"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-parity-hard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-parity-hard"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::AsicErrorParitySoft()
{

    yang_name = "asic-error-parity-soft"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-parity-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-parity-soft"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::AsicErrorResetHard()
{

    yang_name = "asic-error-reset-hard"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-reset-hard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-reset-hard"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::AsicErrorResetSoft()
{

    yang_name = "asic-error-reset-soft"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-reset-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::Error()
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

    yang_name = "error"; yang_parent_name = "asic-error-reset-soft"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::AsicErrorSbeHard()
{

    yang_name = "asic-error-sbe-hard"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-sbe-hard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-sbe-hard"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::AsicErrorSbeSoft()
{

    yang_name = "asic-error-sbe-soft"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-sbe-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "asic-error-sbe-soft"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::BackPressureHardErrors()
{

    yang_name = "back-pressure-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "back-pressure-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "back-pressure-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::BackPressureSoftErrors()
{

    yang_name = "back-pressure-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::~BackPressureSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "back-pressure-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::Error()
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

    yang_name = "error"; yang_parent_name = "back-pressure-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::BarrierHardErrors()
{

    yang_name = "barrier-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "barrier-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::BarrierSoftErrors()
{

    yang_name = "barrier-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "barrier-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::ConfigurationHardErrors()
{

    yang_name = "configuration-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "configuration-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::ConfigurationSoftErrors()
{

    yang_name = "configuration-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::~ConfigurationSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::Error()
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

    yang_name = "error"; yang_parent_name = "configuration-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::CrcHardErrors()
{

    yang_name = "crc-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "crc-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::CrcSoftErrors()
{

    yang_name = "crc-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "crc-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::DescriptorHardErrors()
{

    yang_name = "descriptor-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "descriptor-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "descriptor-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::DescriptorSoftErrors()
{

    yang_name = "descriptor-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::~DescriptorSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "descriptor-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::Error()
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

    yang_name = "error"; yang_parent_name = "descriptor-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::GenericHardErrors()
{

    yang_name = "generic-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "generic-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::GenericSoftErrors()
{

    yang_name = "generic-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::~GenericSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::Error()
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

    yang_name = "error"; yang_parent_name = "generic-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::HardwareHardErrors()
{

    yang_name = "hardware-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::~HardwareHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::Error()
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

    yang_name = "error"; yang_parent_name = "hardware-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::HardwareSoftErrors()
{

    yang_name = "hardware-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "hardware-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::IndirectHardErrors()
{

    yang_name = "indirect-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "indirect-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::IndirectSoftErrors()
{

    yang_name = "indirect-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "indirect-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::InstanceSummary()
    :
    cih_client{YType::boolean, "cih-client"},
    legacy_client{YType::boolean, "legacy-client"}
{

    yang_name = "instance-summary"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(cih_client.yfilter)
	|| ydk::is_set(legacy_client.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cih_client.is_set || is_set(cih_client.yfilter)) leaf_name_data.push_back(cih_client.get_name_leafdata());
    if (legacy_client.is_set || is_set(legacy_client.yfilter)) leaf_name_data.push_back(legacy_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sum-data")
    {
        for(auto const & c : sum_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData>();
        c->parent = this;
        sum_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sum_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cih-client")
    {
        cih_client = value;
        cih_client.value_namespace = name_space;
        cih_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "legacy-client")
    {
        legacy_client = value;
        legacy_client.value_namespace = name_space;
        legacy_client.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cih-client")
    {
        cih_client.yfilter = yfilter;
    }
    if(value_path == "legacy-client")
    {
        legacy_client.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum-data" || name == "cih-client" || name == "legacy-client")
        return true;
    return false;
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

    yang_name = "sum-data"; yang_parent_name = "instance-summary"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : node_key.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : pcie_err_count.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(crc_err_count.yfilter)
	|| ydk::is_set(err_count.yfilter)
	|| ydk::is_set(gen_err_count.yfilter)
	|| ydk::is_set(mbe_err_count.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(num_nodes.yfilter)
	|| ydk::is_set(par_err_count.yfilter)
	|| ydk::is_set(pcie_err_count.yfilter)
	|| ydk::is_set(reset_err_count.yfilter)
	|| ydk::is_set(sbe_err_count.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_err_count.is_set || is_set(crc_err_count.yfilter)) leaf_name_data.push_back(crc_err_count.get_name_leafdata());
    if (gen_err_count.is_set || is_set(gen_err_count.yfilter)) leaf_name_data.push_back(gen_err_count.get_name_leafdata());
    if (mbe_err_count.is_set || is_set(mbe_err_count.yfilter)) leaf_name_data.push_back(mbe_err_count.get_name_leafdata());
    if (num_nodes.is_set || is_set(num_nodes.yfilter)) leaf_name_data.push_back(num_nodes.get_name_leafdata());
    if (par_err_count.is_set || is_set(par_err_count.yfilter)) leaf_name_data.push_back(par_err_count.get_name_leafdata());
    if (reset_err_count.is_set || is_set(reset_err_count.yfilter)) leaf_name_data.push_back(reset_err_count.get_name_leafdata());
    if (sbe_err_count.is_set || is_set(sbe_err_count.yfilter)) leaf_name_data.push_back(sbe_err_count.get_name_leafdata());

    auto err_count_name_datas = err_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), err_count_name_datas.begin(), err_count_name_datas.end());
    auto node_key_name_datas = node_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_key_name_datas.begin(), node_key_name_datas.end());
    auto pcie_err_count_name_datas = pcie_err_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pcie_err_count_name_datas.begin(), pcie_err_count_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-err-count")
    {
        crc_err_count = value;
        crc_err_count.value_namespace = name_space;
        crc_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "err-count")
    {
        err_count.append(value);
    }
    if(value_path == "gen-err-count")
    {
        gen_err_count = value;
        gen_err_count.value_namespace = name_space;
        gen_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mbe-err-count")
    {
        mbe_err_count = value;
        mbe_err_count.value_namespace = name_space;
        mbe_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key.append(value);
    }
    if(value_path == "num-nodes")
    {
        num_nodes = value;
        num_nodes.value_namespace = name_space;
        num_nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "par-err-count")
    {
        par_err_count = value;
        par_err_count.value_namespace = name_space;
        par_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcie-err-count")
    {
        pcie_err_count.append(value);
    }
    if(value_path == "reset-err-count")
    {
        reset_err_count = value;
        reset_err_count.value_namespace = name_space;
        reset_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbe-err-count")
    {
        sbe_err_count = value;
        sbe_err_count.value_namespace = name_space;
        sbe_err_count.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-err-count")
    {
        crc_err_count.yfilter = yfilter;
    }
    if(value_path == "err-count")
    {
        err_count.yfilter = yfilter;
    }
    if(value_path == "gen-err-count")
    {
        gen_err_count.yfilter = yfilter;
    }
    if(value_path == "mbe-err-count")
    {
        mbe_err_count.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "num-nodes")
    {
        num_nodes.yfilter = yfilter;
    }
    if(value_path == "par-err-count")
    {
        par_err_count.yfilter = yfilter;
    }
    if(value_path == "pcie-err-count")
    {
        pcie_err_count.yfilter = yfilter;
    }
    if(value_path == "reset-err-count")
    {
        reset_err_count.yfilter = yfilter;
    }
    if(value_path == "sbe-err-count")
    {
        sbe_err_count.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-err-count" || name == "err-count" || name == "gen-err-count" || name == "mbe-err-count" || name == "node-key" || name == "num-nodes" || name == "par-err-count" || name == "pcie-err-count" || name == "reset-err-count" || name == "sbe-err-count")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::InterfaceHardErrors()
{

    yang_name = "interface-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "interface-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::InterfaceSoftErrors()
{

    yang_name = "interface-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::~InterfaceSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::Error()
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

    yang_name = "error"; yang_parent_name = "interface-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::IoHardErrors()
{

    yang_name = "io-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::~IoHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::Error()
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

    yang_name = "error"; yang_parent_name = "io-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::IoSoftErrors()
{

    yang_name = "io-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "io-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::LinkHardErrors()
{

    yang_name = "link-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
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

    yang_name = "error"; yang_parent_name = "link-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::LinkSoftErrors()
{

    yang_name = "link-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::~LinkSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::Error()
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

    yang_name = "error"; yang_parent_name = "link-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::MultipleBitHardErrors()
{

    yang_name = "multiple-bit-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::~MultipleBitHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multiple-bit-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}


}
}

