
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_fsi_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_fsi_oper {

FabricStats::FabricStats()
    :
    nodes(std::make_shared<FabricStats::Nodes>())
{
    nodes->parent = this;

    yang_name = "fabric-stats"; yang_parent_name = "Cisco-IOS-XR-asr9k-fsi-oper"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string FabricStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fsi-oper:fabric-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabricStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FabricStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<FabricStats::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabricStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void FabricStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FabricStats::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> FabricStats::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FabricStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

FabricStats::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "fabric-stats"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string FabricStats::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fsi-oper:fabric-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string FabricStats::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabricStats::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FabricStats::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<FabricStats::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabricStats::Nodes::get_children() const
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

void FabricStats::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FabricStats::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FabricStats::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

FabricStats::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    statses(std::make_shared<FabricStats::Nodes::Node::Statses>())
{
    statses->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (statses !=  nullptr && statses->has_operation());
}

std::string FabricStats::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fsi-oper:fabric-stats/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string FabricStats::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabricStats::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FabricStats::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statses")
    {
        if(statses == nullptr)
        {
            statses = std::make_shared<FabricStats::Nodes::Node::Statses>();
        }
        return statses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabricStats::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statses != nullptr)
    {
        children["statses"] = statses;
    }

    return children;
}

void FabricStats::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void FabricStats::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool FabricStats::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statses" || name == "node-name")
        return true;
    return false;
}

FabricStats::Nodes::Node::Statses::Statses()
{

    yang_name = "statses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string FabricStats::Nodes::Node::Statses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabricStats::Nodes::Node::Statses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FabricStats::Nodes::Node::Statses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        auto c = std::make_shared<FabricStats::Nodes::Node::Statses::Stats>();
        c->parent = this;
        stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabricStats::Nodes::Node::Statses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : stats)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FabricStats::Nodes::Node::Statses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FabricStats::Nodes::Node::Statses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FabricStats::Nodes::Node::Statses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats")
        return true;
    return false;
}

FabricStats::Nodes::Node::Statses::Stats::Stats()
    :
    type{YType::str, "type"},
    last_clear_time{YType::uint64, "last-clear-time"},
    stat_table_name{YType::str, "stat-table-name"}
{

    yang_name = "stats"; yang_parent_name = "statses"; is_top_level_class = false; has_list_ancestor = true;
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
	|| last_clear_time.is_set
	|| stat_table_name.is_set;
}

bool FabricStats::Nodes::Node::Statses::Stats::has_operation() const
{
    for (std::size_t index=0; index<stats_table.size(); index++)
    {
        if(stats_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(stat_table_name.yfilter);
}

std::string FabricStats::Nodes::Node::Statses::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabricStats::Nodes::Node::Statses::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (stat_table_name.is_set || is_set(stat_table_name.yfilter)) leaf_name_data.push_back(stat_table_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FabricStats::Nodes::Node::Statses::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-table")
    {
        auto c = std::make_shared<FabricStats::Nodes::Node::Statses::Stats::StatsTable>();
        c->parent = this;
        stats_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabricStats::Nodes::Node::Statses::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : stats_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FabricStats::Nodes::Node::Statses::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stat-table-name")
    {
        stat_table_name = value;
        stat_table_name.value_namespace = name_space;
        stat_table_name.value_namespace_prefix = name_space_prefix;
    }
}

void FabricStats::Nodes::Node::Statses::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "stat-table-name")
    {
        stat_table_name.yfilter = yfilter;
    }
}

bool FabricStats::Nodes::Node::Statses::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-table" || name == "type" || name == "last-clear-time" || name == "stat-table-name")
        return true;
    return false;
}

FabricStats::Nodes::Node::Statses::Stats::StatsTable::StatsTable()
{

    yang_name = "stats-table"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string FabricStats::Nodes::Node::Statses::Stats::StatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabricStats::Nodes::Node::Statses::Stats::StatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FabricStats::Nodes::Node::Statses::Stats::StatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fsi-stat")
    {
        auto c = std::make_shared<FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat>();
        c->parent = this;
        fsi_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabricStats::Nodes::Node::Statses::Stats::StatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fsi_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FabricStats::Nodes::Node::Statses::Stats::StatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FabricStats::Nodes::Node::Statses::Stats::StatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FabricStats::Nodes::Node::Statses::Stats::StatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsi-stat")
        return true;
    return false;
}

FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::FsiStat()
    :
    count{YType::uint64, "count"},
    counter_name{YType::str, "counter-name"}
{

    yang_name = "fsi-stat"; yang_parent_name = "stats-table"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(counter_name.yfilter);
}

std::string FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsi-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.yfilter)) leaf_name_data.push_back(counter_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
        counter_name.value_namespace = name_space;
        counter_name.value_namespace_prefix = name_space_prefix;
    }
}

void FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "counter-name")
    {
        counter_name.yfilter = yfilter;
    }
}

bool FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "counter-name")
        return true;
    return false;
}


}
}

