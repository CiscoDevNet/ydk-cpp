
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_asic_errors_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_asic_errors_oper {

AsicErrorStats::AsicErrorStats()
    :
    nodes(std::make_shared<AsicErrorStats::Nodes>())
{
    nodes->parent = this;

    yang_name = "asic-error-stats"; yang_parent_name = "Cisco-IOS-XR-asr9k-asic-errors-oper";
}

AsicErrorStats::~AsicErrorStats()
{
}

bool AsicErrorStats::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool AsicErrorStats::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string AsicErrorStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-asic-errors-oper:asic-error-stats";

    return path_buffer.str();

}

const EntityPath AsicErrorStats::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> AsicErrorStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<AsicErrorStats::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrorStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void AsicErrorStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrorStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> AsicErrorStats::clone_ptr() const
{
    return std::make_shared<AsicErrorStats>();
}

std::string AsicErrorStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AsicErrorStats::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AsicErrorStats::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AsicErrorStats::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AsicErrorStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

AsicErrorStats::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "asic-error-stats";
}

AsicErrorStats::Nodes::~Nodes()
{
}

bool AsicErrorStats::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrorStats::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrorStats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath AsicErrorStats::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-asic-errors-oper:asic-error-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrorStats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<AsicErrorStats::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrorStats::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrorStats::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrorStats::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrorStats::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

AsicErrorStats::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    counts(std::make_shared<AsicErrorStats::Nodes::Node::Counts>())
{
    counts->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

AsicErrorStats::Nodes::Node::~Node()
{
}

bool AsicErrorStats::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (counts !=  nullptr && counts->has_data());
}

bool AsicErrorStats::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (counts !=  nullptr && counts->has_operation());
}

std::string AsicErrorStats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath AsicErrorStats::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-asic-errors-oper:asic-error-stats/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrorStats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counts")
    {
        if(counts == nullptr)
        {
            counts = std::make_shared<AsicErrorStats::Nodes::Node::Counts>();
        }
        return counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrorStats::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counts != nullptr)
    {
        children["counts"] = counts;
    }

    return children;
}

void AsicErrorStats::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrorStats::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool AsicErrorStats::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counts" || name == "node-name")
        return true;
    return false;
}

AsicErrorStats::Nodes::Node::Counts::Counts()
{
    yang_name = "counts"; yang_parent_name = "node";
}

AsicErrorStats::Nodes::Node::Counts::~Counts()
{
}

bool AsicErrorStats::Nodes::Node::Counts::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrorStats::Nodes::Node::Counts::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrorStats::Nodes::Node::Counts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counts";

    return path_buffer.str();

}

const EntityPath AsicErrorStats::Nodes::Node::Counts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counts' in Cisco_IOS_XR_asr9k_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrorStats::Nodes::Node::Counts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrorStats::Nodes::Node::Counts::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrorStats::Nodes::Node::Counts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrorStats::Nodes::Node::Counts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrorStats::Nodes::Node::Counts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrorStats::Nodes::Node::Counts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

AsicErrorStats::Nodes::Node::Counts::Count::Count()
    :
    type{YType::str, "type"}
{
    yang_name = "count"; yang_parent_name = "counts";
}

AsicErrorStats::Nodes::Node::Counts::Count::~Count()
{
}

