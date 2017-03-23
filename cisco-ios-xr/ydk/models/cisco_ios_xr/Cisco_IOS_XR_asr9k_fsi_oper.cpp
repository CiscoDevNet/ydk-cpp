
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_fsi_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_fsi_oper {

FabricStats::FabricStats()
    :
    nodes(std::make_shared<FabricStats::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "fabric-stats"; yang_parent_name = "Cisco-IOS-XR-asr9k-fsi-oper";
}

FabricStats::~FabricStats()
{
}

bool FabricStats::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool FabricStats::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string FabricStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fsi-oper:fabric-stats";

    return path_buffer.str();

}

EntityPath FabricStats::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> FabricStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<FabricStats::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & FabricStats::get_children()
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

void FabricStats::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> FabricStats::clone_ptr() const
{
    return std::make_shared<FabricStats>();
}

std::string FabricStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FabricStats::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FabricStats::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

FabricStats::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "fabric-stats";
}

FabricStats::Nodes::~Nodes()
{
}

bool FabricStats::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool FabricStats::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FabricStats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath FabricStats::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-fsi-oper:fabric-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FabricStats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<FabricStats::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & FabricStats::Nodes::get_children()
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

void FabricStats::Nodes::set_value(const std::string & value_path, std::string value)
{
}

FabricStats::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    statses(std::make_shared<FabricStats::Nodes::Node::Statses>())
{
    statses->parent = this;
    children["statses"] = statses;

    yang_name = "node"; yang_parent_name = "nodes";
}

FabricStats::Nodes::Node::~Node()
{
}

bool FabricStats::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (statses !=  nullptr && statses->has_data());
}

bool FabricStats::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (statses !=  nullptr && statses->has_operation());
}

std::string FabricStats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath FabricStats::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-fsi-oper:fabric-stats/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> FabricStats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statses")
    {
        if(statses != nullptr)
        {
            children["statses"] = statses;
        }
        else
        {
            statses = std::make_shared<FabricStats::Nodes::Node::Statses>();
            statses->parent = this;
            children["statses"] = statses;
        }
        return children.at("statses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & FabricStats::Nodes::Node::get_children()
{
    if(children.find("statses") == children.end())
    {
        if(statses != nullptr)
        {
            children["statses"] = statses;
        }
    }

    return children;
}

void FabricStats::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

FabricStats::Nodes::Node::Statses::Statses()
{
    yang_name = "statses"; yang_parent_name = "node";
}

FabricStats::Nodes::Node::Statses::~Statses()
{
}

bool FabricStats::Nodes::Node::Statses::has_data() const
{
    for (std::size_t index=0; index<stats.size(); index++)
    {
        if(stats[index]->has_data())
            return true;
    }
    return false;
}

bool FabricStats::Nodes::Node::Statses::has_operation() const
{
    for (std::size_t index=0; index<stats.size(); index++)
    {
        if(stats[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FabricStats::Nodes::Node::Statses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statses";

    return path_buffer.str();

}

EntityPath FabricStats::Nodes::Node::Statses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statses' in Cisco_IOS_XR_asr9k_fsi_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FabricStats::Nodes::Node::Statses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stats")
    {
        for(auto const & c : stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<FabricStats::Nodes::Node::Statses::Stats>();
        c->parent = this;
        stats.push_back(std::move(c));
        children[segment_path] = stats.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & FabricStats::Nodes::Node::Statses::get_children()
{
    for (auto const & c : stats)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void FabricStats::Nodes::Node::Statses::set_value(const std::string & value_path, std::string value)
{
}

FabricStats::Nodes::Node::Statses::Stats::Stats()
    :
    type{YType::str, "type"},
    stat_table_name{YType::str, "stat-table-name"}
{
    yang_name = "stats"; yang_parent_name = "statses";
}

FabricStats::Nodes::Node::Statses::Stats::~Stats()
{
}

bool FabricStats::Nodes::Node::Statses::Stats::has_data() const
{
    for (std::size_t index=0; index<stats_table.size(); index++)
    {
        if(stats_table[index]->has_data())
            return true;
    }
    return type.is_set
	|| stat_table_name.is_set;
}

bool FabricStats::Nodes::Node::Statses::Stats::has_operation() const
{
    for (std::size_t index=0; index<stats_table.size(); index++)
    {
        if(stats_table[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(stat_table_name.operation);
}

std::string FabricStats::Nodes::Node::Statses::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath FabricStats::Nodes::Node::Statses::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in Cisco_IOS_XR_asr9k_fsi_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (stat_table_name.is_set || is_set(stat_table_name.operation)) leaf_name_data.push_back(stat_table_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FabricStats::Nodes::Node::Statses::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stats-table")
    {
        for(auto const & c : stats_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<FabricStats::Nodes::Node::Statses::Stats::StatsTable>();
        c->parent = this;
        stats_table.push_back(std::move(c));
        children[segment_path] = stats_table.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & FabricStats::Nodes::Node::Statses::Stats::get_children()
{
    for (auto const & c : stats_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void FabricStats::Nodes::Node::Statses::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "stat-table-name")
    {
        stat_table_name = value;
    }
}

FabricStats::Nodes::Node::Statses::Stats::StatsTable::StatsTable()
{
    yang_name = "stats-table"; yang_parent_name = "stats";
}

FabricStats::Nodes::Node::Statses::Stats::StatsTable::~StatsTable()
{
}

bool FabricStats::Nodes::Node::Statses::Stats::StatsTable::has_data() const
{
    for (std::size_t index=0; index<fsi_stat.size(); index++)
    {
        if(fsi_stat[index]->has_data())
            return true;
    }
    return false;
}

bool FabricStats::Nodes::Node::Statses::Stats::StatsTable::has_operation() const
{
    for (std::size_t index=0; index<fsi_stat.size(); index++)
    {
        if(fsi_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FabricStats::Nodes::Node::Statses::Stats::StatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-table";

    return path_buffer.str();

}

EntityPath FabricStats::Nodes::Node::Statses::Stats::StatsTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatsTable' in Cisco_IOS_XR_asr9k_fsi_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FabricStats::Nodes::Node::Statses::Stats::StatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fsi-stat")
    {
        for(auto const & c : fsi_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat>();
        c->parent = this;
        fsi_stat.push_back(std::move(c));
        children[segment_path] = fsi_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & FabricStats::Nodes::Node::Statses::Stats::StatsTable::get_children()
{
    for (auto const & c : fsi_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void FabricStats::Nodes::Node::Statses::Stats::StatsTable::set_value(const std::string & value_path, std::string value)
{
}

FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::FsiStat()
    :
    count{YType::uint64, "count"},
    counter_name{YType::str, "counter-name"}
{
    yang_name = "fsi-stat"; yang_parent_name = "stats-table";
}

FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::~FsiStat()
{
}

bool FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::has_data() const
{
    return count.is_set
	|| counter_name.is_set;
}

bool FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(counter_name.operation);
}

std::string FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsi-stat";

    return path_buffer.str();

}

EntityPath FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FsiStat' in Cisco_IOS_XR_asr9k_fsi_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.operation)) leaf_name_data.push_back(counter_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::get_children()
{
    return children;
}

void FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
    }
}


}
}

