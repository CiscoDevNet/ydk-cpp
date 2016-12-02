
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper {

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::DropSpecificStatsData()
    :
    	drop_data{YType::int32, "drop-data"},
	 count{YType::uint64, "count"},
	 id{YType::uint32, "id"},
	 name{YType::str, "name"}
{
    yang_name = "drop-specific-stats-data"; yang_parent_name = "npu-number-for-drop-stat";
}

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::~DropSpecificStatsData()
{
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::has_data() const
{
    return drop_data.is_set
	|| count.is_set
	|| id.is_set
	|| name.is_set;
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_data.operation)
	|| is_set(count.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-specific-stats-data" <<"[drop-data='" <<drop_data.get() <<"']";

    return path_buffer.str();

}

EntityPath Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::get_entity_path(Entity* ancestor) const
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

    if (drop_data.is_set || is_set(drop_data.operation)) leaf_name_data.push_back(drop_data.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::get_children()
{
    return children;
}

void Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-data")
    {
        drop_data = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::NpuNumberForDropStat()
    :
    	npu_id{YType::int32, "npu-id"}
{
    yang_name = "npu-number-for-drop-stat"; yang_parent_name = "npu-number-for-drop-stats";
}

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::~NpuNumberForDropStat()
{
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::has_data() const
{
    for (std::size_t index=0; index<drop_specific_stats_data.size(); index++)
    {
        if(drop_specific_stats_data[index]->has_data())
            return true;
    }
    return npu_id.is_set;
}

bool Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::has_operation() const
{
    for (std::size_t index=0; index<drop_specific_stats_data.size(); index++)
    {
        if(drop_specific_stats_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(npu_id.operation);
}

std::string Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-drop-stat" <<"[npu-id='" <<npu_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::get_entity_path(Entity* ancestor) const
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

    if (npu_id.is_set || is_set(npu_id.operation)) leaf_name_data.push_back(npu_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "drop-specific-stats-data")
    {
        for(auto const & c : drop_specific_stats_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::DropSpecificStatsData>();
        c->parent = this;
        drop_specific_stats_data.push_back(std::move(c));
        children[segment_path] = drop_specific_stats_data.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::get_children()
{
    for (auto const & c : drop_specific_stats_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
    }
}

Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStats()
{
    yang_name = "npu-number-for-drop-stats"; yang_parent_name = "node";
}

Drop::Nodes::Node::NpuNumberForDropStats::~NpuNumberForDropStats()
{
}

bool Drop::Nodes::Node::NpuNumberForDropStats::has_data() const
{
    for (std::size_t index=0; index<npu_number_for_drop_stat.size(); index++)
    {
        if(npu_number_for_drop_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Drop::Nodes::Node::NpuNumberForDropStats::has_operation() const
{
    for (std::size_t index=0; index<npu_number_for_drop_stat.size(); index++)
    {
        if(npu_number_for_drop_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Drop::Nodes::Node::NpuNumberForDropStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-number-for-drop-stats";

    return path_buffer.str();

}

EntityPath Drop::Nodes::Node::NpuNumberForDropStats::get_entity_path(Entity* ancestor) const
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

Entity* Drop::Nodes::Node::NpuNumberForDropStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "npu-number-for-drop-stat")
    {
        for(auto const & c : npu_number_for_drop_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Drop::Nodes::Node::NpuNumberForDropStats::NpuNumberForDropStat>();
        c->parent = this;
        npu_number_for_drop_stat.push_back(std::move(c));
        children[segment_path] = npu_number_for_drop_stat.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Drop::Nodes::Node::NpuNumberForDropStats::get_children()
{
    for (auto const & c : npu_number_for_drop_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Drop::Nodes::Node::NpuNumberForDropStats::set_value(const std::string & value_path, std::string value)
{
}

Drop::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    npu_number_for_drop_stats(std::make_unique<Drop::Nodes::Node::NpuNumberForDropStats>())
{
    npu_number_for_drop_stats->parent = this;
    children["npu-number-for-drop-stats"] = npu_number_for_drop_stats.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Drop::Nodes::Node::~Node()
{
}

bool Drop::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (npu_number_for_drop_stats !=  nullptr && npu_number_for_drop_stats->has_data());
}

bool Drop::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (npu_number_for_drop_stats !=  nullptr && is_set(npu_number_for_drop_stats->operation));
}

std::string Drop::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Drop::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper:drop/nodes/" << get_segment_path();
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

Entity* Drop::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "npu-number-for-drop-stats")
    {
        if(npu_number_for_drop_stats != nullptr)
        {
            children["npu-number-for-drop-stats"] = npu_number_for_drop_stats.get();
        }
        else
        {
            npu_number_for_drop_stats = std::make_unique<Drop::Nodes::Node::NpuNumberForDropStats>();
            npu_number_for_drop_stats->parent = this;
            children["npu-number-for-drop-stats"] = npu_number_for_drop_stats.get();
        }
        return children.at("npu-number-for-drop-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Drop::Nodes::Node::get_children()
{
    if(children.find("npu-number-for-drop-stats") == children.end())
    {
        if(npu_number_for_drop_stats != nullptr)
        {
            children["npu-number-for-drop-stats"] = npu_number_for_drop_stats.get();
        }
    }

    return children;
}

void Drop::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Drop::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "drop";
}

Drop::Nodes::~Nodes()
{
}

bool Drop::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Drop::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Drop::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Drop::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper:drop/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Drop::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Drop::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Drop::Nodes::get_children()
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

void Drop::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Drop::Drop()
    :
    nodes(std::make_unique<Drop::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "drop"; yang_parent_name = "Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper";
}

Drop::~Drop()
{
}

bool Drop::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Drop::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper:drop";

    return path_buffer.str();

}

EntityPath Drop::get_entity_path(Entity* ancestor) const
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

Entity* Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<Drop::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Drop::get_children()
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

void Drop::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Drop::clone_ptr()
{
    return std::make_unique<Drop>();
}


}
}