bool AsicErrorStats::Nodes::Node::Counts::Count::has_data() const
{
    for (std::size_t index=0; index<sum_data.size(); index++)
    {
        if(sum_data[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool AsicErrorStats::Nodes::Node::Counts::Count::has_operation() const
{
    for (std::size_t index=0; index<sum_data.size(); index++)
    {
        if(sum_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string AsicErrorStats::Nodes::Node::Counts::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath AsicErrorStats::Nodes::Node::Counts::Count::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Count' in Cisco_IOS_XR_asr9k_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrorStats::Nodes::Node::Counts::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<AsicErrorStats::Nodes::Node::Counts::Count::SumData>();
        c->parent = this;
        sum_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrorStats::Nodes::Node::Counts::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sum_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrorStats::Nodes::Node::Counts::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrorStats::Nodes::Node::Counts::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool AsicErrorStats::Nodes::Node::Counts::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum-data" || name == "type")
        return true;
    return false;
}

AsicErrorStats::Nodes::Node::Counts::Count::SumData::SumData()
    :
    crc_err_count{YType::uint32, "crc-err-count"},
    gen_err_count{YType::uint32, "gen-err-count"},
    instance{YType::uint32, "instance"},
    mbe_err_count{YType::uint32, "mbe-err-count"},
    node_key{YType::uint32, "node-key"},
    num_nodes{YType::uint32, "num-nodes"},
    par_err_count{YType::uint32, "par-err-count"},
    reset_err_count{YType::uint32, "reset-err-count"},
    sbe_err_count{YType::uint32, "sbe-err-count"}
{
    yang_name = "sum-data"; yang_parent_name = "count";
}

AsicErrorStats::Nodes::Node::Counts::Count::SumData::~SumData()
{
}

bool AsicErrorStats::Nodes::Node::Counts::Count::SumData::has_data() const
{
    for (auto const & leaf : node_key.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return crc_err_count.is_set
	|| gen_err_count.is_set
	|| instance.is_set
	|| mbe_err_count.is_set
	|| num_nodes.is_set
	|| par_err_count.is_set
	|| reset_err_count.is_set
	|| sbe_err_count.is_set;
}

bool AsicErrorStats::Nodes::Node::Counts::Count::SumData::has_operation() const
{
    for (auto const & leaf : node_key.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(crc_err_count.yfilter)
	|| ydk::is_set(gen_err_count.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(mbe_err_count.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(num_nodes.yfilter)
	|| ydk::is_set(par_err_count.yfilter)
	|| ydk::is_set(reset_err_count.yfilter)
	|| ydk::is_set(sbe_err_count.yfilter);
}

std::string AsicErrorStats::Nodes::Node::Counts::Count::SumData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-data";

    return path_buffer.str();

}

const EntityPath AsicErrorStats::Nodes::Node::Counts::Count::SumData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SumData' in Cisco_IOS_XR_asr9k_asic_errors_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_err_count.is_set || is_set(crc_err_count.yfilter)) leaf_name_data.push_back(crc_err_count.get_name_leafdata());
    if (gen_err_count.is_set || is_set(gen_err_count.yfilter)) leaf_name_data.push_back(gen_err_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (mbe_err_count.is_set || is_set(mbe_err_count.yfilter)) leaf_name_data.push_back(mbe_err_count.get_name_leafdata());
    if (num_nodes.is_set || is_set(num_nodes.yfilter)) leaf_name_data.push_back(num_nodes.get_name_leafdata());
    if (par_err_count.is_set || is_set(par_err_count.yfilter)) leaf_name_data.push_back(par_err_count.get_name_leafdata());
    if (reset_err_count.is_set || is_set(reset_err_count.yfilter)) leaf_name_data.push_back(reset_err_count.get_name_leafdata());
    if (sbe_err_count.is_set || is_set(sbe_err_count.yfilter)) leaf_name_data.push_back(sbe_err_count.get_name_leafdata());

    auto node_key_name_datas = node_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_key_name_datas.begin(), node_key_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AsicErrorStats::Nodes::Node::Counts::Count::SumData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrorStats::Nodes::Node::Counts::Count::SumData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrorStats::Nodes::Node::Counts::Count::SumData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-err-count")
    {
        crc_err_count = value;
        crc_err_count.value_namespace = name_space;
        crc_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gen-err-count")
    {
        gen_err_count = value;
        gen_err_count.value_namespace = name_space;
        gen_err_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
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

void AsicErrorStats::Nodes::Node::Counts::Count::SumData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-err-count")
    {
        crc_err_count.yfilter = yfilter;
    }
    if(value_path == "gen-err-count")
    {
        gen_err_count.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
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
    if(value_path == "reset-err-count")
    {
        reset_err_count.yfilter = yfilter;
    }
    if(value_path == "sbe-err-count")
    {
        sbe_err_count.yfilter = yfilter;
    }
}

bool AsicErrorStats::Nodes::Node::Counts::Count::SumData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-err-count" || name == "gen-err-count" || name == "instance" || name == "mbe-err-count" || name == "node-key" || name == "num-nodes" || name == "par-err-count" || name == "reset-err-count" || name == "sbe-err-count")
        return true;
    return false;
}


}
}

