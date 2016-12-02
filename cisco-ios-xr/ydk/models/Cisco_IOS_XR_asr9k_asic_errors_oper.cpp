
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_asr9k_asic_errors_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_asic_errors_oper {

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
    for (auto const & leaf : node_key.getValues())
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
    for (auto const & leaf : node_key.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(crc_err_count.operation)
	|| is_set(gen_err_count.operation)
	|| is_set(instance.operation)
	|| is_set(mbe_err_count.operation)
	|| is_set(num_nodes.operation)
	|| is_set(par_err_count.operation)
	|| is_set(reset_err_count.operation)
	|| is_set(sbe_err_count.operation);
}

std::string AsicErrorStats::Nodes::Node::Counts::Count::SumData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-data";

    return path_buffer.str();

}

EntityPath AsicErrorStats::Nodes::Node::Counts::Count::SumData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_err_count.is_set || is_set(crc_err_count.operation)) leaf_name_data.push_back(crc_err_count.get_name_leafdata());
    if (gen_err_count.is_set || is_set(gen_err_count.operation)) leaf_name_data.push_back(gen_err_count.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (mbe_err_count.is_set || is_set(mbe_err_count.operation)) leaf_name_data.push_back(mbe_err_count.get_name_leafdata());
    if (num_nodes.is_set || is_set(num_nodes.operation)) leaf_name_data.push_back(num_nodes.get_name_leafdata());
    if (par_err_count.is_set || is_set(par_err_count.operation)) leaf_name_data.push_back(par_err_count.get_name_leafdata());
    if (reset_err_count.is_set || is_set(reset_err_count.operation)) leaf_name_data.push_back(reset_err_count.get_name_leafdata());
    if (sbe_err_count.is_set || is_set(sbe_err_count.operation)) leaf_name_data.push_back(sbe_err_count.get_name_leafdata());

    auto node_key_name_datas = node_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_key_name_datas.begin(), node_key_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AsicErrorStats::Nodes::Node::Counts::Count::SumData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & AsicErrorStats::Nodes::Node::Counts::Count::SumData::get_children()
{
    return children;
}

void AsicErrorStats::Nodes::Node::Counts::Count::SumData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "crc-err-count")
    {
        crc_err_count = value;
    }
    if(value_path == "gen-err-count")
    {
        gen_err_count = value;
    }
    if(value_path == "instance")
    {
        instance = value;
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
    if(value_path == "reset-err-count")
    {
        reset_err_count = value;
    }
    if(value_path == "sbe-err-count")
    {
        sbe_err_count = value;
    }
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
    return is_set(operation)
	|| is_set(type.operation);
}

std::string AsicErrorStats::Nodes::Node::Counts::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath AsicErrorStats::Nodes::Node::Counts::Count::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AsicErrorStats::Nodes::Node::Counts::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<AsicErrorStats::Nodes::Node::Counts::Count::SumData>();
        c->parent = this;
        sum_data.push_back(std::move(c));
        children[segment_path] = sum_data.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AsicErrorStats::Nodes::Node::Counts::Count::get_children()
{
    for (auto const & c : sum_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void AsicErrorStats::Nodes::Node::Counts::Count::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
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
    return is_set(operation);
}

std::string AsicErrorStats::Nodes::Node::Counts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counts";

    return path_buffer.str();

}

EntityPath AsicErrorStats::Nodes::Node::Counts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AsicErrorStats::Nodes::Node::Counts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<AsicErrorStats::Nodes::Node::Counts::Count>();
        c->parent = this;
        count.push_back(std::move(c));
        children[segment_path] = count.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AsicErrorStats::Nodes::Node::Counts::get_children()
{
    for (auto const & c : count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void AsicErrorStats::Nodes::Node::Counts::set_value(const std::string & value_path, std::string value)
{
}

AsicErrorStats::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    counts(std::make_unique<AsicErrorStats::Nodes::Node::Counts>())
{
    counts->parent = this;
    children["counts"] = counts.get();

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
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (counts !=  nullptr && is_set(counts->operation));
}

std::string AsicErrorStats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath AsicErrorStats::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-asic-errors-oper:asic-error-stats/nodes/" << get_segment_path();
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

Entity* AsicErrorStats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counts")
    {
        if(counts != nullptr)
        {
            children["counts"] = counts.get();
        }
        else
        {
            counts = std::make_unique<AsicErrorStats::Nodes::Node::Counts>();
            counts->parent = this;
            children["counts"] = counts.get();
        }
        return children.at("counts");
    }

    return nullptr;
}

std::map<std::string, Entity*> & AsicErrorStats::Nodes::Node::get_children()
{
    if(children.find("counts") == children.end())
    {
        if(counts != nullptr)
        {
            children["counts"] = counts.get();
        }
    }

    return children;
}

void AsicErrorStats::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
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
    return is_set(operation);
}

std::string AsicErrorStats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath AsicErrorStats::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-asic-errors-oper:asic-error-stats/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AsicErrorStats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<AsicErrorStats::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AsicErrorStats::Nodes::get_children()
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

void AsicErrorStats::Nodes::set_value(const std::string & value_path, std::string value)
{
}

AsicErrorStats::AsicErrorStats()
    :
    nodes(std::make_unique<AsicErrorStats::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

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
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string AsicErrorStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-asic-errors-oper:asic-error-stats";

    return path_buffer.str();

}

EntityPath AsicErrorStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AsicErrorStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<AsicErrorStats::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & AsicErrorStats::get_children()
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

void AsicErrorStats::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> AsicErrorStats::clone_ptr()
{
    return std::make_unique<AsicErrorStats>();
}


}
}

