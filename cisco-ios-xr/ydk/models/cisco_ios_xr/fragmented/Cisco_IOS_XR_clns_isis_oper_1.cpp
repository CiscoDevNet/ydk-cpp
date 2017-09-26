
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_1.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_4.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::PseudoNodeLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "pseudo-node-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::~PseudoNodeLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-node-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::RouteLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "route-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::~RouteLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::Fragment0LspStats()
    :
    node_counters(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters>())
{
    node_counters->parent = this;

    yang_name = "fragment0lsp-stats"; yang_parent_name = "lsp-table-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::~Fragment0LspStats()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::has_data() const
{
    for (std::size_t index=0; index<per_topology_counter.size(); index++)
    {
        if(per_topology_counter[index]->has_data())
            return true;
    }
    return (node_counters !=  nullptr && node_counters->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::has_operation() const
{
    for (std::size_t index=0; index<per_topology_counter.size(); index++)
    {
        if(per_topology_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (node_counters !=  nullptr && node_counters->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragment0lsp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-counters")
    {
        if(node_counters == nullptr)
        {
            node_counters = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters>();
        }
        return node_counters;
    }

    if(child_yang_name == "per-topology-counter")
    {
        for(auto const & c : per_topology_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter>();
        c->parent = this;
        per_topology_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_counters != nullptr)
    {
        children["node-counters"] = node_counters;
    }

    for (auto const & c : per_topology_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-counters" || name == "per-topology-counter")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::NodeCounters()
    :
    pseudo_node_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount>())
	,route_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount>())
{
    pseudo_node_lsp_count->parent = this;
    route_lsp_count->parent = this;

    yang_name = "node-counters"; yang_parent_name = "fragment0lsp-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::~NodeCounters()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::has_data() const
{
    return (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_data())
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::has_operation() const
{
    return is_set(yfilter)
	|| (pseudo_node_lsp_count !=  nullptr && pseudo_node_lsp_count->has_operation())
	|| (route_lsp_count !=  nullptr && route_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudo-node-lsp-count")
    {
        if(pseudo_node_lsp_count == nullptr)
        {
            pseudo_node_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount>();
        }
        return pseudo_node_lsp_count;
    }

    if(child_yang_name == "route-lsp-count")
    {
        if(route_lsp_count == nullptr)
        {
            route_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount>();
        }
        return route_lsp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudo_node_lsp_count != nullptr)
    {
        children["pseudo-node-lsp-count"] = pseudo_node_lsp_count;
    }

    if(route_lsp_count != nullptr)
    {
        children["route-lsp-count"] = route_lsp_count;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudo-node-lsp-count" || name == "route-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::PseudoNodeLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "pseudo-node-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::~PseudoNodeLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-node-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::RouteLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "route-lsp-count"; yang_parent_name = "node-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::~RouteLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::PerTopologyCounter()
    :
    attached_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount>())
	,id(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id>())
	,overloaded_lsp_count(std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount>())
{
    attached_lsp_count->parent = this;
    id->parent = this;
    overloaded_lsp_count->parent = this;

    yang_name = "per-topology-counter"; yang_parent_name = "fragment0lsp-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::~PerTopologyCounter()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::has_data() const
{
    return (attached_lsp_count !=  nullptr && attached_lsp_count->has_data())
	|| (id !=  nullptr && id->has_data())
	|| (overloaded_lsp_count !=  nullptr && overloaded_lsp_count->has_data());
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::has_operation() const
{
    return is_set(yfilter)
	|| (attached_lsp_count !=  nullptr && attached_lsp_count->has_operation())
	|| (id !=  nullptr && id->has_operation())
	|| (overloaded_lsp_count !=  nullptr && overloaded_lsp_count->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached-lsp-count")
    {
        if(attached_lsp_count == nullptr)
        {
            attached_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount>();
        }
        return attached_lsp_count;
    }

    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id>();
        }
        return id;
    }

    if(child_yang_name == "overloaded-lsp-count")
    {
        if(overloaded_lsp_count == nullptr)
        {
            overloaded_lsp_count = std::make_shared<Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount>();
        }
        return overloaded_lsp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached_lsp_count != nullptr)
    {
        children["attached-lsp-count"] = attached_lsp_count;
    }

    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(overloaded_lsp_count != nullptr)
    {
        children["overloaded-lsp-count"] = overloaded_lsp_count;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attached-lsp-count" || name == "id" || name == "overloaded-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::AttachedLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "attached-lsp-count"; yang_parent_name = "per-topology-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::~AttachedLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "id"; yang_parent_name = "per-topology-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::~Id()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::OverloadedLspCount()
    :
    active_lsp_count{YType::uint32, "active-lsp-count"},
    purged_lsp_count{YType::uint32, "purged-lsp-count"}
{

    yang_name = "overloaded-lsp-count"; yang_parent_name = "per-topology-counter"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::~OverloadedLspCount()
{
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::has_data() const
{
    return active_lsp_count.is_set
	|| purged_lsp_count.is_set;
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_count.yfilter)
	|| ydk::is_set(purged_lsp_count.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overloaded-lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_count.is_set || is_set(active_lsp_count.yfilter)) leaf_name_data.push_back(active_lsp_count.get_name_leafdata());
    if (purged_lsp_count.is_set || is_set(purged_lsp_count.yfilter)) leaf_name_data.push_back(purged_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count = value;
        active_lsp_count.value_namespace = name_space;
        active_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count = value;
        purged_lsp_count.value_namespace = name_space;
        purged_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-count")
    {
        active_lsp_count.yfilter = yfilter;
    }
    if(value_path == "purged-lsp-count")
    {
        purged_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-count" || name == "purged-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsps()
{

    yang_name = "lsps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Lsps::~Lsps()
{
}

bool Isis::Instances::Instance::Levels::Level::Lsps::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Levels::Level::Lsps::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Lsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Lsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Levels::Level::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Levels::Level::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::Lsp()
    :
    lsp_id{YType::str, "lsp-id"},
    lsp_body{YType::str, "lsp-body"}
    	,
    lsp_header_data(std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData>())
{
    lsp_header_data->parent = this;

    yang_name = "lsp"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::~Lsp()
{
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::has_data() const
{
    return lsp_id.is_set
	|| lsp_body.is_set
	|| (lsp_header_data !=  nullptr && lsp_header_data->has_data());
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_body.yfilter)
	|| (lsp_header_data !=  nullptr && lsp_header_data->has_operation());
}

std::string Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[lsp-id='" <<lsp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_body.is_set || is_set(lsp_body.yfilter)) leaf_name_data.push_back(lsp_body.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-header-data")
    {
        if(lsp_header_data == nullptr)
        {
            lsp_header_data = std::make_shared<Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData>();
        }
        return lsp_header_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_header_data != nullptr)
    {
        children["lsp-header-data"] = lsp_header_data;
    }

    return children;
}

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-body")
    {
        lsp_body = value;
        lsp_body.value_namespace = name_space;
        lsp_body.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-body")
    {
        lsp_body.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-header-data" || name == "lsp-id" || name == "lsp-body")
        return true;
    return false;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::LspHeaderData()
    :
    id_length{YType::uint8, "id-length"},
    local_lsp_flag{YType::boolean, "local-lsp-flag"},
    lsp_active_flag{YType::boolean, "lsp-active-flag"},
    lsp_attached_flag{YType::boolean, "lsp-attached-flag"},
    lsp_checksum{YType::uint16, "lsp-checksum"},
    lsp_holdtime{YType::uint16, "lsp-holdtime"},
    lsp_id{YType::str, "lsp-id"},
    lsp_length{YType::uint16, "lsp-length"},
    lsp_level{YType::enumeration, "lsp-level"},
    lsp_nonv1a_flag{YType::uint16, "lsp-nonv1a-flag"},
    lsp_overloaded_flag{YType::boolean, "lsp-overloaded-flag"},
    lsp_partition_repair_supported_flag{YType::boolean, "lsp-partition-repair-supported-flag"},
    lsp_sequence_number{YType::uint32, "lsp-sequence-number"},
    max_area_addresses{YType::uint8, "max-area-addresses"},
    version{YType::uint8, "version"},
    version2{YType::uint8, "version2"}
{

    yang_name = "lsp-header-data"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::~LspHeaderData()
{
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::has_data() const
{
    return id_length.is_set
	|| local_lsp_flag.is_set
	|| lsp_active_flag.is_set
	|| lsp_attached_flag.is_set
	|| lsp_checksum.is_set
	|| lsp_holdtime.is_set
	|| lsp_id.is_set
	|| lsp_length.is_set
	|| lsp_level.is_set
	|| lsp_nonv1a_flag.is_set
	|| lsp_overloaded_flag.is_set
	|| lsp_partition_repair_supported_flag.is_set
	|| lsp_sequence_number.is_set
	|| max_area_addresses.is_set
	|| version.is_set
	|| version2.is_set;
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id_length.yfilter)
	|| ydk::is_set(local_lsp_flag.yfilter)
	|| ydk::is_set(lsp_active_flag.yfilter)
	|| ydk::is_set(lsp_attached_flag.yfilter)
	|| ydk::is_set(lsp_checksum.yfilter)
	|| ydk::is_set(lsp_holdtime.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_length.yfilter)
	|| ydk::is_set(lsp_level.yfilter)
	|| ydk::is_set(lsp_nonv1a_flag.yfilter)
	|| ydk::is_set(lsp_overloaded_flag.yfilter)
	|| ydk::is_set(lsp_partition_repair_supported_flag.yfilter)
	|| ydk::is_set(lsp_sequence_number.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(version2.yfilter);
}

std::string Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-header-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id_length.is_set || is_set(id_length.yfilter)) leaf_name_data.push_back(id_length.get_name_leafdata());
    if (local_lsp_flag.is_set || is_set(local_lsp_flag.yfilter)) leaf_name_data.push_back(local_lsp_flag.get_name_leafdata());
    if (lsp_active_flag.is_set || is_set(lsp_active_flag.yfilter)) leaf_name_data.push_back(lsp_active_flag.get_name_leafdata());
    if (lsp_attached_flag.is_set || is_set(lsp_attached_flag.yfilter)) leaf_name_data.push_back(lsp_attached_flag.get_name_leafdata());
    if (lsp_checksum.is_set || is_set(lsp_checksum.yfilter)) leaf_name_data.push_back(lsp_checksum.get_name_leafdata());
    if (lsp_holdtime.is_set || is_set(lsp_holdtime.yfilter)) leaf_name_data.push_back(lsp_holdtime.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_length.is_set || is_set(lsp_length.yfilter)) leaf_name_data.push_back(lsp_length.get_name_leafdata());
    if (lsp_level.is_set || is_set(lsp_level.yfilter)) leaf_name_data.push_back(lsp_level.get_name_leafdata());
    if (lsp_nonv1a_flag.is_set || is_set(lsp_nonv1a_flag.yfilter)) leaf_name_data.push_back(lsp_nonv1a_flag.get_name_leafdata());
    if (lsp_overloaded_flag.is_set || is_set(lsp_overloaded_flag.yfilter)) leaf_name_data.push_back(lsp_overloaded_flag.get_name_leafdata());
    if (lsp_partition_repair_supported_flag.is_set || is_set(lsp_partition_repair_supported_flag.yfilter)) leaf_name_data.push_back(lsp_partition_repair_supported_flag.get_name_leafdata());
    if (lsp_sequence_number.is_set || is_set(lsp_sequence_number.yfilter)) leaf_name_data.push_back(lsp_sequence_number.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (version2.is_set || is_set(version2.yfilter)) leaf_name_data.push_back(version2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id-length")
    {
        id_length = value;
        id_length.value_namespace = name_space;
        id_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag = value;
        local_lsp_flag.value_namespace = name_space;
        local_lsp_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag = value;
        lsp_active_flag.value_namespace = name_space;
        lsp_active_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag = value;
        lsp_attached_flag.value_namespace = name_space;
        lsp_attached_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum = value;
        lsp_checksum.value_namespace = name_space;
        lsp_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime = value;
        lsp_holdtime.value_namespace = name_space;
        lsp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-length")
    {
        lsp_length = value;
        lsp_length.value_namespace = name_space;
        lsp_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-level")
    {
        lsp_level = value;
        lsp_level.value_namespace = name_space;
        lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag = value;
        lsp_nonv1a_flag.value_namespace = name_space;
        lsp_nonv1a_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag = value;
        lsp_overloaded_flag.value_namespace = name_space;
        lsp_overloaded_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag = value;
        lsp_partition_repair_supported_flag.value_namespace = name_space;
        lsp_partition_repair_supported_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number = value;
        lsp_sequence_number.value_namespace = name_space;
        lsp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version2")
    {
        version2 = value;
        version2.value_namespace = name_space;
        version2.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id-length")
    {
        id_length.yfilter = yfilter;
    }
    if(value_path == "local-lsp-flag")
    {
        local_lsp_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-active-flag")
    {
        lsp_active_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-attached-flag")
    {
        lsp_attached_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-checksum")
    {
        lsp_checksum.yfilter = yfilter;
    }
    if(value_path == "lsp-holdtime")
    {
        lsp_holdtime.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-length")
    {
        lsp_length.yfilter = yfilter;
    }
    if(value_path == "lsp-level")
    {
        lsp_level.yfilter = yfilter;
    }
    if(value_path == "lsp-nonv1a-flag")
    {
        lsp_nonv1a_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-overloaded-flag")
    {
        lsp_overloaded_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-partition-repair-supported-flag")
    {
        lsp_partition_repair_supported_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-sequence-number")
    {
        lsp_sequence_number.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "version2")
    {
        version2.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-length" || name == "local-lsp-flag" || name == "lsp-active-flag" || name == "lsp-attached-flag" || name == "lsp-checksum" || name == "lsp-holdtime" || name == "lsp-id" || name == "lsp-length" || name == "lsp-level" || name == "lsp-nonv1a-flag" || name == "lsp-overloaded-flag" || name == "lsp-partition-repair-supported-flag" || name == "lsp-sequence-number" || name == "max-area-addresses" || name == "version" || name == "version2")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroups()
    :
    mesh_group_configured_interface_list(std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>())
{
    mesh_group_configured_interface_list->parent = this;

    yang_name = "mesh-groups"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::MeshGroups::~MeshGroups()
{
}

bool Isis::Instances::Instance::MeshGroups::has_data() const
{
    return (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_data());
}

bool Isis::Instances::Instance::MeshGroups::has_operation() const
{
    return is_set(yfilter)
	|| (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_operation());
}

std::string Isis::Instances::Instance::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-group-configured-interface-list")
    {
        if(mesh_group_configured_interface_list == nullptr)
        {
            mesh_group_configured_interface_list = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>();
        }
        return mesh_group_configured_interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mesh_group_configured_interface_list != nullptr)
    {
        children["mesh-group-configured-interface-list"] = mesh_group_configured_interface_list;
    }

    return children;
}

void Isis::Instances::Instance::MeshGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MeshGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MeshGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-configured-interface-list")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::MeshGroupConfiguredInterfaceList()
{

    yang_name = "mesh-group-configured-interface-list"; yang_parent_name = "mesh-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::~MeshGroupConfiguredInterfaceList()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_data() const
{
    for (std::size_t index=0; index<isis_sh_mesh_entry.size(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_mesh_entry.size(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-configured-interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-mesh-entry")
    {
        for(auto const & c : isis_sh_mesh_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry>();
        c->parent = this;
        isis_sh_mesh_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_sh_mesh_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-mesh-entry")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::IsisShMeshEntry()
    :
    mesh_group_interface{YType::str, "mesh-group-interface"},
    mesh_group_number{YType::uint32, "mesh-group-number"}
{

    yang_name = "isis-sh-mesh-entry"; yang_parent_name = "mesh-group-configured-interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::~IsisShMeshEntry()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_data() const
{
    return mesh_group_interface.is_set
	|| mesh_group_number.is_set;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_interface.yfilter)
	|| ydk::is_set(mesh_group_number.yfilter);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-mesh-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_interface.is_set || is_set(mesh_group_interface.yfilter)) leaf_name_data.push_back(mesh_group_interface.get_name_leafdata());
    if (mesh_group_number.is_set || is_set(mesh_group_number.yfilter)) leaf_name_data.push_back(mesh_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-interface")
    {
        mesh_group_interface = value;
        mesh_group_interface.value_namespace = name_space;
        mesh_group_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-number")
    {
        mesh_group_number = value;
        mesh_group_number.value_namespace = name_space;
        mesh_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-interface")
    {
        mesh_group_interface.yfilter = yfilter;
    }
    if(value_path == "mesh-group-number")
    {
        mesh_group_number.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-interface" || name == "mesh-group-number")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummaries()
{

    yang_name = "neighbor-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NeighborSummaries::~NeighborSummaries()
{
}

bool Isis::Instances::Instance::NeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        for(auto const & c : neighbor_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::NeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"}
    	,
    level12_neigbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>())
	,level1_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>())
	,level2_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>())
{
    level12_neigbors->parent = this;
    level1_neighbors->parent = this;
    level2_neighbors->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_data() const
{
    return interface_name.is_set
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_data())
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_data())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_data());
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_operation())
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_operation())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_operation());
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level12-neigbors")
    {
        if(level12_neigbors == nullptr)
        {
            level12_neigbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>();
        }
        return level12_neigbors;
    }

    if(child_yang_name == "level1-neighbors")
    {
        if(level1_neighbors == nullptr)
        {
            level1_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>();
        }
        return level1_neighbors;
    }

    if(child_yang_name == "level2-neighbors")
    {
        if(level2_neighbors == nullptr)
        {
            level2_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>();
        }
        return level2_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level12_neigbors != nullptr)
    {
        children["level12-neigbors"] = level12_neigbors;
    }

    if(level1_neighbors != nullptr)
    {
        children["level1-neighbors"] = level1_neighbors;
    }

    if(level2_neighbors != nullptr)
    {
        children["level2-neighbors"] = level2_neighbors;
    }

    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level12-neigbors" || name == "level1-neighbors" || name == "level2-neighbors" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::Level12Neigbors()
    :
    neighbor_down_count{YType::uint32, "neighbor-down-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_up_count{YType::uint32, "neighbor-up-count"}
{

    yang_name = "level12-neigbors"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::~Level12Neigbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_data() const
{
    return neighbor_down_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_up_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level12-neigbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-down-count" || name == "neighbor-init-count" || name == "neighbor-up-count")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::Level1Neighbors()
    :
    neighbor_down_count{YType::uint32, "neighbor-down-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_up_count{YType::uint32, "neighbor-up-count"}
{

    yang_name = "level1-neighbors"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::~Level1Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_data() const
{
    return neighbor_down_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_up_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-down-count" || name == "neighbor-init-count" || name == "neighbor-up-count")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::Level2Neighbors()
    :
    neighbor_down_count{YType::uint32, "neighbor-down-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_up_count{YType::uint32, "neighbor-up-count"}
{

    yang_name = "level2-neighbors"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::~Level2Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_data() const
{
    return neighbor_down_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_up_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-down-count" || name == "neighbor-init-count" || name == "neighbor-up-count")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::~Neighbors()
{
}

bool Isis::Instances::Instance::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    local_interface{YType::str, "local-interface"},
    neighbor_circuit_type{YType::enumeration, "neighbor-circuit-type"},
    neighbor_holdtime{YType::uint32, "neighbor-holdtime"},
    neighbor_ietf_nsf_capable_flag{YType::uint32, "neighbor-ietf-nsf-capable-flag"},
    neighbor_media_type{YType::enumeration, "neighbor-media-type"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    neighbor_uptime{YType::uint32, "neighbor-uptime"},
    neighbor_uptime_valid_flag{YType::boolean, "neighbor-uptime-valid-flag"},
    nsr_standby{YType::boolean, "nsr-standby"},
    system_id{YType::str, "system-id"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::~Neighbor()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor_active_area_address.size(); index++)
    {
        if(neighbor_active_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor_per_address_family_data.size(); index++)
    {
        if(neighbor_per_address_family_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topologies_supported.size(); index++)
    {
        if(topologies_supported[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| local_interface.is_set
	|| neighbor_circuit_type.is_set
	|| neighbor_holdtime.is_set
	|| neighbor_ietf_nsf_capable_flag.is_set
	|| neighbor_media_type.is_set
	|| neighbor_snpa.is_set
	|| neighbor_state.is_set
	|| neighbor_system_id.is_set
	|| neighbor_uptime.is_set
	|| neighbor_uptime_valid_flag.is_set
	|| nsr_standby.is_set
	|| system_id.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_active_area_address.size(); index++)
    {
        if(neighbor_active_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor_per_address_family_data.size(); index++)
    {
        if(neighbor_per_address_family_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topologies_supported.size(); index++)
    {
        if(topologies_supported[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_interface.yfilter)
	|| ydk::is_set(neighbor_circuit_type.yfilter)
	|| ydk::is_set(neighbor_holdtime.yfilter)
	|| ydk::is_set(neighbor_ietf_nsf_capable_flag.yfilter)
	|| ydk::is_set(neighbor_media_type.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(neighbor_uptime.yfilter)
	|| ydk::is_set(neighbor_uptime_valid_flag.yfilter)
	|| ydk::is_set(nsr_standby.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_interface.is_set || is_set(local_interface.yfilter)) leaf_name_data.push_back(local_interface.get_name_leafdata());
    if (neighbor_circuit_type.is_set || is_set(neighbor_circuit_type.yfilter)) leaf_name_data.push_back(neighbor_circuit_type.get_name_leafdata());
    if (neighbor_holdtime.is_set || is_set(neighbor_holdtime.yfilter)) leaf_name_data.push_back(neighbor_holdtime.get_name_leafdata());
    if (neighbor_ietf_nsf_capable_flag.is_set || is_set(neighbor_ietf_nsf_capable_flag.yfilter)) leaf_name_data.push_back(neighbor_ietf_nsf_capable_flag.get_name_leafdata());
    if (neighbor_media_type.is_set || is_set(neighbor_media_type.yfilter)) leaf_name_data.push_back(neighbor_media_type.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (neighbor_uptime.is_set || is_set(neighbor_uptime.yfilter)) leaf_name_data.push_back(neighbor_uptime.get_name_leafdata());
    if (neighbor_uptime_valid_flag.is_set || is_set(neighbor_uptime_valid_flag.yfilter)) leaf_name_data.push_back(neighbor_uptime_valid_flag.get_name_leafdata());
    if (nsr_standby.is_set || is_set(nsr_standby.yfilter)) leaf_name_data.push_back(nsr_standby.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-active-area-address")
    {
        for(auto const & c : neighbor_active_area_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress>();
        c->parent = this;
        neighbor_active_area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor-per-address-family-data")
    {
        for(auto const & c : neighbor_per_address_family_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData>();
        c->parent = this;
        neighbor_per_address_family_data.push_back(c);
        return c;
    }

    if(child_yang_name == "topologies-supported")
    {
        for(auto const & c : topologies_supported)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported>();
        c->parent = this;
        topologies_supported.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_active_area_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor_per_address_family_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : topologies_supported)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-interface")
    {
        local_interface = value;
        local_interface.value_namespace = name_space;
        local_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-circuit-type")
    {
        neighbor_circuit_type = value;
        neighbor_circuit_type.value_namespace = name_space;
        neighbor_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-holdtime")
    {
        neighbor_holdtime = value;
        neighbor_holdtime.value_namespace = name_space;
        neighbor_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ietf-nsf-capable-flag")
    {
        neighbor_ietf_nsf_capable_flag = value;
        neighbor_ietf_nsf_capable_flag.value_namespace = name_space;
        neighbor_ietf_nsf_capable_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-media-type")
    {
        neighbor_media_type = value;
        neighbor_media_type.value_namespace = name_space;
        neighbor_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-uptime")
    {
        neighbor_uptime = value;
        neighbor_uptime.value_namespace = name_space;
        neighbor_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-uptime-valid-flag")
    {
        neighbor_uptime_valid_flag = value;
        neighbor_uptime_valid_flag.value_namespace = name_space;
        neighbor_uptime_valid_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby = value;
        nsr_standby.value_namespace = name_space;
        nsr_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-interface")
    {
        local_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-circuit-type")
    {
        neighbor_circuit_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-holdtime")
    {
        neighbor_holdtime.yfilter = yfilter;
    }
    if(value_path == "neighbor-ietf-nsf-capable-flag")
    {
        neighbor_ietf_nsf_capable_flag.yfilter = yfilter;
    }
    if(value_path == "neighbor-media-type")
    {
        neighbor_media_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-uptime")
    {
        neighbor_uptime.yfilter = yfilter;
    }
    if(value_path == "neighbor-uptime-valid-flag")
    {
        neighbor_uptime_valid_flag.yfilter = yfilter;
    }
    if(value_path == "nsr-standby")
    {
        nsr_standby.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-active-area-address" || name == "neighbor-per-address-family-data" || name == "topologies-supported" || name == "interface-name" || name == "local-interface" || name == "neighbor-circuit-type" || name == "neighbor-holdtime" || name == "neighbor-ietf-nsf-capable-flag" || name == "neighbor-media-type" || name == "neighbor-snpa" || name == "neighbor-state" || name == "neighbor-system-id" || name == "neighbor-uptime" || name == "neighbor-uptime-valid-flag" || name == "nsr-standby" || name == "system-id")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::NeighborActiveAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-active-area-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::~NeighborActiveAreaAddress()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-active-area-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborActiveAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::NeighborPerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "neighbor-per-address-family-data"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::~NeighborPerAddressFamilyData()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::has_data() const
{
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-per-address-family-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::Ipv4()
    :
    next_hop{YType::str, "next-hop"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    non_frr_adjacency_sid->parent = this;

    yang_name = "ipv4"; yang_parent_name = "neighbor-per-address-family-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.size(); index++)
    {
        if(underlying_adjacency_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_data())
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.size(); index++)
    {
        if(underlying_adjacency_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        for(auto const & c : underlying_adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid>();
        c->parent = this;
        underlying_adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-interface")
    {
        for(auto const & c : underlying_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface>();
        c->parent = this;
        underlying_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid != nullptr)
    {
        children["adjacency-sid"] = adjacency_sid;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    for (auto const & c : underlying_adjacency_sid)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : underlying_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "interface-address" || name == "non-frr-adjacency-sid" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::~AdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid_backup != nullptr)
    {
        children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::InterfaceAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::~InterfaceAddress()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::~NonFrrAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid_backup != nullptr)
    {
        children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::UnderlyingAdjacencySid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "underlying-adjacency-sid"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::~UnderlyingAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::UnderlyingInterface()
    :
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::has_data() const
{
    return interface_handle.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::Ipv6()
    :
    next_hop{YType::str, "next-hop"}
    	,
    adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid>())
	,non_frr_adjacency_sid(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>())
{
    adjacency_sid->parent = this;
    non_frr_adjacency_sid->parent = this;

    yang_name = "ipv6"; yang_parent_name = "neighbor-per-address-family-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.size(); index++)
    {
        if(underlying_adjacency_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_data())
            return true;
    }
    return next_hop.is_set
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_data())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_adjacency_sid.size(); index++)
    {
        if(underlying_adjacency_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<underlying_interface.size(); index++)
    {
        if(underlying_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| (adjacency_sid !=  nullptr && adjacency_sid->has_operation())
	|| (non_frr_adjacency_sid !=  nullptr && non_frr_adjacency_sid->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        if(adjacency_sid == nullptr)
        {
            adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid>();
        }
        return adjacency_sid;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    if(child_yang_name == "non-frr-adjacency-sid")
    {
        if(non_frr_adjacency_sid == nullptr)
        {
            non_frr_adjacency_sid = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid>();
        }
        return non_frr_adjacency_sid;
    }

    if(child_yang_name == "underlying-adjacency-sid")
    {
        for(auto const & c : underlying_adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid>();
        c->parent = this;
        underlying_adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "underlying-interface")
    {
        for(auto const & c : underlying_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface>();
        c->parent = this;
        underlying_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid != nullptr)
    {
        children["adjacency-sid"] = adjacency_sid;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(non_frr_adjacency_sid != nullptr)
    {
        children["non-frr-adjacency-sid"] = non_frr_adjacency_sid;
    }

    for (auto const & c : underlying_adjacency_sid)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : underlying_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "interface-address" || name == "non-frr-adjacency-sid" || name == "underlying-adjacency-sid" || name == "underlying-interface" || name == "next-hop")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::~AdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid_backup != nullptr)
    {
        children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::InterfaceAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface-address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::~InterfaceAddress()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::NonFrrAdjacencySid()
    :
    adjacency_sid_value{YType::uint32, "adjacency-sid-value"}
    	,
    adjacency_sid_backup(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>())
	,adjacency_sid_backup_te(std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>())
{
    adjacency_sid_backup->parent = this;
    adjacency_sid_backup_te->parent = this;

    yang_name = "non-frr-adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::~NonFrrAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_data() const
{
    return adjacency_sid_value.is_set
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_data())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_data());
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_value.yfilter)
	|| (adjacency_sid_backup !=  nullptr && adjacency_sid_backup->has_operation())
	|| (adjacency_sid_backup_te !=  nullptr && adjacency_sid_backup_te->has_operation());
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-frr-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_value.is_set || is_set(adjacency_sid_value.yfilter)) leaf_name_data.push_back(adjacency_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid-backup")
    {
        if(adjacency_sid_backup == nullptr)
        {
            adjacency_sid_backup = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup>();
        }
        return adjacency_sid_backup;
    }

    if(child_yang_name == "adjacency-sid-backup-te")
    {
        if(adjacency_sid_backup_te == nullptr)
        {
            adjacency_sid_backup_te = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe>();
        }
        return adjacency_sid_backup_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_sid_backup != nullptr)
    {
        children["adjacency-sid-backup"] = adjacency_sid_backup;
    }

    if(adjacency_sid_backup_te != nullptr)
    {
        children["adjacency-sid-backup-te"] = adjacency_sid_backup_te;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value = value;
        adjacency_sid_value.value_namespace = name_space;
        adjacency_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-value")
    {
        adjacency_sid_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid-backup" || name == "adjacency-sid-backup-te" || name == "adjacency-sid-value")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::AdjacencySidBackup()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::~AdjacencySidBackup()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::AdjacencySidBackupTe()
    :
    backup_interface{YType::str, "backup-interface"},
    backup_label_stack_size{YType::uint8, "backup-label-stack-size"},
    backup_nexthop{YType::str, "backup-nexthop"},
    backup_node_address{YType::str, "backup-node-address"}
{

    yang_name = "adjacency-sid-backup-te"; yang_parent_name = "non-frr-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::~AdjacencySidBackupTe()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_data() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_data())
            return true;
    }
    return backup_interface.is_set
	|| backup_label_stack_size.is_set
	|| backup_nexthop.is_set
	|| backup_node_address.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_operation() const
{
    for (std::size_t index=0; index<backup_label_stack.size(); index++)
    {
        if(backup_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(backup_label_stack_size.yfilter)
	|| ydk::is_set(backup_nexthop.yfilter)
	|| ydk::is_set(backup_node_address.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid-backup-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (backup_label_stack_size.is_set || is_set(backup_label_stack_size.yfilter)) leaf_name_data.push_back(backup_label_stack_size.get_name_leafdata());
    if (backup_nexthop.is_set || is_set(backup_nexthop.yfilter)) leaf_name_data.push_back(backup_nexthop.get_name_leafdata());
    if (backup_node_address.is_set || is_set(backup_node_address.yfilter)) leaf_name_data.push_back(backup_node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-label-stack")
    {
        for(auto const & c : backup_label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack>();
        c->parent = this;
        backup_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size = value;
        backup_label_stack_size.value_namespace = name_space;
        backup_label_stack_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop = value;
        backup_nexthop.value_namespace = name_space;
        backup_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address = value;
        backup_node_address.value_namespace = name_space;
        backup_node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "backup-label-stack-size")
    {
        backup_label_stack_size.yfilter = yfilter;
    }
    if(value_path == "backup-nexthop")
    {
        backup_nexthop.yfilter = yfilter;
    }
    if(value_path == "backup-node-address")
    {
        backup_node_address.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-label-stack" || name == "backup-interface" || name == "backup-label-stack-size" || name == "backup-nexthop" || name == "backup-node-address")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::BackupLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "backup-label-stack"; yang_parent_name = "adjacency-sid-backup-te"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::~BackupLabelStack()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackupTe::BackupLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::UnderlyingAdjacencySid()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "underlying-adjacency-sid"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::~UnderlyingAdjacencySid()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::UnderlyingInterface()
    :
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::has_data() const
{
    return interface_handle.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::TopologiesSupported()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "topologies-supported"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::~TopologiesSupported()
{
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies-supported";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::NsrStatistics()
    :
    isis_vm_state{YType::uint16, "isis-vm-state"}
    	,
    isis_nsr_stats_data(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>())
{
    isis_nsr_stats_data->parent = this;

    yang_name = "nsr-statistics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatistics::~NsrStatistics()
{
}

bool Isis::Instances::Instance::NsrStatistics::has_data() const
{
    return isis_vm_state.is_set
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_vm_state.yfilter)
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_vm_state.is_set || is_set(isis_vm_state.yfilter)) leaf_name_data.push_back(isis_vm_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-nsr-stats-data")
    {
        if(isis_nsr_stats_data == nullptr)
        {
            isis_nsr_stats_data = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>();
        }
        return isis_nsr_stats_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis_nsr_stats_data != nullptr)
    {
        children["isis-nsr-stats-data"] = isis_nsr_stats_data;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state = value;
        isis_vm_state.value_namespace = name_space;
        isis_vm_state.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-nsr-stats-data" || name == "isis-vm-state")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::IsisNsrStatsData()
    :
    self(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>())
{
    self->parent = this;

    yang_name = "isis-nsr-stats-data"; yang_parent_name = "nsr-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::~IsisNsrStatsData()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return (self !=  nullptr && self->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (self !=  nullptr && self->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-stats-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    if(child_yang_name == "self")
    {
        if(self == nullptr)
        {
            self = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>();
        }
        return self;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    if(self != nullptr)
    {
        children["self"] = self;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "self")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::Peer()
    :
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    seqnum{YType::uint32, "seqnum"}
{

    yang_name = "peer"; yang_parent_name = "isis-nsr-stats-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::~Peer()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_data() const
{
    return no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l1_lsp.is_set
	|| no_of_l2_adj.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_lan_interface.is_set
	|| no_of_live_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_te_links.is_set
	|| no_of_te_tunnels.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_of_ipv4_routes.yfilter)
	|| ydk::is_set(no_of_ipv6_routes.yfilter)
	|| ydk::is_set(no_of_l1_adj.yfilter)
	|| ydk::is_set(no_of_l1_lsp.yfilter)
	|| ydk::is_set(no_of_l2_adj.yfilter)
	|| ydk::is_set(no_of_l2_lsp.yfilter)
	|| ydk::is_set(no_of_lan_interface.yfilter)
	|| ydk::is_set(no_of_live_interface.yfilter)
	|| ydk::is_set(no_of_loopback_interface.yfilter)
	|| ydk::is_set(no_of_ptp_interface.yfilter)
	|| ydk::is_set(no_of_te_links.yfilter)
	|| ydk::is_set(no_of_te_tunnels.yfilter)
	|| ydk::is_set(seqnum.yfilter);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.yfilter)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.yfilter)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.yfilter)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.yfilter)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.yfilter)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.yfilter)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.yfilter)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.yfilter)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.yfilter)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.yfilter)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.yfilter)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.yfilter)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
        no_of_ipv4_routes.value_namespace = name_space;
        no_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
        no_of_ipv6_routes.value_namespace = name_space;
        no_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
        no_of_l1_adj.value_namespace = name_space;
        no_of_l1_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
        no_of_l1_lsp.value_namespace = name_space;
        no_of_l1_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
        no_of_l2_adj.value_namespace = name_space;
        no_of_l2_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
        no_of_l2_lsp.value_namespace = name_space;
        no_of_l2_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
        no_of_lan_interface.value_namespace = name_space;
        no_of_lan_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
        no_of_live_interface.value_namespace = name_space;
        no_of_live_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
        no_of_loopback_interface.value_namespace = name_space;
        no_of_loopback_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
        no_of_ptp_interface.value_namespace = name_space;
        no_of_ptp_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
        no_of_te_links.value_namespace = name_space;
        no_of_te_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
        no_of_te_tunnels.value_namespace = name_space;
        no_of_te_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links.yfilter = yfilter;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels.yfilter = yfilter;
    }
    if(value_path == "seqnum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-of-ipv4-routes" || name == "no-of-ipv6-routes" || name == "no-of-l1-adj" || name == "no-of-l1-lsp" || name == "no-of-l2-adj" || name == "no-of-l2-lsp" || name == "no-of-lan-interface" || name == "no-of-live-interface" || name == "no-of-loopback-interface" || name == "no-of-ptp-interface" || name == "no-of-te-links" || name == "no-of-te-tunnels" || name == "seqnum")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::Self()
    :
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    seqnum{YType::uint32, "seqnum"}
{

    yang_name = "self"; yang_parent_name = "isis-nsr-stats-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::~Self()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_data() const
{
    return no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l1_lsp.is_set
	|| no_of_l2_adj.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_lan_interface.is_set
	|| no_of_live_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_te_links.is_set
	|| no_of_te_tunnels.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_of_ipv4_routes.yfilter)
	|| ydk::is_set(no_of_ipv6_routes.yfilter)
	|| ydk::is_set(no_of_l1_adj.yfilter)
	|| ydk::is_set(no_of_l1_lsp.yfilter)
	|| ydk::is_set(no_of_l2_adj.yfilter)
	|| ydk::is_set(no_of_l2_lsp.yfilter)
	|| ydk::is_set(no_of_lan_interface.yfilter)
	|| ydk::is_set(no_of_live_interface.yfilter)
	|| ydk::is_set(no_of_loopback_interface.yfilter)
	|| ydk::is_set(no_of_ptp_interface.yfilter)
	|| ydk::is_set(no_of_te_links.yfilter)
	|| ydk::is_set(no_of_te_tunnels.yfilter)
	|| ydk::is_set(seqnum.yfilter);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.yfilter)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.yfilter)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.yfilter)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.yfilter)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.yfilter)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.yfilter)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.yfilter)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.yfilter)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.yfilter)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.yfilter)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.yfilter)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.yfilter)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
        no_of_ipv4_routes.value_namespace = name_space;
        no_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
        no_of_ipv6_routes.value_namespace = name_space;
        no_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
        no_of_l1_adj.value_namespace = name_space;
        no_of_l1_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
        no_of_l1_lsp.value_namespace = name_space;
        no_of_l1_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
        no_of_l2_adj.value_namespace = name_space;
        no_of_l2_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
        no_of_l2_lsp.value_namespace = name_space;
        no_of_l2_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
        no_of_lan_interface.value_namespace = name_space;
        no_of_lan_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
        no_of_live_interface.value_namespace = name_space;
        no_of_live_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
        no_of_loopback_interface.value_namespace = name_space;
        no_of_loopback_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
        no_of_ptp_interface.value_namespace = name_space;
        no_of_ptp_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
        no_of_te_links.value_namespace = name_space;
        no_of_te_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
        no_of_te_tunnels.value_namespace = name_space;
        no_of_te_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links.yfilter = yfilter;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels.yfilter = yfilter;
    }
    if(value_path == "seqnum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-of-ipv4-routes" || name == "no-of-ipv6-routes" || name == "no-of-l1-adj" || name == "no-of-l1-lsp" || name == "no-of-l2-adj" || name == "no-of-l2-lsp" || name == "no-of-lan-interface" || name == "no-of-live-interface" || name == "no-of-loopback-interface" || name == "no-of-ptp-interface" || name == "no-of-te-links" || name == "no-of-te-tunnels" || name == "seqnum")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::NsrStatus()
    :
    isis_vm_state{YType::uint16, "isis-vm-state"}
    	,
    isis_nsr_infra(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra>())
	,isis_nsr_peer(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer>())
{
    isis_nsr_infra->parent = this;
    isis_nsr_peer->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::~NsrStatus()
{
}

bool Isis::Instances::Instance::NsrStatus::has_data() const
{
    return isis_vm_state.is_set
	|| (isis_nsr_infra !=  nullptr && isis_nsr_infra->has_data())
	|| (isis_nsr_peer !=  nullptr && isis_nsr_peer->has_data());
}

bool Isis::Instances::Instance::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_vm_state.yfilter)
	|| (isis_nsr_infra !=  nullptr && isis_nsr_infra->has_operation())
	|| (isis_nsr_peer !=  nullptr && isis_nsr_peer->has_operation());
}

std::string Isis::Instances::Instance::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_vm_state.is_set || is_set(isis_vm_state.yfilter)) leaf_name_data.push_back(isis_vm_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-nsr-infra")
    {
        if(isis_nsr_infra == nullptr)
        {
            isis_nsr_infra = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra>();
        }
        return isis_nsr_infra;
    }

    if(child_yang_name == "isis-nsr-peer")
    {
        if(isis_nsr_peer == nullptr)
        {
            isis_nsr_peer = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer>();
        }
        return isis_nsr_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis_nsr_infra != nullptr)
    {
        children["isis-nsr-infra"] = isis_nsr_infra;
    }

    if(isis_nsr_peer != nullptr)
    {
        children["isis-nsr-peer"] = isis_nsr_peer;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state = value;
        isis_vm_state.value_namespace = name_space;
        isis_vm_state.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-nsr-infra" || name == "isis-nsr-peer" || name == "isis-vm-state")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::IsisNsrInfra()
    :
    ds(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds>())
	,gen(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen>())
	,pm(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm>())
	,te(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te>())
{
    ds->parent = this;
    gen->parent = this;
    pm->parent = this;
    te->parent = this;

    yang_name = "isis-nsr-infra"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::~IsisNsrInfra()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::has_data() const
{
    for (std::size_t index=0; index<ncd.size(); index++)
    {
        if(ncd[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nii_idb.size(); index++)
    {
        if(nii_idb[index]->has_data())
            return true;
    }
    return (ds !=  nullptr && ds->has_data())
	|| (gen !=  nullptr && gen->has_data())
	|| (pm !=  nullptr && pm->has_data())
	|| (te !=  nullptr && te->has_data());
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::has_operation() const
{
    for (std::size_t index=0; index<ncd.size(); index++)
    {
        if(ncd[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nii_idb.size(); index++)
    {
        if(nii_idb[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ds !=  nullptr && ds->has_operation())
	|| (gen !=  nullptr && gen->has_operation())
	|| (pm !=  nullptr && pm->has_operation())
	|| (te !=  nullptr && te->has_operation());
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-infra";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ds")
    {
        if(ds == nullptr)
        {
            ds = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds>();
        }
        return ds;
    }

    if(child_yang_name == "gen")
    {
        if(gen == nullptr)
        {
            gen = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen>();
        }
        return gen;
    }

    if(child_yang_name == "ncd")
    {
        for(auto const & c : ncd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd>();
        c->parent = this;
        ncd.push_back(c);
        return c;
    }

    if(child_yang_name == "nii-idb")
    {
        for(auto const & c : nii_idb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb>();
        c->parent = this;
        nii_idb.push_back(c);
        return c;
    }

    if(child_yang_name == "pm")
    {
        if(pm == nullptr)
        {
            pm = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm>();
        }
        return pm;
    }

    if(child_yang_name == "te")
    {
        if(te == nullptr)
        {
            te = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te>();
        }
        return te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ds != nullptr)
    {
        children["ds"] = ds;
    }

    if(gen != nullptr)
    {
        children["gen"] = gen;
    }

    for (auto const & c : ncd)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nii_idb)
    {
        children[c->get_segment_path()] = c;
    }

    if(pm != nullptr)
    {
        children["pm"] = pm;
    }

    if(te != nullptr)
    {
        children["te"] = te;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ds" || name == "gen" || name == "ncd" || name == "nii-idb" || name == "pm" || name == "te")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::Ds()
    :
    conn{YType::uint8, "conn"},
    conn_cb{YType::uint8, "conn-cb"},
    conn_status{YType::boolean, "conn-status"},
    del_cb{YType::uint8, "del-cb"},
    disconn_cb{YType::uint8, "disconn-cb"},
    notify_cb{YType::uint8, "notify-cb"},
    notify_peer_xr{YType::str, "notify-peer-xr"},
    pub{YType::uint8, "pub"},
    pub_cb{YType::uint8, "pub-cb"},
    reg{YType::uint8, "reg"},
    reg_cb{YType::uint8, "reg-cb"},
    remove_srv{YType::uint8, "remove-srv"},
    unreg{YType::uint8, "unreg"},
    unreg_cb{YType::uint8, "unreg-cb"}
    	,
    conn_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs>())
	,conn_status_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs>())
	,conn_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs>())
	,del_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs>())
	,disconn_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs>())
	,notify_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs>())
	,pub_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs>())
	,pub_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs>())
	,reg_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs>())
	,reg_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs>())
	,remove_srv_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs>())
	,unreg_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs>())
	,unreg_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs>())
{
    conn_cb_ts->parent = this;
    conn_status_ts->parent = this;
    conn_ts->parent = this;
    del_cb_ts->parent = this;
    disconn_cb_ts->parent = this;
    notify_cb_ts->parent = this;
    pub_cb_ts->parent = this;
    pub_ts->parent = this;
    reg_cb_ts->parent = this;
    reg_ts->parent = this;
    remove_srv_ts->parent = this;
    unreg_cb_ts->parent = this;
    unreg_ts->parent = this;

    yang_name = "ds"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::~Ds()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::has_data() const
{
    for (std::size_t index=0; index<notify_peer.size(); index++)
    {
        if(notify_peer[index]->has_data())
            return true;
    }
    return conn.is_set
	|| conn_cb.is_set
	|| conn_status.is_set
	|| del_cb.is_set
	|| disconn_cb.is_set
	|| notify_cb.is_set
	|| notify_peer_xr.is_set
	|| pub.is_set
	|| pub_cb.is_set
	|| reg.is_set
	|| reg_cb.is_set
	|| remove_srv.is_set
	|| unreg.is_set
	|| unreg_cb.is_set
	|| (conn_cb_ts !=  nullptr && conn_cb_ts->has_data())
	|| (conn_status_ts !=  nullptr && conn_status_ts->has_data())
	|| (conn_ts !=  nullptr && conn_ts->has_data())
	|| (del_cb_ts !=  nullptr && del_cb_ts->has_data())
	|| (disconn_cb_ts !=  nullptr && disconn_cb_ts->has_data())
	|| (notify_cb_ts !=  nullptr && notify_cb_ts->has_data())
	|| (pub_cb_ts !=  nullptr && pub_cb_ts->has_data())
	|| (pub_ts !=  nullptr && pub_ts->has_data())
	|| (reg_cb_ts !=  nullptr && reg_cb_ts->has_data())
	|| (reg_ts !=  nullptr && reg_ts->has_data())
	|| (remove_srv_ts !=  nullptr && remove_srv_ts->has_data())
	|| (unreg_cb_ts !=  nullptr && unreg_cb_ts->has_data())
	|| (unreg_ts !=  nullptr && unreg_ts->has_data());
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::has_operation() const
{
    for (std::size_t index=0; index<notify_peer.size(); index++)
    {
        if(notify_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(conn.yfilter)
	|| ydk::is_set(conn_cb.yfilter)
	|| ydk::is_set(conn_status.yfilter)
	|| ydk::is_set(del_cb.yfilter)
	|| ydk::is_set(disconn_cb.yfilter)
	|| ydk::is_set(notify_cb.yfilter)
	|| ydk::is_set(notify_peer_xr.yfilter)
	|| ydk::is_set(pub.yfilter)
	|| ydk::is_set(pub_cb.yfilter)
	|| ydk::is_set(reg.yfilter)
	|| ydk::is_set(reg_cb.yfilter)
	|| ydk::is_set(remove_srv.yfilter)
	|| ydk::is_set(unreg.yfilter)
	|| ydk::is_set(unreg_cb.yfilter)
	|| (conn_cb_ts !=  nullptr && conn_cb_ts->has_operation())
	|| (conn_status_ts !=  nullptr && conn_status_ts->has_operation())
	|| (conn_ts !=  nullptr && conn_ts->has_operation())
	|| (del_cb_ts !=  nullptr && del_cb_ts->has_operation())
	|| (disconn_cb_ts !=  nullptr && disconn_cb_ts->has_operation())
	|| (notify_cb_ts !=  nullptr && notify_cb_ts->has_operation())
	|| (pub_cb_ts !=  nullptr && pub_cb_ts->has_operation())
	|| (pub_ts !=  nullptr && pub_ts->has_operation())
	|| (reg_cb_ts !=  nullptr && reg_cb_ts->has_operation())
	|| (reg_ts !=  nullptr && reg_ts->has_operation())
	|| (remove_srv_ts !=  nullptr && remove_srv_ts->has_operation())
	|| (unreg_cb_ts !=  nullptr && unreg_cb_ts->has_operation())
	|| (unreg_ts !=  nullptr && unreg_ts->has_operation());
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conn.is_set || is_set(conn.yfilter)) leaf_name_data.push_back(conn.get_name_leafdata());
    if (conn_cb.is_set || is_set(conn_cb.yfilter)) leaf_name_data.push_back(conn_cb.get_name_leafdata());
    if (conn_status.is_set || is_set(conn_status.yfilter)) leaf_name_data.push_back(conn_status.get_name_leafdata());
    if (del_cb.is_set || is_set(del_cb.yfilter)) leaf_name_data.push_back(del_cb.get_name_leafdata());
    if (disconn_cb.is_set || is_set(disconn_cb.yfilter)) leaf_name_data.push_back(disconn_cb.get_name_leafdata());
    if (notify_cb.is_set || is_set(notify_cb.yfilter)) leaf_name_data.push_back(notify_cb.get_name_leafdata());
    if (notify_peer_xr.is_set || is_set(notify_peer_xr.yfilter)) leaf_name_data.push_back(notify_peer_xr.get_name_leafdata());
    if (pub.is_set || is_set(pub.yfilter)) leaf_name_data.push_back(pub.get_name_leafdata());
    if (pub_cb.is_set || is_set(pub_cb.yfilter)) leaf_name_data.push_back(pub_cb.get_name_leafdata());
    if (reg.is_set || is_set(reg.yfilter)) leaf_name_data.push_back(reg.get_name_leafdata());
    if (reg_cb.is_set || is_set(reg_cb.yfilter)) leaf_name_data.push_back(reg_cb.get_name_leafdata());
    if (remove_srv.is_set || is_set(remove_srv.yfilter)) leaf_name_data.push_back(remove_srv.get_name_leafdata());
    if (unreg.is_set || is_set(unreg.yfilter)) leaf_name_data.push_back(unreg.get_name_leafdata());
    if (unreg_cb.is_set || is_set(unreg_cb.yfilter)) leaf_name_data.push_back(unreg_cb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conn-cb-ts")
    {
        if(conn_cb_ts == nullptr)
        {
            conn_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs>();
        }
        return conn_cb_ts;
    }

    if(child_yang_name == "conn-status-ts")
    {
        if(conn_status_ts == nullptr)
        {
            conn_status_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs>();
        }
        return conn_status_ts;
    }

    if(child_yang_name == "conn-ts")
    {
        if(conn_ts == nullptr)
        {
            conn_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs>();
        }
        return conn_ts;
    }

    if(child_yang_name == "del-cb-ts")
    {
        if(del_cb_ts == nullptr)
        {
            del_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs>();
        }
        return del_cb_ts;
    }

    if(child_yang_name == "disconn-cb-ts")
    {
        if(disconn_cb_ts == nullptr)
        {
            disconn_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs>();
        }
        return disconn_cb_ts;
    }

    if(child_yang_name == "notify-cb-ts")
    {
        if(notify_cb_ts == nullptr)
        {
            notify_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs>();
        }
        return notify_cb_ts;
    }

    if(child_yang_name == "notify-peer")
    {
        for(auto const & c : notify_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer>();
        c->parent = this;
        notify_peer.push_back(c);
        return c;
    }

    if(child_yang_name == "pub-cb-ts")
    {
        if(pub_cb_ts == nullptr)
        {
            pub_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs>();
        }
        return pub_cb_ts;
    }

    if(child_yang_name == "pub-ts")
    {
        if(pub_ts == nullptr)
        {
            pub_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs>();
        }
        return pub_ts;
    }

    if(child_yang_name == "reg-cb-ts")
    {
        if(reg_cb_ts == nullptr)
        {
            reg_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs>();
        }
        return reg_cb_ts;
    }

    if(child_yang_name == "reg-ts")
    {
        if(reg_ts == nullptr)
        {
            reg_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs>();
        }
        return reg_ts;
    }

    if(child_yang_name == "remove-srv-ts")
    {
        if(remove_srv_ts == nullptr)
        {
            remove_srv_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs>();
        }
        return remove_srv_ts;
    }

    if(child_yang_name == "unreg-cb-ts")
    {
        if(unreg_cb_ts == nullptr)
        {
            unreg_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs>();
        }
        return unreg_cb_ts;
    }

    if(child_yang_name == "unreg-ts")
    {
        if(unreg_ts == nullptr)
        {
            unreg_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs>();
        }
        return unreg_ts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conn_cb_ts != nullptr)
    {
        children["conn-cb-ts"] = conn_cb_ts;
    }

    if(conn_status_ts != nullptr)
    {
        children["conn-status-ts"] = conn_status_ts;
    }

    if(conn_ts != nullptr)
    {
        children["conn-ts"] = conn_ts;
    }

    if(del_cb_ts != nullptr)
    {
        children["del-cb-ts"] = del_cb_ts;
    }

    if(disconn_cb_ts != nullptr)
    {
        children["disconn-cb-ts"] = disconn_cb_ts;
    }

    if(notify_cb_ts != nullptr)
    {
        children["notify-cb-ts"] = notify_cb_ts;
    }

    for (auto const & c : notify_peer)
    {
        children[c->get_segment_path()] = c;
    }

    if(pub_cb_ts != nullptr)
    {
        children["pub-cb-ts"] = pub_cb_ts;
    }

    if(pub_ts != nullptr)
    {
        children["pub-ts"] = pub_ts;
    }

    if(reg_cb_ts != nullptr)
    {
        children["reg-cb-ts"] = reg_cb_ts;
    }

    if(reg_ts != nullptr)
    {
        children["reg-ts"] = reg_ts;
    }

    if(remove_srv_ts != nullptr)
    {
        children["remove-srv-ts"] = remove_srv_ts;
    }

    if(unreg_cb_ts != nullptr)
    {
        children["unreg-cb-ts"] = unreg_cb_ts;
    }

    if(unreg_ts != nullptr)
    {
        children["unreg-ts"] = unreg_ts;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conn")
    {
        conn = value;
        conn.value_namespace = name_space;
        conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-cb")
    {
        conn_cb = value;
        conn_cb.value_namespace = name_space;
        conn_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-status")
    {
        conn_status = value;
        conn_status.value_namespace = name_space;
        conn_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "del-cb")
    {
        del_cb = value;
        del_cb.value_namespace = name_space;
        del_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb = value;
        disconn_cb.value_namespace = name_space;
        disconn_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-cb")
    {
        notify_cb = value;
        notify_cb.value_namespace = name_space;
        notify_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-peer-xr")
    {
        notify_peer_xr = value;
        notify_peer_xr.value_namespace = name_space;
        notify_peer_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pub")
    {
        pub = value;
        pub.value_namespace = name_space;
        pub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pub-cb")
    {
        pub_cb = value;
        pub_cb.value_namespace = name_space;
        pub_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg")
    {
        reg = value;
        reg.value_namespace = name_space;
        reg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-cb")
    {
        reg_cb = value;
        reg_cb.value_namespace = name_space;
        reg_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-srv")
    {
        remove_srv = value;
        remove_srv.value_namespace = name_space;
        remove_srv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreg")
    {
        unreg = value;
        unreg.value_namespace = name_space;
        unreg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreg-cb")
    {
        unreg_cb = value;
        unreg_cb.value_namespace = name_space;
        unreg_cb.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conn")
    {
        conn.yfilter = yfilter;
    }
    if(value_path == "conn-cb")
    {
        conn_cb.yfilter = yfilter;
    }
    if(value_path == "conn-status")
    {
        conn_status.yfilter = yfilter;
    }
    if(value_path == "del-cb")
    {
        del_cb.yfilter = yfilter;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb.yfilter = yfilter;
    }
    if(value_path == "notify-cb")
    {
        notify_cb.yfilter = yfilter;
    }
    if(value_path == "notify-peer-xr")
    {
        notify_peer_xr.yfilter = yfilter;
    }
    if(value_path == "pub")
    {
        pub.yfilter = yfilter;
    }
    if(value_path == "pub-cb")
    {
        pub_cb.yfilter = yfilter;
    }
    if(value_path == "reg")
    {
        reg.yfilter = yfilter;
    }
    if(value_path == "reg-cb")
    {
        reg_cb.yfilter = yfilter;
    }
    if(value_path == "remove-srv")
    {
        remove_srv.yfilter = yfilter;
    }
    if(value_path == "unreg")
    {
        unreg.yfilter = yfilter;
    }
    if(value_path == "unreg-cb")
    {
        unreg_cb.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conn-cb-ts" || name == "conn-status-ts" || name == "conn-ts" || name == "del-cb-ts" || name == "disconn-cb-ts" || name == "notify-cb-ts" || name == "notify-peer" || name == "pub-cb-ts" || name == "pub-ts" || name == "reg-cb-ts" || name == "reg-ts" || name == "remove-srv-ts" || name == "unreg-cb-ts" || name == "unreg-ts" || name == "conn" || name == "conn-cb" || name == "conn-status" || name == "del-cb" || name == "disconn-cb" || name == "notify-cb" || name == "notify-peer-xr" || name == "pub" || name == "pub-cb" || name == "reg" || name == "reg-cb" || name == "remove-srv" || name == "unreg" || name == "unreg-cb")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::ConnCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "conn-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::~ConnCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::ConnStatusTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "conn-status-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::~ConnStatusTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-status-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::ConnTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "conn-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::~ConnTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::DelCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "del-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::~DelCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "del-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::DisconnCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "disconn-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::~DisconnCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconn-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::NotifyCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "notify-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::~NotifyCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::NotifyPeer()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "notify-peer"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::~NotifyPeer()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::PubCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "pub-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::~PubCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::PubTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "pub-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::~PubTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::RegCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "reg-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::~RegCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::RegTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "reg-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::~RegTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::RemoveSrvTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "remove-srv-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::~RemoveSrvTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-srv-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::UnregCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "unreg-cb-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::~UnregCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreg-cb-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::UnregTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "unreg-ts"; yang_parent_name = "ds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::~UnregTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreg-ts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::Gen()
    :
    failover{YType::boolean, "failover"},
    lanid_req_needed{YType::boolean, "lanid-req-needed"},
    my_nodeid{YType::uint32, "my-nodeid"},
    my_process_id{YType::uint32, "my-process-id"},
    nsf_configured{YType::boolean, "nsf-configured"},
    nsr_configured{YType::boolean, "nsr-configured"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_recv_err{YType::uint32, "nsr-recv-err"},
    nsr_send_err{YType::uint32, "nsr-send-err"},
    nsr_send_ready{YType::uint8, "nsr-send-ready"},
    nsr_send_unready{YType::uint8, "nsr-send-unready"},
    pm_ha_role{YType::uint8, "pm-ha-role"},
    pm_issu_role{YType::uint8, "pm-issu-role"},
    retry_flag{YType::uint32, "retry-flag"},
    sysmgr_ha_role{YType::uint8, "sysmgr-ha-role"}
{

    yang_name = "gen"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::~Gen()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::has_data() const
{
    return failover.is_set
	|| lanid_req_needed.is_set
	|| my_nodeid.is_set
	|| my_process_id.is_set
	|| nsf_configured.is_set
	|| nsr_configured.is_set
	|| nsr_enabled.is_set
	|| nsr_recv_err.is_set
	|| nsr_send_err.is_set
	|| nsr_send_ready.is_set
	|| nsr_send_unready.is_set
	|| pm_ha_role.is_set
	|| pm_issu_role.is_set
	|| retry_flag.is_set
	|| sysmgr_ha_role.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failover.yfilter)
	|| ydk::is_set(lanid_req_needed.yfilter)
	|| ydk::is_set(my_nodeid.yfilter)
	|| ydk::is_set(my_process_id.yfilter)
	|| ydk::is_set(nsf_configured.yfilter)
	|| ydk::is_set(nsr_configured.yfilter)
	|| ydk::is_set(nsr_enabled.yfilter)
	|| ydk::is_set(nsr_recv_err.yfilter)
	|| ydk::is_set(nsr_send_err.yfilter)
	|| ydk::is_set(nsr_send_ready.yfilter)
	|| ydk::is_set(nsr_send_unready.yfilter)
	|| ydk::is_set(pm_ha_role.yfilter)
	|| ydk::is_set(pm_issu_role.yfilter)
	|| ydk::is_set(retry_flag.yfilter)
	|| ydk::is_set(sysmgr_ha_role.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failover.is_set || is_set(failover.yfilter)) leaf_name_data.push_back(failover.get_name_leafdata());
    if (lanid_req_needed.is_set || is_set(lanid_req_needed.yfilter)) leaf_name_data.push_back(lanid_req_needed.get_name_leafdata());
    if (my_nodeid.is_set || is_set(my_nodeid.yfilter)) leaf_name_data.push_back(my_nodeid.get_name_leafdata());
    if (my_process_id.is_set || is_set(my_process_id.yfilter)) leaf_name_data.push_back(my_process_id.get_name_leafdata());
    if (nsf_configured.is_set || is_set(nsf_configured.yfilter)) leaf_name_data.push_back(nsf_configured.get_name_leafdata());
    if (nsr_configured.is_set || is_set(nsr_configured.yfilter)) leaf_name_data.push_back(nsr_configured.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.yfilter)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_recv_err.is_set || is_set(nsr_recv_err.yfilter)) leaf_name_data.push_back(nsr_recv_err.get_name_leafdata());
    if (nsr_send_err.is_set || is_set(nsr_send_err.yfilter)) leaf_name_data.push_back(nsr_send_err.get_name_leafdata());
    if (nsr_send_ready.is_set || is_set(nsr_send_ready.yfilter)) leaf_name_data.push_back(nsr_send_ready.get_name_leafdata());
    if (nsr_send_unready.is_set || is_set(nsr_send_unready.yfilter)) leaf_name_data.push_back(nsr_send_unready.get_name_leafdata());
    if (pm_ha_role.is_set || is_set(pm_ha_role.yfilter)) leaf_name_data.push_back(pm_ha_role.get_name_leafdata());
    if (pm_issu_role.is_set || is_set(pm_issu_role.yfilter)) leaf_name_data.push_back(pm_issu_role.get_name_leafdata());
    if (retry_flag.is_set || is_set(retry_flag.yfilter)) leaf_name_data.push_back(retry_flag.get_name_leafdata());
    if (sysmgr_ha_role.is_set || is_set(sysmgr_ha_role.yfilter)) leaf_name_data.push_back(sysmgr_ha_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failover")
    {
        failover = value;
        failover.value_namespace = name_space;
        failover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanid-req-needed")
    {
        lanid_req_needed = value;
        lanid_req_needed.value_namespace = name_space;
        lanid_req_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-nodeid")
    {
        my_nodeid = value;
        my_nodeid.value_namespace = name_space;
        my_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-process-id")
    {
        my_process_id = value;
        my_process_id.value_namespace = name_space;
        my_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-configured")
    {
        nsf_configured = value;
        nsf_configured.value_namespace = name_space;
        nsf_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-configured")
    {
        nsr_configured = value;
        nsr_configured.value_namespace = name_space;
        nsr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
        nsr_enabled.value_namespace = name_space;
        nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-recv-err")
    {
        nsr_recv_err = value;
        nsr_recv_err.value_namespace = name_space;
        nsr_recv_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-send-err")
    {
        nsr_send_err = value;
        nsr_send_err.value_namespace = name_space;
        nsr_send_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-send-ready")
    {
        nsr_send_ready = value;
        nsr_send_ready.value_namespace = name_space;
        nsr_send_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-send-unready")
    {
        nsr_send_unready = value;
        nsr_send_unready.value_namespace = name_space;
        nsr_send_unready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-ha-role")
    {
        pm_ha_role = value;
        pm_ha_role.value_namespace = name_space;
        pm_ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-issu-role")
    {
        pm_issu_role = value;
        pm_issu_role.value_namespace = name_space;
        pm_issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-flag")
    {
        retry_flag = value;
        retry_flag.value_namespace = name_space;
        retry_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysmgr-ha-role")
    {
        sysmgr_ha_role = value;
        sysmgr_ha_role.value_namespace = name_space;
        sysmgr_ha_role.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failover")
    {
        failover.yfilter = yfilter;
    }
    if(value_path == "lanid-req-needed")
    {
        lanid_req_needed.yfilter = yfilter;
    }
    if(value_path == "my-nodeid")
    {
        my_nodeid.yfilter = yfilter;
    }
    if(value_path == "my-process-id")
    {
        my_process_id.yfilter = yfilter;
    }
    if(value_path == "nsf-configured")
    {
        nsf_configured.yfilter = yfilter;
    }
    if(value_path == "nsr-configured")
    {
        nsr_configured.yfilter = yfilter;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "nsr-recv-err")
    {
        nsr_recv_err.yfilter = yfilter;
    }
    if(value_path == "nsr-send-err")
    {
        nsr_send_err.yfilter = yfilter;
    }
    if(value_path == "nsr-send-ready")
    {
        nsr_send_ready.yfilter = yfilter;
    }
    if(value_path == "nsr-send-unready")
    {
        nsr_send_unready.yfilter = yfilter;
    }
    if(value_path == "pm-ha-role")
    {
        pm_ha_role.yfilter = yfilter;
    }
    if(value_path == "pm-issu-role")
    {
        pm_issu_role.yfilter = yfilter;
    }
    if(value_path == "retry-flag")
    {
        retry_flag.yfilter = yfilter;
    }
    if(value_path == "sysmgr-ha-role")
    {
        sysmgr_ha_role.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failover" || name == "lanid-req-needed" || name == "my-nodeid" || name == "my-process-id" || name == "nsf-configured" || name == "nsr-configured" || name == "nsr-enabled" || name == "nsr-recv-err" || name == "nsr-send-err" || name == "nsr-send-ready" || name == "nsr-send-unready" || name == "pm-ha-role" || name == "pm-issu-role" || name == "retry-flag" || name == "sysmgr-ha-role")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::Ncd()
    :
    chksum{YType::uint16, "chksum"},
    conn_up{YType::boolean, "conn-up"},
    endp_hdl{YType::uint8, "endp-hdl"},
    recv_cnt{YType::uint32, "recv-cnt"},
    send_seqnum{YType::uint32, "send-seqnum"},
    vm_idx{YType::uint8, "vm-idx"}
{

    yang_name = "ncd"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::~Ncd()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::has_data() const
{
    return chksum.is_set
	|| conn_up.is_set
	|| endp_hdl.is_set
	|| recv_cnt.is_set
	|| send_seqnum.is_set
	|| vm_idx.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chksum.yfilter)
	|| ydk::is_set(conn_up.yfilter)
	|| ydk::is_set(endp_hdl.yfilter)
	|| ydk::is_set(recv_cnt.yfilter)
	|| ydk::is_set(send_seqnum.yfilter)
	|| ydk::is_set(vm_idx.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chksum.is_set || is_set(chksum.yfilter)) leaf_name_data.push_back(chksum.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.yfilter)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (endp_hdl.is_set || is_set(endp_hdl.yfilter)) leaf_name_data.push_back(endp_hdl.get_name_leafdata());
    if (recv_cnt.is_set || is_set(recv_cnt.yfilter)) leaf_name_data.push_back(recv_cnt.get_name_leafdata());
    if (send_seqnum.is_set || is_set(send_seqnum.yfilter)) leaf_name_data.push_back(send_seqnum.get_name_leafdata());
    if (vm_idx.is_set || is_set(vm_idx.yfilter)) leaf_name_data.push_back(vm_idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chksum")
    {
        chksum = value;
        chksum.value_namespace = name_space;
        chksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
        conn_up.value_namespace = name_space;
        conn_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endp-hdl")
    {
        endp_hdl = value;
        endp_hdl.value_namespace = name_space;
        endp_hdl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recv-cnt")
    {
        recv_cnt = value;
        recv_cnt.value_namespace = name_space;
        recv_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-seqnum")
    {
        send_seqnum = value;
        send_seqnum.value_namespace = name_space;
        send_seqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-idx")
    {
        vm_idx = value;
        vm_idx.value_namespace = name_space;
        vm_idx.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chksum")
    {
        chksum.yfilter = yfilter;
    }
    if(value_path == "conn-up")
    {
        conn_up.yfilter = yfilter;
    }
    if(value_path == "endp-hdl")
    {
        endp_hdl.yfilter = yfilter;
    }
    if(value_path == "recv-cnt")
    {
        recv_cnt.yfilter = yfilter;
    }
    if(value_path == "send-seqnum")
    {
        send_seqnum.yfilter = yfilter;
    }
    if(value_path == "vm-idx")
    {
        vm_idx.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chksum" || name == "conn-up" || name == "endp-hdl" || name == "recv-cnt" || name == "send-seqnum" || name == "vm-idx")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::NiiIdb()
    :
    brought_up{YType::boolean, "brought-up"},
    exist{YType::boolean, "exist"},
    has_adj{YType::boolean, "has-adj"},
    retry_timer{YType::boolean, "retry-timer"},
    running{YType::boolean, "running"}
{

    yang_name = "nii-idb"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::~NiiIdb()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::has_data() const
{
    return brought_up.is_set
	|| exist.is_set
	|| has_adj.is_set
	|| retry_timer.is_set
	|| running.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(brought_up.yfilter)
	|| ydk::is_set(exist.yfilter)
	|| ydk::is_set(has_adj.yfilter)
	|| ydk::is_set(retry_timer.yfilter)
	|| ydk::is_set(running.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nii-idb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (brought_up.is_set || is_set(brought_up.yfilter)) leaf_name_data.push_back(brought_up.get_name_leafdata());
    if (exist.is_set || is_set(exist.yfilter)) leaf_name_data.push_back(exist.get_name_leafdata());
    if (has_adj.is_set || is_set(has_adj.yfilter)) leaf_name_data.push_back(has_adj.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.yfilter)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "brought-up")
    {
        brought_up = value;
        brought_up.value_namespace = name_space;
        brought_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exist")
    {
        exist = value;
        exist.value_namespace = name_space;
        exist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-adj")
    {
        has_adj = value;
        has_adj.value_namespace = name_space;
        has_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
        retry_timer.value_namespace = name_space;
        retry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "brought-up")
    {
        brought_up.yfilter = yfilter;
    }
    if(value_path == "exist")
    {
        exist.yfilter = yfilter;
    }
    if(value_path == "has-adj")
    {
        has_adj.yfilter = yfilter;
    }
    if(value_path == "retry-timer")
    {
        retry_timer.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brought-up" || name == "exist" || name == "has-adj" || name == "retry-timer" || name == "running")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::Pm()
    :
    conn_cb{YType::uint8, "conn-cb"},
    conn_status{YType::boolean, "conn-status"},
    disconn_cb{YType::uint8, "disconn-cb"},
    reg{YType::uint8, "reg"}
{

    yang_name = "pm"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::~Pm()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::has_data() const
{
    return conn_cb.is_set
	|| conn_status.is_set
	|| disconn_cb.is_set
	|| reg.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conn_cb.yfilter)
	|| ydk::is_set(conn_status.yfilter)
	|| ydk::is_set(disconn_cb.yfilter)
	|| ydk::is_set(reg.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conn_cb.is_set || is_set(conn_cb.yfilter)) leaf_name_data.push_back(conn_cb.get_name_leafdata());
    if (conn_status.is_set || is_set(conn_status.yfilter)) leaf_name_data.push_back(conn_status.get_name_leafdata());
    if (disconn_cb.is_set || is_set(disconn_cb.yfilter)) leaf_name_data.push_back(disconn_cb.get_name_leafdata());
    if (reg.is_set || is_set(reg.yfilter)) leaf_name_data.push_back(reg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conn-cb")
    {
        conn_cb = value;
        conn_cb.value_namespace = name_space;
        conn_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-status")
    {
        conn_status = value;
        conn_status.value_namespace = name_space;
        conn_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb = value;
        disconn_cb.value_namespace = name_space;
        disconn_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg")
    {
        reg = value;
        reg.value_namespace = name_space;
        reg.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conn-cb")
    {
        conn_cb.yfilter = yfilter;
    }
    if(value_path == "conn-status")
    {
        conn_status.yfilter = yfilter;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb.yfilter = yfilter;
    }
    if(value_path == "reg")
    {
        reg.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conn-cb" || name == "conn-status" || name == "disconn-cb" || name == "reg")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::Te()
    :
    adv_sync_data{YType::uint8, "adv-sync-data"},
    conn_up{YType::uint8, "conn-up"},
    enabled{YType::uint8, "enabled"},
    has_info_from_te{YType::uint8, "has-info-from-te"},
    link_purge_time_on{YType::uint8, "link-purge-time-on"},
    te_link_cb{YType::uint8, "te-link-cb"},
    te_tunnel_cb{YType::uint8, "te-tunnel-cb"},
    tunnel_purge_time_on{YType::uint8, "tunnel-purge-time-on"}
{

    yang_name = "te"; yang_parent_name = "isis-nsr-infra"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::~Te()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::has_data() const
{
    return adv_sync_data.is_set
	|| conn_up.is_set
	|| enabled.is_set
	|| has_info_from_te.is_set
	|| link_purge_time_on.is_set
	|| te_link_cb.is_set
	|| te_tunnel_cb.is_set
	|| tunnel_purge_time_on.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_sync_data.yfilter)
	|| ydk::is_set(conn_up.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(has_info_from_te.yfilter)
	|| ydk::is_set(link_purge_time_on.yfilter)
	|| ydk::is_set(te_link_cb.yfilter)
	|| ydk::is_set(te_tunnel_cb.yfilter)
	|| ydk::is_set(tunnel_purge_time_on.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_sync_data.is_set || is_set(adv_sync_data.yfilter)) leaf_name_data.push_back(adv_sync_data.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.yfilter)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (has_info_from_te.is_set || is_set(has_info_from_te.yfilter)) leaf_name_data.push_back(has_info_from_te.get_name_leafdata());
    if (link_purge_time_on.is_set || is_set(link_purge_time_on.yfilter)) leaf_name_data.push_back(link_purge_time_on.get_name_leafdata());
    if (te_link_cb.is_set || is_set(te_link_cb.yfilter)) leaf_name_data.push_back(te_link_cb.get_name_leafdata());
    if (te_tunnel_cb.is_set || is_set(te_tunnel_cb.yfilter)) leaf_name_data.push_back(te_tunnel_cb.get_name_leafdata());
    if (tunnel_purge_time_on.is_set || is_set(tunnel_purge_time_on.yfilter)) leaf_name_data.push_back(tunnel_purge_time_on.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-sync-data")
    {
        adv_sync_data = value;
        adv_sync_data.value_namespace = name_space;
        adv_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
        conn_up.value_namespace = name_space;
        conn_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-info-from-te")
    {
        has_info_from_te = value;
        has_info_from_te.value_namespace = name_space;
        has_info_from_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-purge-time-on")
    {
        link_purge_time_on = value;
        link_purge_time_on.value_namespace = name_space;
        link_purge_time_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-link-cb")
    {
        te_link_cb = value;
        te_link_cb.value_namespace = name_space;
        te_link_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-tunnel-cb")
    {
        te_tunnel_cb = value;
        te_tunnel_cb.value_namespace = name_space;
        te_tunnel_cb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-purge-time-on")
    {
        tunnel_purge_time_on = value;
        tunnel_purge_time_on.value_namespace = name_space;
        tunnel_purge_time_on.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-sync-data")
    {
        adv_sync_data.yfilter = yfilter;
    }
    if(value_path == "conn-up")
    {
        conn_up.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "has-info-from-te")
    {
        has_info_from_te.yfilter = yfilter;
    }
    if(value_path == "link-purge-time-on")
    {
        link_purge_time_on.yfilter = yfilter;
    }
    if(value_path == "te-link-cb")
    {
        te_link_cb.yfilter = yfilter;
    }
    if(value_path == "te-tunnel-cb")
    {
        te_tunnel_cb.yfilter = yfilter;
    }
    if(value_path == "tunnel-purge-time-on")
    {
        tunnel_purge_time_on.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-sync-data" || name == "conn-up" || name == "enabled" || name == "has-info-from-te" || name == "link-purge-time-on" || name == "te-link-cb" || name == "te-tunnel-cb" || name == "tunnel-purge-time-on")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::IsisNsrPeer()
{

    yang_name = "isis-nsr-peer"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::~IsisNsrPeer()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::has_data() const
{
    for (std::size_t index=0; index<full_sync_achieved.size(); index++)
    {
        if(full_sync_achieved[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<man_sync_count.size(); index++)
    {
        if(man_sync_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nsr_chg_count.size(); index++)
    {
        if(nsr_chg_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<uptime.size(); index++)
    {
        if(uptime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<uptime_valid.size(); index++)
    {
        if(uptime_valid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::has_operation() const
{
    for (std::size_t index=0; index<full_sync_achieved.size(); index++)
    {
        if(full_sync_achieved[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<man_sync_count.size(); index++)
    {
        if(man_sync_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nsr_chg_count.size(); index++)
    {
        if(nsr_chg_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<uptime.size(); index++)
    {
        if(uptime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<uptime_valid.size(); index++)
    {
        if(uptime_valid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "full-sync-achieved")
    {
        for(auto const & c : full_sync_achieved)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved>();
        c->parent = this;
        full_sync_achieved.push_back(c);
        return c;
    }

    if(child_yang_name == "man-sync-count")
    {
        for(auto const & c : man_sync_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount>();
        c->parent = this;
        man_sync_count.push_back(c);
        return c;
    }

    if(child_yang_name == "nsr-chg-count")
    {
        for(auto const & c : nsr_chg_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount>();
        c->parent = this;
        nsr_chg_count.push_back(c);
        return c;
    }

    if(child_yang_name == "uptime")
    {
        for(auto const & c : uptime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime>();
        c->parent = this;
        uptime.push_back(c);
        return c;
    }

    if(child_yang_name == "uptime-valid")
    {
        for(auto const & c : uptime_valid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid>();
        c->parent = this;
        uptime_valid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : full_sync_achieved)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : man_sync_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nsr_chg_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : uptime)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : uptime_valid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full-sync-achieved" || name == "man-sync-count" || name == "nsr-chg-count" || name == "uptime" || name == "uptime-valid")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::FullSyncAchieved()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "full-sync-achieved"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::~FullSyncAchieved()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "full-sync-achieved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::ManSyncCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "man-sync-count"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::~ManSyncCount()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "man-sync-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::NsrChgCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-chg-count"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::~NsrChgCount()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-chg-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::Uptime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "uptime"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::~Uptime()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uptime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::UptimeValid()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "uptime-valid"; yang_parent_name = "isis-nsr-peer"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::~UptimeValid()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uptime-valid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::Protocol()
    :
    adj_form_count{YType::uint32, "adj-form-count"},
    adj_full_count{YType::uint32, "adj-full-count"},
    adj_stagger_enabled{YType::boolean, "adj-stagger-enabled"},
    adj_stagger_init{YType::uint32, "adj-stagger-init"},
    adj_stagger_max{YType::uint32, "adj-stagger-max"},
    configured_nsf_flavor{YType::enumeration, "configured-nsf-flavor"},
    instance_id{YType::uint16, "instance-id"},
    last_restart_nsf_flavor{YType::enumeration, "last-restart-nsf-flavor"},
    last_restart_status{YType::enumeration, "last-restart-status"},
    nsap_system_id{YType::str, "nsap-system-id"},
    remaining_time_for_next_nsf_restart{YType::uint32, "remaining-time-for-next-nsf-restart"},
    running_levels{YType::enumeration, "running-levels"},
    srgb_allocated{YType::boolean, "srgb-allocated"},
    srgb_end{YType::uint32, "srgb-end"},
    srgb_start{YType::uint32, "srgb-start"},
    srlb_allocated{YType::boolean, "srlb-allocated"},
    srlb_end{YType::uint32, "srlb-end"},
    srlb_start{YType::uint32, "srlb-start"},
    te_connection{YType::enumeration, "te-connection"},
    valid_nsap_system_id{YType::boolean, "valid-nsap-system-id"}
{

    yang_name = "protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Protocol::~Protocol()
{
}

bool Isis::Instances::Instance::Protocol::has_data() const
{
    for (std::size_t index=0; index<active_area_address.size(); index++)
    {
        if(active_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<manual_area_address.size(); index++)
    {
        if(manual_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_topo_data.size(); index++)
    {
        if(per_topo_data[index]->has_data())
            return true;
    }
    return adj_form_count.is_set
	|| adj_full_count.is_set
	|| adj_stagger_enabled.is_set
	|| adj_stagger_init.is_set
	|| adj_stagger_max.is_set
	|| configured_nsf_flavor.is_set
	|| instance_id.is_set
	|| last_restart_nsf_flavor.is_set
	|| last_restart_status.is_set
	|| nsap_system_id.is_set
	|| remaining_time_for_next_nsf_restart.is_set
	|| running_levels.is_set
	|| srgb_allocated.is_set
	|| srgb_end.is_set
	|| srgb_start.is_set
	|| srlb_allocated.is_set
	|| srlb_end.is_set
	|| srlb_start.is_set
	|| te_connection.is_set
	|| valid_nsap_system_id.is_set;
}

bool Isis::Instances::Instance::Protocol::has_operation() const
{
    for (std::size_t index=0; index<active_area_address.size(); index++)
    {
        if(active_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<manual_area_address.size(); index++)
    {
        if(manual_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_topo_data.size(); index++)
    {
        if(per_topo_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(adj_form_count.yfilter)
	|| ydk::is_set(adj_full_count.yfilter)
	|| ydk::is_set(adj_stagger_enabled.yfilter)
	|| ydk::is_set(adj_stagger_init.yfilter)
	|| ydk::is_set(adj_stagger_max.yfilter)
	|| ydk::is_set(configured_nsf_flavor.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(last_restart_nsf_flavor.yfilter)
	|| ydk::is_set(last_restart_status.yfilter)
	|| ydk::is_set(nsap_system_id.yfilter)
	|| ydk::is_set(remaining_time_for_next_nsf_restart.yfilter)
	|| ydk::is_set(running_levels.yfilter)
	|| ydk::is_set(srgb_allocated.yfilter)
	|| ydk::is_set(srgb_end.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srlb_allocated.yfilter)
	|| ydk::is_set(srlb_end.yfilter)
	|| ydk::is_set(srlb_start.yfilter)
	|| ydk::is_set(te_connection.yfilter)
	|| ydk::is_set(valid_nsap_system_id.yfilter);
}

std::string Isis::Instances::Instance::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_form_count.is_set || is_set(adj_form_count.yfilter)) leaf_name_data.push_back(adj_form_count.get_name_leafdata());
    if (adj_full_count.is_set || is_set(adj_full_count.yfilter)) leaf_name_data.push_back(adj_full_count.get_name_leafdata());
    if (adj_stagger_enabled.is_set || is_set(adj_stagger_enabled.yfilter)) leaf_name_data.push_back(adj_stagger_enabled.get_name_leafdata());
    if (adj_stagger_init.is_set || is_set(adj_stagger_init.yfilter)) leaf_name_data.push_back(adj_stagger_init.get_name_leafdata());
    if (adj_stagger_max.is_set || is_set(adj_stagger_max.yfilter)) leaf_name_data.push_back(adj_stagger_max.get_name_leafdata());
    if (configured_nsf_flavor.is_set || is_set(configured_nsf_flavor.yfilter)) leaf_name_data.push_back(configured_nsf_flavor.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (last_restart_nsf_flavor.is_set || is_set(last_restart_nsf_flavor.yfilter)) leaf_name_data.push_back(last_restart_nsf_flavor.get_name_leafdata());
    if (last_restart_status.is_set || is_set(last_restart_status.yfilter)) leaf_name_data.push_back(last_restart_status.get_name_leafdata());
    if (nsap_system_id.is_set || is_set(nsap_system_id.yfilter)) leaf_name_data.push_back(nsap_system_id.get_name_leafdata());
    if (remaining_time_for_next_nsf_restart.is_set || is_set(remaining_time_for_next_nsf_restart.yfilter)) leaf_name_data.push_back(remaining_time_for_next_nsf_restart.get_name_leafdata());
    if (running_levels.is_set || is_set(running_levels.yfilter)) leaf_name_data.push_back(running_levels.get_name_leafdata());
    if (srgb_allocated.is_set || is_set(srgb_allocated.yfilter)) leaf_name_data.push_back(srgb_allocated.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.yfilter)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srlb_allocated.is_set || is_set(srlb_allocated.yfilter)) leaf_name_data.push_back(srlb_allocated.get_name_leafdata());
    if (srlb_end.is_set || is_set(srlb_end.yfilter)) leaf_name_data.push_back(srlb_end.get_name_leafdata());
    if (srlb_start.is_set || is_set(srlb_start.yfilter)) leaf_name_data.push_back(srlb_start.get_name_leafdata());
    if (te_connection.is_set || is_set(te_connection.yfilter)) leaf_name_data.push_back(te_connection.get_name_leafdata());
    if (valid_nsap_system_id.is_set || is_set(valid_nsap_system_id.yfilter)) leaf_name_data.push_back(valid_nsap_system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-area-address")
    {
        for(auto const & c : active_area_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::ActiveAreaAddress>();
        c->parent = this;
        active_area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "manual-area-address")
    {
        for(auto const & c : manual_area_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::ManualAreaAddress>();
        c->parent = this;
        manual_area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "per-topo-data")
    {
        for(auto const & c : per_topo_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData>();
        c->parent = this;
        per_topo_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : active_area_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : manual_area_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : per_topo_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adj-form-count")
    {
        adj_form_count = value;
        adj_form_count.value_namespace = name_space;
        adj_form_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-full-count")
    {
        adj_full_count = value;
        adj_full_count.value_namespace = name_space;
        adj_full_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled = value;
        adj_stagger_enabled.value_namespace = name_space;
        adj_stagger_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-init")
    {
        adj_stagger_init = value;
        adj_stagger_init.value_namespace = name_space;
        adj_stagger_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-max")
    {
        adj_stagger_max = value;
        adj_stagger_max.value_namespace = name_space;
        adj_stagger_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-nsf-flavor")
    {
        configured_nsf_flavor = value;
        configured_nsf_flavor.value_namespace = name_space;
        configured_nsf_flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-restart-nsf-flavor")
    {
        last_restart_nsf_flavor = value;
        last_restart_nsf_flavor.value_namespace = name_space;
        last_restart_nsf_flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-restart-status")
    {
        last_restart_status = value;
        last_restart_status.value_namespace = name_space;
        last_restart_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsap-system-id")
    {
        nsap_system_id = value;
        nsap_system_id.value_namespace = name_space;
        nsap_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time-for-next-nsf-restart")
    {
        remaining_time_for_next_nsf_restart = value;
        remaining_time_for_next_nsf_restart.value_namespace = name_space;
        remaining_time_for_next_nsf_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-levels")
    {
        running_levels = value;
        running_levels.value_namespace = name_space;
        running_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-allocated")
    {
        srgb_allocated = value;
        srgb_allocated.value_namespace = name_space;
        srgb_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end")
    {
        srgb_end = value;
        srgb_end.value_namespace = name_space;
        srgb_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-allocated")
    {
        srlb_allocated = value;
        srlb_allocated.value_namespace = name_space;
        srlb_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-end")
    {
        srlb_end = value;
        srlb_end.value_namespace = name_space;
        srlb_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-start")
    {
        srlb_start = value;
        srlb_start.value_namespace = name_space;
        srlb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-connection")
    {
        te_connection = value;
        te_connection.value_namespace = name_space;
        te_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-nsap-system-id")
    {
        valid_nsap_system_id = value;
        valid_nsap_system_id.value_namespace = name_space;
        valid_nsap_system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adj-form-count")
    {
        adj_form_count.yfilter = yfilter;
    }
    if(value_path == "adj-full-count")
    {
        adj_full_count.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-init")
    {
        adj_stagger_init.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-max")
    {
        adj_stagger_max.yfilter = yfilter;
    }
    if(value_path == "configured-nsf-flavor")
    {
        configured_nsf_flavor.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "last-restart-nsf-flavor")
    {
        last_restart_nsf_flavor.yfilter = yfilter;
    }
    if(value_path == "last-restart-status")
    {
        last_restart_status.yfilter = yfilter;
    }
    if(value_path == "nsap-system-id")
    {
        nsap_system_id.yfilter = yfilter;
    }
    if(value_path == "remaining-time-for-next-nsf-restart")
    {
        remaining_time_for_next_nsf_restart.yfilter = yfilter;
    }
    if(value_path == "running-levels")
    {
        running_levels.yfilter = yfilter;
    }
    if(value_path == "srgb-allocated")
    {
        srgb_allocated.yfilter = yfilter;
    }
    if(value_path == "srgb-end")
    {
        srgb_end.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
    if(value_path == "srlb-allocated")
    {
        srlb_allocated.yfilter = yfilter;
    }
    if(value_path == "srlb-end")
    {
        srlb_end.yfilter = yfilter;
    }
    if(value_path == "srlb-start")
    {
        srlb_start.yfilter = yfilter;
    }
    if(value_path == "te-connection")
    {
        te_connection.yfilter = yfilter;
    }
    if(value_path == "valid-nsap-system-id")
    {
        valid_nsap_system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-area-address" || name == "manual-area-address" || name == "per-topo-data" || name == "adj-form-count" || name == "adj-full-count" || name == "adj-stagger-enabled" || name == "adj-stagger-init" || name == "adj-stagger-max" || name == "configured-nsf-flavor" || name == "instance-id" || name == "last-restart-nsf-flavor" || name == "last-restart-status" || name == "nsap-system-id" || name == "remaining-time-for-next-nsf-restart" || name == "running-levels" || name == "srgb-allocated" || name == "srgb-end" || name == "srgb-start" || name == "srlb-allocated" || name == "srlb-end" || name == "srlb-start" || name == "te-connection" || name == "valid-nsap-system-id")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::ActiveAreaAddress::ActiveAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "active-area-address"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Protocol::ActiveAreaAddress::~ActiveAreaAddress()
{
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-area-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::ActiveAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::ActiveAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::ManualAreaAddress::ManualAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "manual-area-address"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Protocol::ManualAreaAddress::~ManualAreaAddress()
{
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Protocol::ManualAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-area-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::ManualAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::ManualAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::ManualAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::ManualAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::ManualAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::PerTopoData()
    :
    advertise_passive_only{YType::boolean, "advertise-passive-only"},
    default_admin_distance{YType::uint32, "default-admin-distance"},
    wait_redist_complete{YType::boolean, "wait-redist-complete"}
    	,
    id(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>())
	,redist_protocols_list(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>())
{
    id->parent = this;
    redist_protocols_list->parent = this;

    yang_name = "per-topo-data"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Protocol::PerTopoData::~PerTopoData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return advertise_passive_only.is_set
	|| default_admin_distance.is_set
	|| wait_redist_complete.is_set
	|| (id !=  nullptr && id->has_data())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(advertise_passive_only.yfilter)
	|| ydk::is_set(default_admin_distance.yfilter)
	|| ydk::is_set(wait_redist_complete.yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topo-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_passive_only.is_set || is_set(advertise_passive_only.yfilter)) leaf_name_data.push_back(advertise_passive_only.get_name_leafdata());
    if (default_admin_distance.is_set || is_set(default_admin_distance.yfilter)) leaf_name_data.push_back(default_admin_distance.get_name_leafdata());
    if (wait_redist_complete.is_set || is_set(wait_redist_complete.yfilter)) leaf_name_data.push_back(wait_redist_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>();
        }
        return id;
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-protocols-list")
    {
        if(redist_protocols_list == nullptr)
        {
            redist_protocols_list = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>();
        }
        return redist_protocols_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    for (auto const & c : per_area_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_protocols_list != nullptr)
    {
        children["redist-protocols-list"] = redist_protocols_list;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only = value;
        advertise_passive_only.value_namespace = name_space;
        advertise_passive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance = value;
        default_admin_distance.value_namespace = name_space;
        default_admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-redist-complete")
    {
        wait_redist_complete = value;
        wait_redist_complete.value_namespace = name_space;
        wait_redist_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only.yfilter = yfilter;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance.yfilter = yfilter;
    }
    if(value_path == "wait-redist-complete")
    {
        wait_redist_complete.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "per-area-data" || name == "redist-protocols-list" || name == "advertise-passive-only" || name == "default-admin-distance" || name == "wait-redist-complete")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "id"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::~Id()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::PerAreaData()
    :
    accepted_metric_style{YType::enumeration, "accepted-metric-style"},
    duration{YType::uint32, "duration"},
    generated_metric_style{YType::enumeration, "generated-metric-style"},
    ispf_state{YType::enumeration, "ispf-state"},
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"},
    rib_update_delay{YType::uint32, "rib-update-delay"},
    sr_uloop_event{YType::enumeration, "sr-uloop-event"},
    sr_uloop_far_node_id{YType::str, "sr-uloop-far-node-id"},
    sr_uloop_is_active{YType::boolean, "sr-uloop-is-active"},
    sr_uloop_near_node_id{YType::str, "sr-uloop-near-node-id"},
    te_enabled{YType::boolean, "te-enabled"},
    uloop_avoidance_type{YType::enumeration, "uloop-avoidance-type"},
    uses_default_link_topo_flag{YType::boolean, "uses-default-link-topo-flag"}
{

    yang_name = "per-area-data"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_data() const
{
    return accepted_metric_style.is_set
	|| duration.is_set
	|| generated_metric_style.is_set
	|| ispf_state.is_set
	|| level.is_set
	|| metric.is_set
	|| rib_update_delay.is_set
	|| sr_uloop_event.is_set
	|| sr_uloop_far_node_id.is_set
	|| sr_uloop_is_active.is_set
	|| sr_uloop_near_node_id.is_set
	|| te_enabled.is_set
	|| uloop_avoidance_type.is_set
	|| uses_default_link_topo_flag.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_metric_style.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(generated_metric_style.yfilter)
	|| ydk::is_set(ispf_state.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter)
	|| ydk::is_set(sr_uloop_event.yfilter)
	|| ydk::is_set(sr_uloop_far_node_id.yfilter)
	|| ydk::is_set(sr_uloop_is_active.yfilter)
	|| ydk::is_set(sr_uloop_near_node_id.yfilter)
	|| ydk::is_set(te_enabled.yfilter)
	|| ydk::is_set(uloop_avoidance_type.yfilter)
	|| ydk::is_set(uses_default_link_topo_flag.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_metric_style.is_set || is_set(accepted_metric_style.yfilter)) leaf_name_data.push_back(accepted_metric_style.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (generated_metric_style.is_set || is_set(generated_metric_style.yfilter)) leaf_name_data.push_back(generated_metric_style.get_name_leafdata());
    if (ispf_state.is_set || is_set(ispf_state.yfilter)) leaf_name_data.push_back(ispf_state.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());
    if (sr_uloop_event.is_set || is_set(sr_uloop_event.yfilter)) leaf_name_data.push_back(sr_uloop_event.get_name_leafdata());
    if (sr_uloop_far_node_id.is_set || is_set(sr_uloop_far_node_id.yfilter)) leaf_name_data.push_back(sr_uloop_far_node_id.get_name_leafdata());
    if (sr_uloop_is_active.is_set || is_set(sr_uloop_is_active.yfilter)) leaf_name_data.push_back(sr_uloop_is_active.get_name_leafdata());
    if (sr_uloop_near_node_id.is_set || is_set(sr_uloop_near_node_id.yfilter)) leaf_name_data.push_back(sr_uloop_near_node_id.get_name_leafdata());
    if (te_enabled.is_set || is_set(te_enabled.yfilter)) leaf_name_data.push_back(te_enabled.get_name_leafdata());
    if (uloop_avoidance_type.is_set || is_set(uloop_avoidance_type.yfilter)) leaf_name_data.push_back(uloop_avoidance_type.get_name_leafdata());
    if (uses_default_link_topo_flag.is_set || is_set(uses_default_link_topo_flag.yfilter)) leaf_name_data.push_back(uses_default_link_topo_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-metric-style")
    {
        accepted_metric_style = value;
        accepted_metric_style.value_namespace = name_space;
        accepted_metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generated-metric-style")
    {
        generated_metric_style = value;
        generated_metric_style.value_namespace = name_space;
        generated_metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ispf-state")
    {
        ispf_state = value;
        ispf_state.value_namespace = name_space;
        ispf_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
        rib_update_delay.value_namespace = name_space;
        rib_update_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-event")
    {
        sr_uloop_event = value;
        sr_uloop_event.value_namespace = name_space;
        sr_uloop_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-far-node-id")
    {
        sr_uloop_far_node_id = value;
        sr_uloop_far_node_id.value_namespace = name_space;
        sr_uloop_far_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-is-active")
    {
        sr_uloop_is_active = value;
        sr_uloop_is_active.value_namespace = name_space;
        sr_uloop_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-near-node-id")
    {
        sr_uloop_near_node_id = value;
        sr_uloop_near_node_id.value_namespace = name_space;
        sr_uloop_near_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-enabled")
    {
        te_enabled = value;
        te_enabled.value_namespace = name_space;
        te_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uloop-avoidance-type")
    {
        uloop_avoidance_type = value;
        uloop_avoidance_type.value_namespace = name_space;
        uloop_avoidance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uses-default-link-topo-flag")
    {
        uses_default_link_topo_flag = value;
        uses_default_link_topo_flag.value_namespace = name_space;
        uses_default_link_topo_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-metric-style")
    {
        accepted_metric_style.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "generated-metric-style")
    {
        generated_metric_style.yfilter = yfilter;
    }
    if(value_path == "ispf-state")
    {
        ispf_state.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-event")
    {
        sr_uloop_event.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-far-node-id")
    {
        sr_uloop_far_node_id.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-is-active")
    {
        sr_uloop_is_active.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-near-node-id")
    {
        sr_uloop_near_node_id.yfilter = yfilter;
    }
    if(value_path == "te-enabled")
    {
        te_enabled.yfilter = yfilter;
    }
    if(value_path == "uloop-avoidance-type")
    {
        uloop_avoidance_type.yfilter = yfilter;
    }
    if(value_path == "uses-default-link-topo-flag")
    {
        uses_default_link_topo_flag.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-metric-style" || name == "duration" || name == "generated-metric-style" || name == "ispf-state" || name == "level" || name == "metric" || name == "rib-update-delay" || name == "sr-uloop-event" || name == "sr-uloop-far-node-id" || name == "sr-uloop-is-active" || name == "sr-uloop-near-node-id" || name == "te-enabled" || name == "uloop-avoidance-type" || name == "uses-default-link-topo-flag")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::RedistProtocolsList()
{

    yang_name = "redist-protocols-list"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::~RedistProtocolsList()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_data() const
{
    for (std::size_t index=0; index<isis_sh_redist_entry.size(); index++)
    {
        if(isis_sh_redist_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_redist_entry.size(); index++)
    {
        if(isis_sh_redist_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-protocols-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-redist-entry")
    {
        for(auto const & c : isis_sh_redist_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry>();
        c->parent = this;
        isis_sh_redist_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_sh_redist_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-redist-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::IsisShRedistEntry()
    :
    protocol_details(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>())
{
    protocol_details->parent = this;

    yang_name = "isis-sh-redist-entry"; yang_parent_name = "redist-protocols-list"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::~IsisShRedistEntry()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_data() const
{
    return (protocol_details !=  nullptr && protocol_details->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_details !=  nullptr && protocol_details->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-redist-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-details")
    {
        if(protocol_details == nullptr)
        {
            protocol_details = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>();
        }
        return protocol_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_details != nullptr)
    {
        children["protocol-details"] = protocol_details;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-details")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::ProtocolDetails()
    :
    application_name{YType::str, "application-name"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    ospfv3_process_id{YType::str, "ospfv3-process-id"},
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "protocol-details"; yang_parent_name = "isis-sh-redist-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::~ProtocolDetails()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_data() const
{
    return application_name.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| ospfv3_process_id.is_set
	|| protocol.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(ospfv3_process_id.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (ospfv3_process_id.is_set || is_set(ospfv3_process_id.yfilter)) leaf_name_data.push_back(ospfv3_process_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id = value;
        ospfv3_process_id.value_namespace = name_space;
        ospfv3_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "bgp-as-number" || name == "eigrp-as-number" || name == "isis-instance-id" || name == "ospf-process-id" || name == "ospfv3-process-id" || name == "protocol")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Srms()
    :
    policy(std::make_shared<Isis::Instances::Instance::Srms::Policy>())
{
    policy->parent = this;

    yang_name = "srms"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::~Srms()
{
}

bool Isis::Instances::Instance::Srms::has_data() const
{
    return (policy !=  nullptr && policy->has_data());
}

bool Isis::Instances::Instance::Srms::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Isis::Instances::Instance::Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Isis::Instances::Instance::Srms::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
}

void Isis::Instances::Instance::Srms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>())
	,policy_ipv6(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>())
{
    policy_ipv4->parent = this;
    policy_ipv6->parent = this;

    yang_name = "policy"; yang_parent_name = "srms"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::~Policy()
{
}

bool Isis::Instances::Instance::Srms::Policy::has_data() const
{
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 == nullptr)
        {
            policy_ipv4 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>();
        }
        return policy_ipv4;
    }

    if(child_yang_name == "policy-ipv6")
    {
        if(policy_ipv6 == nullptr)
        {
            policy_ipv6 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>();
        }
        return policy_ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_ipv4 != nullptr)
    {
        children["policy-ipv4"] = policy_ipv4;
    }

    if(policy_ipv6 != nullptr)
    {
        children["policy-ipv6"] = policy_ipv6;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4" || name == "policy-ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
	,policy_ipv4_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
{
    policy_ipv4_active->parent = this;
    policy_ipv4_backup->parent = this;

    yang_name = "policy-ipv4"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_data() const
{
    return (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active == nullptr)
        {
            policy_ipv4_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
        }
        return policy_ipv4_active;
    }

    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup == nullptr)
        {
            policy_ipv4_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
        }
        return policy_ipv4_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_ipv4_active != nullptr)
    {
        children["policy-ipv4-active"] = policy_ipv4_active;
    }

    if(policy_ipv4_backup != nullptr)
    {
        children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4-active" || name == "policy-ipv4-backup")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
{

    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
{

    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6()
    :
    policy_ipv6_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>())
	,policy_ipv6_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>())
{
    policy_ipv6_active->parent = this;
    policy_ipv6_backup->parent = this;

    yang_name = "policy-ipv6"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::~PolicyIpv6()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_data() const
{
    return (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_data())
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_operation())
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv6-active")
    {
        if(policy_ipv6_active == nullptr)
        {
            policy_ipv6_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>();
        }
        return policy_ipv6_active;
    }

    if(child_yang_name == "policy-ipv6-backup")
    {
        if(policy_ipv6_backup == nullptr)
        {
            policy_ipv6_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>();
        }
        return policy_ipv6_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_ipv6_active != nullptr)
    {
        children["policy-ipv6-active"] = policy_ipv6_active;
    }

    if(policy_ipv6_backup != nullptr)
    {
        children["policy-ipv6-backup"] = policy_ipv6_backup;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv6-active" || name == "policy-ipv6-backup")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyIpv6Active()
{

    yang_name = "policy-ipv6-active"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::~PolicyIpv6Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-active"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyIpv6Backup()
{

    yang_name = "policy-ipv6-backup"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::~PolicyIpv6Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::StatisticsGlobal()
    :
    statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics>())
{
    statistics->parent = this;

    yang_name = "statistics-global"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::~StatisticsGlobal()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : per_area_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::StatisticsGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::StatisticsGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-area-data" || name == "statistics")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
    	,
    statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics>())
{
    statistics->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "statistics-global"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::has_data() const
{
    for (std::size_t index=0; index<per_topology_data.size(); index++)
    {
        if(per_topology_data[index]->has_data())
            return true;
    }
    return level.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::has_operation() const
{
    for (std::size_t index=0; index<per_topology_data.size(); index++)
    {
        if(per_topology_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-topology-data")
    {
        for(auto const & c : per_topology_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData>();
        c->parent = this;
        per_topology_data.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : per_topology_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-topology-data" || name == "statistics" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::PerTopologyData()
    :
    id(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id>())
	,statistics(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics>())
{
    id->parent = this;
    statistics->parent = this;

    yang_name = "per-topology-data"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::~PerTopologyData()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id>();
        }
        return id;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "statistics")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "id"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::~Id()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::Statistics()
    :
    ispf_run_count{YType::uint32, "ispf-run-count"},
    nhc_run_count{YType::uint32, "nhc-run-count"},
    periodic_run_count{YType::uint32, "periodic-run-count"},
    prc_run_count{YType::uint32, "prc-run-count"},
    spf_run_count{YType::uint32, "spf-run-count"}
{

    yang_name = "statistics"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_data() const
{
    return ispf_run_count.is_set
	|| nhc_run_count.is_set
	|| periodic_run_count.is_set
	|| prc_run_count.is_set
	|| spf_run_count.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ispf_run_count.yfilter)
	|| ydk::is_set(nhc_run_count.yfilter)
	|| ydk::is_set(periodic_run_count.yfilter)
	|| ydk::is_set(prc_run_count.yfilter)
	|| ydk::is_set(spf_run_count.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ispf_run_count.is_set || is_set(ispf_run_count.yfilter)) leaf_name_data.push_back(ispf_run_count.get_name_leafdata());
    if (nhc_run_count.is_set || is_set(nhc_run_count.yfilter)) leaf_name_data.push_back(nhc_run_count.get_name_leafdata());
    if (periodic_run_count.is_set || is_set(periodic_run_count.yfilter)) leaf_name_data.push_back(periodic_run_count.get_name_leafdata());
    if (prc_run_count.is_set || is_set(prc_run_count.yfilter)) leaf_name_data.push_back(prc_run_count.get_name_leafdata());
    if (spf_run_count.is_set || is_set(spf_run_count.yfilter)) leaf_name_data.push_back(spf_run_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ispf-run-count")
    {
        ispf_run_count = value;
        ispf_run_count.value_namespace = name_space;
        ispf_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhc-run-count")
    {
        nhc_run_count = value;
        nhc_run_count.value_namespace = name_space;
        nhc_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-run-count")
    {
        periodic_run_count = value;
        periodic_run_count.value_namespace = name_space;
        periodic_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prc-run-count")
    {
        prc_run_count = value;
        prc_run_count.value_namespace = name_space;
        prc_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-count")
    {
        spf_run_count = value;
        spf_run_count.value_namespace = name_space;
        spf_run_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ispf-run-count")
    {
        ispf_run_count.yfilter = yfilter;
    }
    if(value_path == "nhc-run-count")
    {
        nhc_run_count.yfilter = yfilter;
    }
    if(value_path == "periodic-run-count")
    {
        periodic_run_count.yfilter = yfilter;
    }
    if(value_path == "prc-run-count")
    {
        prc_run_count.yfilter = yfilter;
    }
    if(value_path == "spf-run-count")
    {
        spf_run_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ispf-run-count" || name == "nhc-run-count" || name == "periodic-run-count" || name == "prc-run-count" || name == "spf-run-count")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::Statistics()
    :
    system_lsp_build_count{YType::uint32, "system-lsp-build-count"},
    system_lsp_refresh_count{YType::uint32, "system-lsp-refresh-count"}
{

    yang_name = "statistics"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::has_data() const
{
    return system_lsp_build_count.is_set
	|| system_lsp_refresh_count.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_lsp_build_count.yfilter)
	|| ydk::is_set(system_lsp_refresh_count.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_lsp_build_count.is_set || is_set(system_lsp_build_count.yfilter)) leaf_name_data.push_back(system_lsp_build_count.get_name_leafdata());
    if (system_lsp_refresh_count.is_set || is_set(system_lsp_refresh_count.yfilter)) leaf_name_data.push_back(system_lsp_refresh_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-lsp-build-count")
    {
        system_lsp_build_count = value;
        system_lsp_build_count.value_namespace = name_space;
        system_lsp_build_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-lsp-refresh-count")
    {
        system_lsp_refresh_count = value;
        system_lsp_refresh_count.value_namespace = name_space;
        system_lsp_refresh_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-lsp-build-count")
    {
        system_lsp_build_count.yfilter = yfilter;
    }
    if(value_path == "system-lsp-refresh-count")
    {
        system_lsp_refresh_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-lsp-build-count" || name == "system-lsp-refresh-count")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::Statistics()
    :
    avg_csnp_recv_rate{YType::uint32, "avg-csnp-recv-rate"},
    avg_csnp_send_rate{YType::uint32, "avg-csnp-send-rate"},
    avg_hello_recv_rate{YType::uint32, "avg-hello-recv-rate"},
    avg_hello_send_rate{YType::uint32, "avg-hello-send-rate"},
    avg_lsp_recv_rate{YType::uint32, "avg-lsp-recv-rate"},
    avg_lsp_send_rate{YType::uint32, "avg-lsp-send-rate"},
    avg_psnp_recv_rate{YType::uint32, "avg-psnp-recv-rate"},
    avg_psnp_send_rate{YType::uint32, "avg-psnp-send-rate"},
    fast_csnp_cache_update_count{YType::uint32, "fast-csnp-cache-update-count"},
    fast_csnp_lookup_count{YType::uint32, "fast-csnp-lookup-count"},
    fast_csnp_lookup_hit_count{YType::uint32, "fast-csnp-lookup-hit-count"},
    fast_psnp_lookup_count{YType::uint32, "fast-psnp-lookup-count"},
    fast_psnp_lookup_hit_count{YType::uint32, "fast-psnp-lookup-hit-count"},
    iih_dropped_count{YType::uint32, "iih-dropped-count"},
    invalid_checksum_lsp_count{YType::uint32, "invalid-checksum-lsp-count"},
    lsp_dropped_count{YType::uint32, "lsp-dropped-count"},
    maximum_iih_queue_length{YType::uint32, "maximum-iih-queue-length"},
    maximum_pdu_queue_length{YType::uint32, "maximum-pdu-queue-length"},
    pdu_queue_length{YType::uint32, "pdu-queue-length"},
    snp_dropped_count{YType::uint32, "snp-dropped-count"},
    zero_holdtime_lsp_count{YType::uint32, "zero-holdtime-lsp-count"}
    	,
    avg_csnp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime>())
	,avg_csnp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime>())
	,avg_hello_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime>())
	,avg_hello_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime>())
	,avg_lsp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime>())
	,avg_lsp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime>())
	,avg_psnp_process_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime>())
	,avg_psnp_transmit_time(std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime>())
{
    avg_csnp_process_time->parent = this;
    avg_csnp_transmit_time->parent = this;
    avg_hello_process_time->parent = this;
    avg_hello_transmit_time->parent = this;
    avg_lsp_process_time->parent = this;
    avg_lsp_transmit_time->parent = this;
    avg_psnp_process_time->parent = this;
    avg_psnp_transmit_time->parent = this;

    yang_name = "statistics"; yang_parent_name = "statistics-global"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_data() const
{
    return avg_csnp_recv_rate.is_set
	|| avg_csnp_send_rate.is_set
	|| avg_hello_recv_rate.is_set
	|| avg_hello_send_rate.is_set
	|| avg_lsp_recv_rate.is_set
	|| avg_lsp_send_rate.is_set
	|| avg_psnp_recv_rate.is_set
	|| avg_psnp_send_rate.is_set
	|| fast_csnp_cache_update_count.is_set
	|| fast_csnp_lookup_count.is_set
	|| fast_csnp_lookup_hit_count.is_set
	|| fast_psnp_lookup_count.is_set
	|| fast_psnp_lookup_hit_count.is_set
	|| iih_dropped_count.is_set
	|| invalid_checksum_lsp_count.is_set
	|| lsp_dropped_count.is_set
	|| maximum_iih_queue_length.is_set
	|| maximum_pdu_queue_length.is_set
	|| pdu_queue_length.is_set
	|| snp_dropped_count.is_set
	|| zero_holdtime_lsp_count.is_set
	|| (avg_csnp_process_time !=  nullptr && avg_csnp_process_time->has_data())
	|| (avg_csnp_transmit_time !=  nullptr && avg_csnp_transmit_time->has_data())
	|| (avg_hello_process_time !=  nullptr && avg_hello_process_time->has_data())
	|| (avg_hello_transmit_time !=  nullptr && avg_hello_transmit_time->has_data())
	|| (avg_lsp_process_time !=  nullptr && avg_lsp_process_time->has_data())
	|| (avg_lsp_transmit_time !=  nullptr && avg_lsp_transmit_time->has_data())
	|| (avg_psnp_process_time !=  nullptr && avg_psnp_process_time->has_data())
	|| (avg_psnp_transmit_time !=  nullptr && avg_psnp_transmit_time->has_data());
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avg_csnp_recv_rate.yfilter)
	|| ydk::is_set(avg_csnp_send_rate.yfilter)
	|| ydk::is_set(avg_hello_recv_rate.yfilter)
	|| ydk::is_set(avg_hello_send_rate.yfilter)
	|| ydk::is_set(avg_lsp_recv_rate.yfilter)
	|| ydk::is_set(avg_lsp_send_rate.yfilter)
	|| ydk::is_set(avg_psnp_recv_rate.yfilter)
	|| ydk::is_set(avg_psnp_send_rate.yfilter)
	|| ydk::is_set(fast_csnp_cache_update_count.yfilter)
	|| ydk::is_set(fast_csnp_lookup_count.yfilter)
	|| ydk::is_set(fast_csnp_lookup_hit_count.yfilter)
	|| ydk::is_set(fast_psnp_lookup_count.yfilter)
	|| ydk::is_set(fast_psnp_lookup_hit_count.yfilter)
	|| ydk::is_set(iih_dropped_count.yfilter)
	|| ydk::is_set(invalid_checksum_lsp_count.yfilter)
	|| ydk::is_set(lsp_dropped_count.yfilter)
	|| ydk::is_set(maximum_iih_queue_length.yfilter)
	|| ydk::is_set(maximum_pdu_queue_length.yfilter)
	|| ydk::is_set(pdu_queue_length.yfilter)
	|| ydk::is_set(snp_dropped_count.yfilter)
	|| ydk::is_set(zero_holdtime_lsp_count.yfilter)
	|| (avg_csnp_process_time !=  nullptr && avg_csnp_process_time->has_operation())
	|| (avg_csnp_transmit_time !=  nullptr && avg_csnp_transmit_time->has_operation())
	|| (avg_hello_process_time !=  nullptr && avg_hello_process_time->has_operation())
	|| (avg_hello_transmit_time !=  nullptr && avg_hello_transmit_time->has_operation())
	|| (avg_lsp_process_time !=  nullptr && avg_lsp_process_time->has_operation())
	|| (avg_lsp_transmit_time !=  nullptr && avg_lsp_transmit_time->has_operation())
	|| (avg_psnp_process_time !=  nullptr && avg_psnp_process_time->has_operation())
	|| (avg_psnp_transmit_time !=  nullptr && avg_psnp_transmit_time->has_operation());
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avg_csnp_recv_rate.is_set || is_set(avg_csnp_recv_rate.yfilter)) leaf_name_data.push_back(avg_csnp_recv_rate.get_name_leafdata());
    if (avg_csnp_send_rate.is_set || is_set(avg_csnp_send_rate.yfilter)) leaf_name_data.push_back(avg_csnp_send_rate.get_name_leafdata());
    if (avg_hello_recv_rate.is_set || is_set(avg_hello_recv_rate.yfilter)) leaf_name_data.push_back(avg_hello_recv_rate.get_name_leafdata());
    if (avg_hello_send_rate.is_set || is_set(avg_hello_send_rate.yfilter)) leaf_name_data.push_back(avg_hello_send_rate.get_name_leafdata());
    if (avg_lsp_recv_rate.is_set || is_set(avg_lsp_recv_rate.yfilter)) leaf_name_data.push_back(avg_lsp_recv_rate.get_name_leafdata());
    if (avg_lsp_send_rate.is_set || is_set(avg_lsp_send_rate.yfilter)) leaf_name_data.push_back(avg_lsp_send_rate.get_name_leafdata());
    if (avg_psnp_recv_rate.is_set || is_set(avg_psnp_recv_rate.yfilter)) leaf_name_data.push_back(avg_psnp_recv_rate.get_name_leafdata());
    if (avg_psnp_send_rate.is_set || is_set(avg_psnp_send_rate.yfilter)) leaf_name_data.push_back(avg_psnp_send_rate.get_name_leafdata());
    if (fast_csnp_cache_update_count.is_set || is_set(fast_csnp_cache_update_count.yfilter)) leaf_name_data.push_back(fast_csnp_cache_update_count.get_name_leafdata());
    if (fast_csnp_lookup_count.is_set || is_set(fast_csnp_lookup_count.yfilter)) leaf_name_data.push_back(fast_csnp_lookup_count.get_name_leafdata());
    if (fast_csnp_lookup_hit_count.is_set || is_set(fast_csnp_lookup_hit_count.yfilter)) leaf_name_data.push_back(fast_csnp_lookup_hit_count.get_name_leafdata());
    if (fast_psnp_lookup_count.is_set || is_set(fast_psnp_lookup_count.yfilter)) leaf_name_data.push_back(fast_psnp_lookup_count.get_name_leafdata());
    if (fast_psnp_lookup_hit_count.is_set || is_set(fast_psnp_lookup_hit_count.yfilter)) leaf_name_data.push_back(fast_psnp_lookup_hit_count.get_name_leafdata());
    if (iih_dropped_count.is_set || is_set(iih_dropped_count.yfilter)) leaf_name_data.push_back(iih_dropped_count.get_name_leafdata());
    if (invalid_checksum_lsp_count.is_set || is_set(invalid_checksum_lsp_count.yfilter)) leaf_name_data.push_back(invalid_checksum_lsp_count.get_name_leafdata());
    if (lsp_dropped_count.is_set || is_set(lsp_dropped_count.yfilter)) leaf_name_data.push_back(lsp_dropped_count.get_name_leafdata());
    if (maximum_iih_queue_length.is_set || is_set(maximum_iih_queue_length.yfilter)) leaf_name_data.push_back(maximum_iih_queue_length.get_name_leafdata());
    if (maximum_pdu_queue_length.is_set || is_set(maximum_pdu_queue_length.yfilter)) leaf_name_data.push_back(maximum_pdu_queue_length.get_name_leafdata());
    if (pdu_queue_length.is_set || is_set(pdu_queue_length.yfilter)) leaf_name_data.push_back(pdu_queue_length.get_name_leafdata());
    if (snp_dropped_count.is_set || is_set(snp_dropped_count.yfilter)) leaf_name_data.push_back(snp_dropped_count.get_name_leafdata());
    if (zero_holdtime_lsp_count.is_set || is_set(zero_holdtime_lsp_count.yfilter)) leaf_name_data.push_back(zero_holdtime_lsp_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avg-csnp-process-time")
    {
        if(avg_csnp_process_time == nullptr)
        {
            avg_csnp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime>();
        }
        return avg_csnp_process_time;
    }

    if(child_yang_name == "avg-csnp-transmit-time")
    {
        if(avg_csnp_transmit_time == nullptr)
        {
            avg_csnp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime>();
        }
        return avg_csnp_transmit_time;
    }

    if(child_yang_name == "avg-hello-process-time")
    {
        if(avg_hello_process_time == nullptr)
        {
            avg_hello_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime>();
        }
        return avg_hello_process_time;
    }

    if(child_yang_name == "avg-hello-transmit-time")
    {
        if(avg_hello_transmit_time == nullptr)
        {
            avg_hello_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime>();
        }
        return avg_hello_transmit_time;
    }

    if(child_yang_name == "avg-lsp-process-time")
    {
        if(avg_lsp_process_time == nullptr)
        {
            avg_lsp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime>();
        }
        return avg_lsp_process_time;
    }

    if(child_yang_name == "avg-lsp-transmit-time")
    {
        if(avg_lsp_transmit_time == nullptr)
        {
            avg_lsp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime>();
        }
        return avg_lsp_transmit_time;
    }

    if(child_yang_name == "avg-psnp-process-time")
    {
        if(avg_psnp_process_time == nullptr)
        {
            avg_psnp_process_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime>();
        }
        return avg_psnp_process_time;
    }

    if(child_yang_name == "avg-psnp-transmit-time")
    {
        if(avg_psnp_transmit_time == nullptr)
        {
            avg_psnp_transmit_time = std::make_shared<Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime>();
        }
        return avg_psnp_transmit_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(avg_csnp_process_time != nullptr)
    {
        children["avg-csnp-process-time"] = avg_csnp_process_time;
    }

    if(avg_csnp_transmit_time != nullptr)
    {
        children["avg-csnp-transmit-time"] = avg_csnp_transmit_time;
    }

    if(avg_hello_process_time != nullptr)
    {
        children["avg-hello-process-time"] = avg_hello_process_time;
    }

    if(avg_hello_transmit_time != nullptr)
    {
        children["avg-hello-transmit-time"] = avg_hello_transmit_time;
    }

    if(avg_lsp_process_time != nullptr)
    {
        children["avg-lsp-process-time"] = avg_lsp_process_time;
    }

    if(avg_lsp_transmit_time != nullptr)
    {
        children["avg-lsp-transmit-time"] = avg_lsp_transmit_time;
    }

    if(avg_psnp_process_time != nullptr)
    {
        children["avg-psnp-process-time"] = avg_psnp_process_time;
    }

    if(avg_psnp_transmit_time != nullptr)
    {
        children["avg-psnp-transmit-time"] = avg_psnp_transmit_time;
    }

    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avg-csnp-recv-rate")
    {
        avg_csnp_recv_rate = value;
        avg_csnp_recv_rate.value_namespace = name_space;
        avg_csnp_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-csnp-send-rate")
    {
        avg_csnp_send_rate = value;
        avg_csnp_send_rate.value_namespace = name_space;
        avg_csnp_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-hello-recv-rate")
    {
        avg_hello_recv_rate = value;
        avg_hello_recv_rate.value_namespace = name_space;
        avg_hello_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-hello-send-rate")
    {
        avg_hello_send_rate = value;
        avg_hello_send_rate.value_namespace = name_space;
        avg_hello_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-lsp-recv-rate")
    {
        avg_lsp_recv_rate = value;
        avg_lsp_recv_rate.value_namespace = name_space;
        avg_lsp_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-lsp-send-rate")
    {
        avg_lsp_send_rate = value;
        avg_lsp_send_rate.value_namespace = name_space;
        avg_lsp_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-psnp-recv-rate")
    {
        avg_psnp_recv_rate = value;
        avg_psnp_recv_rate.value_namespace = name_space;
        avg_psnp_recv_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg-psnp-send-rate")
    {
        avg_psnp_send_rate = value;
        avg_psnp_send_rate.value_namespace = name_space;
        avg_psnp_send_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-csnp-cache-update-count")
    {
        fast_csnp_cache_update_count = value;
        fast_csnp_cache_update_count.value_namespace = name_space;
        fast_csnp_cache_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-csnp-lookup-count")
    {
        fast_csnp_lookup_count = value;
        fast_csnp_lookup_count.value_namespace = name_space;
        fast_csnp_lookup_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-csnp-lookup-hit-count")
    {
        fast_csnp_lookup_hit_count = value;
        fast_csnp_lookup_hit_count.value_namespace = name_space;
        fast_csnp_lookup_hit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-psnp-lookup-count")
    {
        fast_psnp_lookup_count = value;
        fast_psnp_lookup_count.value_namespace = name_space;
        fast_psnp_lookup_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-psnp-lookup-hit-count")
    {
        fast_psnp_lookup_hit_count = value;
        fast_psnp_lookup_hit_count.value_namespace = name_space;
        fast_psnp_lookup_hit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iih-dropped-count")
    {
        iih_dropped_count = value;
        iih_dropped_count.value_namespace = name_space;
        iih_dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-checksum-lsp-count")
    {
        invalid_checksum_lsp_count = value;
        invalid_checksum_lsp_count.value_namespace = name_space;
        invalid_checksum_lsp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-dropped-count")
    {
        lsp_dropped_count = value;
        lsp_dropped_count.value_namespace = name_space;
        lsp_dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-iih-queue-length")
    {
        maximum_iih_queue_length = value;
        maximum_iih_queue_length.value_namespace = name_space;
        maximum_iih_queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-pdu-queue-length")
    {
        maximum_pdu_queue_length = value;
        maximum_pdu_queue_length.value_namespace = name_space;
        maximum_pdu_queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-queue-length")
    {
        pdu_queue_length = value;
        pdu_queue_length.value_namespace = name_space;
        pdu_queue_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snp-dropped-count")
    {
        snp_dropped_count = value;
        snp_dropped_count.value_namespace = name_space;
        snp_dropped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-holdtime-lsp-count")
    {
        zero_holdtime_lsp_count = value;
        zero_holdtime_lsp_count.value_namespace = name_space;
        zero_holdtime_lsp_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avg-csnp-recv-rate")
    {
        avg_csnp_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-csnp-send-rate")
    {
        avg_csnp_send_rate.yfilter = yfilter;
    }
    if(value_path == "avg-hello-recv-rate")
    {
        avg_hello_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-hello-send-rate")
    {
        avg_hello_send_rate.yfilter = yfilter;
    }
    if(value_path == "avg-lsp-recv-rate")
    {
        avg_lsp_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-lsp-send-rate")
    {
        avg_lsp_send_rate.yfilter = yfilter;
    }
    if(value_path == "avg-psnp-recv-rate")
    {
        avg_psnp_recv_rate.yfilter = yfilter;
    }
    if(value_path == "avg-psnp-send-rate")
    {
        avg_psnp_send_rate.yfilter = yfilter;
    }
    if(value_path == "fast-csnp-cache-update-count")
    {
        fast_csnp_cache_update_count.yfilter = yfilter;
    }
    if(value_path == "fast-csnp-lookup-count")
    {
        fast_csnp_lookup_count.yfilter = yfilter;
    }
    if(value_path == "fast-csnp-lookup-hit-count")
    {
        fast_csnp_lookup_hit_count.yfilter = yfilter;
    }
    if(value_path == "fast-psnp-lookup-count")
    {
        fast_psnp_lookup_count.yfilter = yfilter;
    }
    if(value_path == "fast-psnp-lookup-hit-count")
    {
        fast_psnp_lookup_hit_count.yfilter = yfilter;
    }
    if(value_path == "iih-dropped-count")
    {
        iih_dropped_count.yfilter = yfilter;
    }
    if(value_path == "invalid-checksum-lsp-count")
    {
        invalid_checksum_lsp_count.yfilter = yfilter;
    }
    if(value_path == "lsp-dropped-count")
    {
        lsp_dropped_count.yfilter = yfilter;
    }
    if(value_path == "maximum-iih-queue-length")
    {
        maximum_iih_queue_length.yfilter = yfilter;
    }
    if(value_path == "maximum-pdu-queue-length")
    {
        maximum_pdu_queue_length.yfilter = yfilter;
    }
    if(value_path == "pdu-queue-length")
    {
        pdu_queue_length.yfilter = yfilter;
    }
    if(value_path == "snp-dropped-count")
    {
        snp_dropped_count.yfilter = yfilter;
    }
    if(value_path == "zero-holdtime-lsp-count")
    {
        zero_holdtime_lsp_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avg-csnp-process-time" || name == "avg-csnp-transmit-time" || name == "avg-hello-process-time" || name == "avg-hello-transmit-time" || name == "avg-lsp-process-time" || name == "avg-lsp-transmit-time" || name == "avg-psnp-process-time" || name == "avg-psnp-transmit-time" || name == "avg-csnp-recv-rate" || name == "avg-csnp-send-rate" || name == "avg-hello-recv-rate" || name == "avg-hello-send-rate" || name == "avg-lsp-recv-rate" || name == "avg-lsp-send-rate" || name == "avg-psnp-recv-rate" || name == "avg-psnp-send-rate" || name == "fast-csnp-cache-update-count" || name == "fast-csnp-lookup-count" || name == "fast-csnp-lookup-hit-count" || name == "fast-psnp-lookup-count" || name == "fast-psnp-lookup-hit-count" || name == "iih-dropped-count" || name == "invalid-checksum-lsp-count" || name == "lsp-dropped-count" || name == "maximum-iih-queue-length" || name == "maximum-pdu-queue-length" || name == "pdu-queue-length" || name == "snp-dropped-count" || name == "zero-holdtime-lsp-count")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::AvgCsnpProcessTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "avg-csnp-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::~AvgCsnpProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-csnp-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::AvgCsnpTransmitTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "avg-csnp-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::~AvgCsnpTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-csnp-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::AvgHelloProcessTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "avg-hello-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::~AvgHelloProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-hello-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::AvgHelloTransmitTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "avg-hello-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::~AvgHelloTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-hello-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::AvgLspProcessTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "avg-lsp-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::~AvgLspProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-lsp-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::AvgLspTransmitTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "avg-lsp-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::~AvgLspTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-lsp-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::AvgPsnpProcessTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "avg-psnp-process-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::~AvgPsnpProcessTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-psnp-process-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::AvgPsnpTransmitTime()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "avg-psnp-transmit-time"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::~AvgPsnpTransmitTime()
{
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avg-psnp-transmit-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topologies()
{

    yang_name = "topologies"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::~Topologies()
{
}

bool Isis::Instances::Instance::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Topology()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
    	,
    frr_summary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary>())
	,ipv4_routes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes>())
	,ipv4frr_backups(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups>())
	,ipv6_routes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes>())
	,ipv6frr_backups(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups>())
	,topology_levels(std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels>())
{
    frr_summary->parent = this;
    ipv4_routes->parent = this;
    ipv4frr_backups->parent = this;
    ipv6_routes->parent = this;
    ipv6frr_backups->parent = this;
    topology_levels->parent = this;

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::~Topology()
{
}

bool Isis::Instances::Instance::Topologies::Topology::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| (frr_summary !=  nullptr && frr_summary->has_data())
	|| (ipv4_routes !=  nullptr && ipv4_routes->has_data())
	|| (ipv4frr_backups !=  nullptr && ipv4frr_backups->has_data())
	|| (ipv6_routes !=  nullptr && ipv6_routes->has_data())
	|| (ipv6frr_backups !=  nullptr && ipv6frr_backups->has_data())
	|| (topology_levels !=  nullptr && topology_levels->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| (frr_summary !=  nullptr && frr_summary->has_operation())
	|| (ipv4_routes !=  nullptr && ipv4_routes->has_operation())
	|| (ipv4frr_backups !=  nullptr && ipv4frr_backups->has_operation())
	|| (ipv6_routes !=  nullptr && ipv6_routes->has_operation())
	|| (ipv6frr_backups !=  nullptr && ipv6frr_backups->has_operation())
	|| (topology_levels !=  nullptr && topology_levels->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-summary")
    {
        if(frr_summary == nullptr)
        {
            frr_summary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary>();
        }
        return frr_summary;
    }

    if(child_yang_name == "ipv4-routes")
    {
        if(ipv4_routes == nullptr)
        {
            ipv4_routes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4Routes>();
        }
        return ipv4_routes;
    }

    if(child_yang_name == "ipv4frr-backups")
    {
        if(ipv4frr_backups == nullptr)
        {
            ipv4frr_backups = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups>();
        }
        return ipv4frr_backups;
    }

    if(child_yang_name == "ipv6-routes")
    {
        if(ipv6_routes == nullptr)
        {
            ipv6_routes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6Routes>();
        }
        return ipv6_routes;
    }

    if(child_yang_name == "ipv6frr-backups")
    {
        if(ipv6frr_backups == nullptr)
        {
            ipv6frr_backups = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups>();
        }
        return ipv6frr_backups;
    }

    if(child_yang_name == "topology-levels")
    {
        if(topology_levels == nullptr)
        {
            topology_levels = std::make_shared<Isis::Instances::Instance::Topologies::Topology::TopologyLevels>();
        }
        return topology_levels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_summary != nullptr)
    {
        children["frr-summary"] = frr_summary;
    }

    if(ipv4_routes != nullptr)
    {
        children["ipv4-routes"] = ipv4_routes;
    }

    if(ipv4frr_backups != nullptr)
    {
        children["ipv4frr-backups"] = ipv4frr_backups;
    }

    if(ipv6_routes != nullptr)
    {
        children["ipv6-routes"] = ipv6_routes;
    }

    if(ipv6frr_backups != nullptr)
    {
        children["ipv6frr-backups"] = ipv6frr_backups;
    }

    if(topology_levels != nullptr)
    {
        children["topology-levels"] = topology_levels;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-summary" || name == "ipv4-routes" || name == "ipv4frr-backups" || name == "ipv6-routes" || name == "ipv6frr-backups" || name == "topology-levels" || name == "af-name" || name == "saf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::FrrSummary()
    :
    level1_prefixes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes>())
	,level2_prefixes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes>())
	,unreachable_prefixes(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes>())
{
    level1_prefixes->parent = this;
    level2_prefixes->parent = this;
    unreachable_prefixes->parent = this;

    yang_name = "frr-summary"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::~FrrSummary()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::has_data() const
{
    return (level1_prefixes !=  nullptr && level1_prefixes->has_data())
	|| (level2_prefixes !=  nullptr && level2_prefixes->has_data())
	|| (unreachable_prefixes !=  nullptr && unreachable_prefixes->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::has_operation() const
{
    return is_set(yfilter)
	|| (level1_prefixes !=  nullptr && level1_prefixes->has_operation())
	|| (level2_prefixes !=  nullptr && level2_prefixes->has_operation())
	|| (unreachable_prefixes !=  nullptr && unreachable_prefixes->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level1-prefixes")
    {
        if(level1_prefixes == nullptr)
        {
            level1_prefixes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes>();
        }
        return level1_prefixes;
    }

    if(child_yang_name == "level2-prefixes")
    {
        if(level2_prefixes == nullptr)
        {
            level2_prefixes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes>();
        }
        return level2_prefixes;
    }

    if(child_yang_name == "unreachable-prefixes")
    {
        if(unreachable_prefixes == nullptr)
        {
            unreachable_prefixes = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes>();
        }
        return unreachable_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level1_prefixes != nullptr)
    {
        children["level1-prefixes"] = level1_prefixes;
    }

    if(level2_prefixes != nullptr)
    {
        children["level2-prefixes"] = level2_prefixes;
    }

    if(unreachable_prefixes != nullptr)
    {
        children["unreachable-prefixes"] = unreachable_prefixes;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level1-prefixes" || name == "level2-prefixes" || name == "unreachable-prefixes")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Level1Prefixes()
    :
    all_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected>())
	,some_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected>())
	,unprotected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected>())
{
    all_paths_protected->parent = this;
    some_paths_protected->parent = this;
    unprotected->parent = this;

    yang_name = "level1-prefixes"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::~Level1Prefixes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::has_data() const
{
    return (all_paths_protected !=  nullptr && all_paths_protected->has_data())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_data())
	|| (unprotected !=  nullptr && unprotected->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| (all_paths_protected !=  nullptr && all_paths_protected->has_operation())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_operation())
	|| (unprotected !=  nullptr && unprotected->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-paths-protected")
    {
        if(all_paths_protected == nullptr)
        {
            all_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected>();
        }
        return all_paths_protected;
    }

    if(child_yang_name == "some-paths-protected")
    {
        if(some_paths_protected == nullptr)
        {
            some_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected>();
        }
        return some_paths_protected;
    }

    if(child_yang_name == "unprotected")
    {
        if(unprotected == nullptr)
        {
            unprotected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected>();
        }
        return unprotected;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_paths_protected != nullptr)
    {
        children["all-paths-protected"] = all_paths_protected;
    }

    if(some_paths_protected != nullptr)
    {
        children["some-paths-protected"] = some_paths_protected;
    }

    if(unprotected != nullptr)
    {
        children["unprotected"] = unprotected;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-paths-protected" || name == "some-paths-protected" || name == "unprotected")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::AllPathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "all-paths-protected"; yang_parent_name = "level1-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::~AllPathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::SomePathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "some-paths-protected"; yang_parent_name = "level1-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::~SomePathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "some-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::Unprotected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "unprotected"; yang_parent_name = "level1-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::~Unprotected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unprotected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Level2Prefixes()
    :
    all_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected>())
	,some_paths_protected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected>())
	,unprotected(std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected>())
{
    all_paths_protected->parent = this;
    some_paths_protected->parent = this;
    unprotected->parent = this;

    yang_name = "level2-prefixes"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::~Level2Prefixes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::has_data() const
{
    return (all_paths_protected !=  nullptr && all_paths_protected->has_data())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_data())
	|| (unprotected !=  nullptr && unprotected->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| (all_paths_protected !=  nullptr && all_paths_protected->has_operation())
	|| (some_paths_protected !=  nullptr && some_paths_protected->has_operation())
	|| (unprotected !=  nullptr && unprotected->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-paths-protected")
    {
        if(all_paths_protected == nullptr)
        {
            all_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected>();
        }
        return all_paths_protected;
    }

    if(child_yang_name == "some-paths-protected")
    {
        if(some_paths_protected == nullptr)
        {
            some_paths_protected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected>();
        }
        return some_paths_protected;
    }

    if(child_yang_name == "unprotected")
    {
        if(unprotected == nullptr)
        {
            unprotected = std::make_shared<Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected>();
        }
        return unprotected;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_paths_protected != nullptr)
    {
        children["all-paths-protected"] = all_paths_protected;
    }

    if(some_paths_protected != nullptr)
    {
        children["some-paths-protected"] = some_paths_protected;
    }

    if(unprotected != nullptr)
    {
        children["unprotected"] = unprotected;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-paths-protected" || name == "some-paths-protected" || name == "unprotected")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::AllPathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "all-paths-protected"; yang_parent_name = "level2-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::~AllPathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::SomePathsProtected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "some-paths-protected"; yang_parent_name = "level2-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::~SomePathsProtected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "some-paths-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::Unprotected()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "unprotected"; yang_parent_name = "level2-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::~Unprotected()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unprotected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::UnreachablePrefixes()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    low{YType::uint32, "low"},
    medium{YType::uint32, "medium"}
{

    yang_name = "unreachable-prefixes"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::~UnreachablePrefixes()
{
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| low.is_set
	|| medium.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(medium.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "low" || name == "medium")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackups()
{

    yang_name = "ipv4frr-backups"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::~Ipv4FrrBackups()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::has_data() const
{
    for (std::size_t index=0; index<ipv4frr_backup.size(); index++)
    {
        if(ipv4frr_backup[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::has_operation() const
{
    for (std::size_t index=0; index<ipv4frr_backup.size(); index++)
    {
        if(ipv4frr_backup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4frr-backups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4frr-backup")
    {
        for(auto const & c : ipv4frr_backup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup>();
        c->parent = this;
        ipv4frr_backup.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4frr_backup)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4frr-backup")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::Ipv4FrrBackup()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    connected_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus>())
	,native_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus>())
	,redistributed_status(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus>())
{
    connected_status->parent = this;
    native_status->parent = this;
    redistributed_status->parent = this;

    yang_name = "ipv4frr-backup"; yang_parent_name = "ipv4frr-backups"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::~Ipv4FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::has_data() const
{
    for (std::size_t index=0; index<per_level_advertising_detail.size(); index++)
    {
        if(per_level_advertising_detail[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| (connected_status !=  nullptr && connected_status->has_data())
	|| (native_status !=  nullptr && native_status->has_data())
	|| (redistributed_status !=  nullptr && redistributed_status->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<per_level_advertising_detail.size(); index++)
    {
        if(per_level_advertising_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (connected_status !=  nullptr && connected_status->has_operation())
	|| (native_status !=  nullptr && native_status->has_operation())
	|| (redistributed_status !=  nullptr && redistributed_status->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-status")
    {
        if(connected_status == nullptr)
        {
            connected_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus>();
        }
        return connected_status;
    }

    if(child_yang_name == "native-status")
    {
        if(native_status == nullptr)
        {
            native_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus>();
        }
        return native_status;
    }

    if(child_yang_name == "per-level-advertising-detail")
    {
        for(auto const & c : per_level_advertising_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail>();
        c->parent = this;
        per_level_advertising_detail.push_back(c);
        return c;
    }

    if(child_yang_name == "redistributed-status")
    {
        if(redistributed_status == nullptr)
        {
            redistributed_status = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus>();
        }
        return redistributed_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected_status != nullptr)
    {
        children["connected-status"] = connected_status;
    }

    if(native_status != nullptr)
    {
        children["native-status"] = native_status;
    }

    for (auto const & c : per_level_advertising_detail)
    {
        children[c->get_segment_path()] = c;
    }

    if(redistributed_status != nullptr)
    {
        children["redistributed-status"] = redistributed_status;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-status" || name == "native-status" || name == "per-level-advertising-detail" || name == "redistributed-status" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
    	,
    connected_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails>())
{
    connected_details->parent = this;

    yang_name = "connected-status"; yang_parent_name = "ipv4frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::~ConnectedStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::has_data() const
{
    return is_valid.is_set
	|| (connected_details !=  nullptr && connected_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (connected_details !=  nullptr && connected_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-details")
    {
        if(connected_details == nullptr)
        {
            connected_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails>();
        }
        return connected_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected_details != nullptr)
    {
        children["connected-details"] = connected_details;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-details" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::ConnectedDetails()
{

    yang_name = "connected-details"; yang_parent_name = "connected-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::~ConnectedDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::Interface()
    :
    entry{YType::str, "entry"}
{

    yang_name = "interface"; yang_parent_name = "connected-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::~Interface()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeStatus()
    :
    is_valid{YType::enumeration, "is-valid"}
    	,
    native_details(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails>())
{
    native_details->parent = this;

    yang_name = "native-status"; yang_parent_name = "ipv4frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::~NativeStatus()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::has_data() const
{
    return is_valid.is_set
	|| (native_details !=  nullptr && native_details->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (native_details !=  nullptr && native_details->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "native-details")
    {
        if(native_details == nullptr)
        {
            native_details = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails>();
        }
        return native_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(native_details != nullptr)
    {
        children["native-details"] = native_details;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native-details" || name == "is-valid")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::NativeDetails()
    :
    priority{YType::enumeration, "priority"}
    	,
    primary(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary>())
{
    primary->parent = this;

    yang_name = "native-details"; yang_parent_name = "native-status"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::~NativeDetails()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::has_data() const
{
    for (std::size_t index=0; index<backup.size(); index++)
    {
        if(backup[index]->has_data())
            return true;
    }
    return priority.is_set
	|| (primary !=  nullptr && primary->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::has_operation() const
{
    for (std::size_t index=0; index<backup.size(); index++)
    {
        if(backup[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        for(auto const & c : backup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup>();
        c->parent = this;
        backup.push_back(c);
        return c;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary>();
        }
        return primary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup)
    {
        children[c->get_segment_path()] = c;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "primary" || name == "priority")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Backup()
    :
    administrative_distance{YType::uint16, "administrative-distance"},
    is_external_metric{YType::boolean, "is-external-metric"},
    metric{YType::uint32, "metric"},
    multicast_metric{YType::uint32, "multicast-metric"},
    origin{YType::enumeration, "origin"}
{

    yang_name = "backup"; yang_parent_name = "native-details"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::~Backup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_data())
            return true;
    }
    return administrative_distance.is_set
	|| is_external_metric.is_set
	|| metric.is_set
	|| multicast_metric.is_set
	|| origin.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_path.size(); index++)
    {
        if(multicast_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_source.size(); index++)
    {
        if(multicast_source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srte_path.size(); index++)
    {
        if(srte_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ucmp_next_hop.size(); index++)
    {
        if(ucmp_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(administrative_distance.yfilter)
	|| ydk::is_set(is_external_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(multicast_metric.yfilter)
	|| ydk::is_set(origin.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_distance.is_set || is_set(administrative_distance.yfilter)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());
    if (is_external_metric.is_set || is_set(is_external_metric.yfilter)) leaf_name_data.push_back(is_external_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast_metric.is_set || is_set(multicast_metric.yfilter)) leaf_name_data.push_back(multicast_metric.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-path")
    {
        for(auto const & c : explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(c);
        return c;
    }

    if(child_yang_name == "multicast-path")
    {
        for(auto const & c : multicast_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath>();
        c->parent = this;
        multicast_path.push_back(c);
        return c;
    }

    if(child_yang_name == "multicast-source")
    {
        for(auto const & c : multicast_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource>();
        c->parent = this;
        multicast_source.push_back(c);
        return c;
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source>();
        c->parent = this;
        source.push_back(c);
        return c;
    }

    if(child_yang_name == "srte-path")
    {
        for(auto const & c : srte_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath>();
        c->parent = this;
        srte_path.push_back(c);
        return c;
    }

    if(child_yang_name == "ucmp-next-hop")
    {
        for(auto const & c : ucmp_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop>();
        c->parent = this;
        ucmp_next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : explicit_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : multicast_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : multicast_source)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : source)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srte_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ucmp_next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
        administrative_distance.value_namespace = name_space;
        administrative_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric = value;
        is_external_metric.value_namespace = name_space;
        is_external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric = value;
        multicast_metric.value_namespace = name_space;
        multicast_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "administrative-distance")
    {
        administrative_distance.yfilter = yfilter;
    }
    if(value_path == "is-external-metric")
    {
        is_external_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "multicast-metric")
    {
        multicast_metric.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path" || name == "multicast-path" || name == "multicast-source" || name == "paths" || name == "source" || name == "srte-path" || name == "ucmp-next-hop" || name == "administrative-distance" || name == "is-external-metric" || name == "metric" || name == "multicast-metric" || name == "origin")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::ExplicitPath()
    :
    egress_interface{YType::str, "egress-interface"},
    is_sr_exclude_tunnel_interface{YType::boolean, "is-sr-exclude-tunnel-interface"},
    is_te_tunnel_interface{YType::boolean, "is-te-tunnel-interface"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tag{YType::uint32, "tag"},
    tunnel_interface{YType::str, "tunnel-interface"},
    weight{YType::uint32, "weight"}
    	,
    frr_backup(std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup>())
{
    frr_backup->parent = this;

    yang_name = "explicit-path"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::~ExplicitPath()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::has_data() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_data())
            return true;
    }
    return egress_interface.is_set
	|| is_sr_exclude_tunnel_interface.is_set
	|| is_te_tunnel_interface.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| segment_routing_sid_value.is_set
	|| tag.is_set
	|| tunnel_interface.is_set
	|| weight.is_set
	|| (frr_backup !=  nullptr && frr_backup->has_data());
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<uloop_explicit.size(); index++)
    {
        if(uloop_explicit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_sr_exclude_tunnel_interface.yfilter)
	|| ydk::is_set(is_te_tunnel_interface.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_interface.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (frr_backup !=  nullptr && frr_backup->has_operation());
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_sr_exclude_tunnel_interface.is_set || is_set(is_sr_exclude_tunnel_interface.yfilter)) leaf_name_data.push_back(is_sr_exclude_tunnel_interface.get_name_leafdata());
    if (is_te_tunnel_interface.is_set || is_set(is_te_tunnel_interface.yfilter)) leaf_name_data.push_back(is_te_tunnel_interface.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_interface.is_set || is_set(tunnel_interface.yfilter)) leaf_name_data.push_back(tunnel_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-backup")
    {
        if(frr_backup == nullptr)
        {
            frr_backup = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup>();
        }
        return frr_backup;
    }

    if(child_yang_name == "uloop-explicit")
    {
        for(auto const & c : uloop_explicit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit>();
        c->parent = this;
        uloop_explicit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_backup != nullptr)
    {
        children["frr-backup"] = frr_backup;
    }

    for (auto const & c : uloop_explicit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface = value;
        is_sr_exclude_tunnel_interface.value_namespace = name_space;
        is_sr_exclude_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface = value;
        is_te_tunnel_interface.value_namespace = name_space;
        is_te_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface = value;
        tunnel_interface.value_namespace = name_space;
        tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-sr-exclude-tunnel-interface")
    {
        is_sr_exclude_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "is-te-tunnel-interface")
    {
        is_te_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface")
    {
        tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-backup" || name == "uloop-explicit" || name == "egress-interface" || name == "is-sr-exclude-tunnel-interface" || name == "is-te-tunnel-interface" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "segment-routing-sid-value" || name == "tag" || name == "tunnel-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::FrrBackup()
    :
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    egress_interface{YType::str, "egress-interface"},
    is_downstream{YType::boolean, "is-downstream"},
    is_epcfrr_lfa{YType::boolean, "is-epcfrr-lfa"},
    is_lc_disjoint{YType::boolean, "is-lc-disjoint"},
    is_node_protecting{YType::boolean, "is-node-protecting"},
    is_primary_path{YType::boolean, "is-primary-path"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_srlg_disjoint{YType::boolean, "is-srlg-disjoint"},
    is_strict_spflfa{YType::boolean, "is-strict-spflfa"},
    is_tunnel_requested{YType::boolean, "is-tunnel-requested"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_snpa{YType::str, "neighbor-snpa"},
    num_sid{YType::uint32, "num-sid"},
    prefix_source_node_id{YType::str, "prefix-source-node-id"},
    remote_lfa_router_id{YType::str, "remote-lfa-router-id"},
    remote_lfa_router_pid{YType::str, "remote-lfa-router-pid"},
    remote_lfa_system_id{YType::str, "remote-lfa-system-id"},
    remote_lfa_system_pid{YType::str, "remote-lfa-system-pid"},
    segment_routing_sid_value{YType::uint32, "segment-routing-sid-value"},
    tilfa_computation{YType::enumeration, "tilfa-computation"},
    total_backup_distance{YType::uint32, "total-backup-distance"},
    tunnel_egress_interface{YType::str, "tunnel-egress-interface"},
    weight{YType::uint32, "weight"}
{

    yang_name = "frr-backup"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::~FrrBackup()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_data())
            return true;
    }
    return backup_repair_list_size.is_set
	|| egress_interface.is_set
	|| is_downstream.is_set
	|| is_epcfrr_lfa.is_set
	|| is_lc_disjoint.is_set
	|| is_node_protecting.is_set
	|| is_primary_path.is_set
	|| is_remote_lfa.is_set
	|| is_srlg_disjoint.is_set
	|| is_strict_spflfa.is_set
	|| is_tunnel_requested.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_snpa.is_set
	|| num_sid.is_set
	|| prefix_source_node_id.is_set
	|| remote_lfa_router_id.is_set
	|| remote_lfa_router_pid.is_set
	|| remote_lfa_system_id.is_set
	|| remote_lfa_system_pid.is_set
	|| segment_routing_sid_value.is_set
	|| tilfa_computation.is_set
	|| total_backup_distance.is_set
	|| tunnel_egress_interface.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<segment_routing_sid_value_entry.size(); index++)
    {
        if(segment_routing_sid_value_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(is_downstream.yfilter)
	|| ydk::is_set(is_epcfrr_lfa.yfilter)
	|| ydk::is_set(is_lc_disjoint.yfilter)
	|| ydk::is_set(is_node_protecting.yfilter)
	|| ydk::is_set(is_primary_path.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_srlg_disjoint.yfilter)
	|| ydk::is_set(is_strict_spflfa.yfilter)
	|| ydk::is_set(is_tunnel_requested.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_snpa.yfilter)
	|| ydk::is_set(num_sid.yfilter)
	|| ydk::is_set(prefix_source_node_id.yfilter)
	|| ydk::is_set(remote_lfa_router_id.yfilter)
	|| ydk::is_set(remote_lfa_router_pid.yfilter)
	|| ydk::is_set(remote_lfa_system_id.yfilter)
	|| ydk::is_set(remote_lfa_system_pid.yfilter)
	|| ydk::is_set(segment_routing_sid_value.yfilter)
	|| ydk::is_set(tilfa_computation.yfilter)
	|| ydk::is_set(total_backup_distance.yfilter)
	|| ydk::is_set(tunnel_egress_interface.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (is_downstream.is_set || is_set(is_downstream.yfilter)) leaf_name_data.push_back(is_downstream.get_name_leafdata());
    if (is_epcfrr_lfa.is_set || is_set(is_epcfrr_lfa.yfilter)) leaf_name_data.push_back(is_epcfrr_lfa.get_name_leafdata());
    if (is_lc_disjoint.is_set || is_set(is_lc_disjoint.yfilter)) leaf_name_data.push_back(is_lc_disjoint.get_name_leafdata());
    if (is_node_protecting.is_set || is_set(is_node_protecting.yfilter)) leaf_name_data.push_back(is_node_protecting.get_name_leafdata());
    if (is_primary_path.is_set || is_set(is_primary_path.yfilter)) leaf_name_data.push_back(is_primary_path.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_srlg_disjoint.is_set || is_set(is_srlg_disjoint.yfilter)) leaf_name_data.push_back(is_srlg_disjoint.get_name_leafdata());
    if (is_strict_spflfa.is_set || is_set(is_strict_spflfa.yfilter)) leaf_name_data.push_back(is_strict_spflfa.get_name_leafdata());
    if (is_tunnel_requested.is_set || is_set(is_tunnel_requested.yfilter)) leaf_name_data.push_back(is_tunnel_requested.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_snpa.is_set || is_set(neighbor_snpa.yfilter)) leaf_name_data.push_back(neighbor_snpa.get_name_leafdata());
    if (num_sid.is_set || is_set(num_sid.yfilter)) leaf_name_data.push_back(num_sid.get_name_leafdata());
    if (prefix_source_node_id.is_set || is_set(prefix_source_node_id.yfilter)) leaf_name_data.push_back(prefix_source_node_id.get_name_leafdata());
    if (remote_lfa_router_id.is_set || is_set(remote_lfa_router_id.yfilter)) leaf_name_data.push_back(remote_lfa_router_id.get_name_leafdata());
    if (remote_lfa_router_pid.is_set || is_set(remote_lfa_router_pid.yfilter)) leaf_name_data.push_back(remote_lfa_router_pid.get_name_leafdata());
    if (remote_lfa_system_id.is_set || is_set(remote_lfa_system_id.yfilter)) leaf_name_data.push_back(remote_lfa_system_id.get_name_leafdata());
    if (remote_lfa_system_pid.is_set || is_set(remote_lfa_system_pid.yfilter)) leaf_name_data.push_back(remote_lfa_system_pid.get_name_leafdata());
    if (segment_routing_sid_value.is_set || is_set(segment_routing_sid_value.yfilter)) leaf_name_data.push_back(segment_routing_sid_value.get_name_leafdata());
    if (tilfa_computation.is_set || is_set(tilfa_computation.yfilter)) leaf_name_data.push_back(tilfa_computation.get_name_leafdata());
    if (total_backup_distance.is_set || is_set(total_backup_distance.yfilter)) leaf_name_data.push_back(total_backup_distance.get_name_leafdata());
    if (tunnel_egress_interface.is_set || is_set(tunnel_egress_interface.yfilter)) leaf_name_data.push_back(tunnel_egress_interface.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    if(child_yang_name == "segment-routing-sid-value-entry")
    {
        for(auto const & c : segment_routing_sid_value_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry>();
        c->parent = this;
        segment_routing_sid_value_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : segment_routing_sid_value_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-downstream")
    {
        is_downstream = value;
        is_downstream.value_namespace = name_space;
        is_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa = value;
        is_epcfrr_lfa.value_namespace = name_space;
        is_epcfrr_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint = value;
        is_lc_disjoint.value_namespace = name_space;
        is_lc_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting = value;
        is_node_protecting.value_namespace = name_space;
        is_node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path = value;
        is_primary_path.value_namespace = name_space;
        is_primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint = value;
        is_srlg_disjoint.value_namespace = name_space;
        is_srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa = value;
        is_strict_spflfa.value_namespace = name_space;
        is_strict_spflfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested = value;
        is_tunnel_requested.value_namespace = name_space;
        is_tunnel_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa = value;
        neighbor_snpa.value_namespace = name_space;
        neighbor_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sid")
    {
        num_sid = value;
        num_sid.value_namespace = name_space;
        num_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id = value;
        prefix_source_node_id.value_namespace = name_space;
        prefix_source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id = value;
        remote_lfa_router_id.value_namespace = name_space;
        remote_lfa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid = value;
        remote_lfa_router_pid.value_namespace = name_space;
        remote_lfa_router_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id = value;
        remote_lfa_system_id.value_namespace = name_space;
        remote_lfa_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid = value;
        remote_lfa_system_pid.value_namespace = name_space;
        remote_lfa_system_pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value = value;
        segment_routing_sid_value.value_namespace = name_space;
        segment_routing_sid_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation = value;
        tilfa_computation.value_namespace = name_space;
        tilfa_computation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance = value;
        total_backup_distance.value_namespace = name_space;
        total_backup_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface = value;
        tunnel_egress_interface.value_namespace = name_space;
        tunnel_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "is-downstream")
    {
        is_downstream.yfilter = yfilter;
    }
    if(value_path == "is-epcfrr-lfa")
    {
        is_epcfrr_lfa.yfilter = yfilter;
    }
    if(value_path == "is-lc-disjoint")
    {
        is_lc_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-node-protecting")
    {
        is_node_protecting.yfilter = yfilter;
    }
    if(value_path == "is-primary-path")
    {
        is_primary_path.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-srlg-disjoint")
    {
        is_srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "is-strict-spflfa")
    {
        is_strict_spflfa.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-requested")
    {
        is_tunnel_requested.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-snpa")
    {
        neighbor_snpa.yfilter = yfilter;
    }
    if(value_path == "num-sid")
    {
        num_sid.yfilter = yfilter;
    }
    if(value_path == "prefix-source-node-id")
    {
        prefix_source_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-id")
    {
        remote_lfa_router_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-router-pid")
    {
        remote_lfa_router_pid.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-id")
    {
        remote_lfa_system_id.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-system-pid")
    {
        remote_lfa_system_pid.yfilter = yfilter;
    }
    if(value_path == "segment-routing-sid-value")
    {
        segment_routing_sid_value.yfilter = yfilter;
    }
    if(value_path == "tilfa-computation")
    {
        tilfa_computation.yfilter = yfilter;
    }
    if(value_path == "total-backup-distance")
    {
        total_backup_distance.yfilter = yfilter;
    }
    if(value_path == "tunnel-egress-interface")
    {
        tunnel_egress_interface.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "segment-routing-sid-value-entry" || name == "backup-repair-list-size" || name == "egress-interface" || name == "is-downstream" || name == "is-epcfrr-lfa" || name == "is-lc-disjoint" || name == "is-node-protecting" || name == "is-primary-path" || name == "is-remote-lfa" || name == "is-srlg-disjoint" || name == "is-strict-spflfa" || name == "is-tunnel-requested" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-snpa" || name == "num-sid" || name == "prefix-source-node-id" || name == "remote-lfa-router-id" || name == "remote-lfa-router-pid" || name == "remote-lfa-system-id" || name == "remote-lfa-system-pid" || name == "segment-routing-sid-value" || name == "tilfa-computation" || name == "total-backup-distance" || name == "tunnel-egress-interface" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::BackupRepair()
    :
    repair_element_node_id{YType::str, "repair-element-node-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_ipv4_addr{YType::str, "repair-ipv4-addr"},
    repair_ipv6_addr{YType::str, "repair-ipv6-addr"},
    repair_label{YType::uint32, "repair-label"},
    repair_strict_spf_label{YType::uint32, "repair-strict-spf-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::~BackupRepair()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::has_data() const
{
    return repair_element_node_id.is_set
	|| repair_element_type.is_set
	|| repair_ipv4_addr.is_set
	|| repair_ipv6_addr.is_set
	|| repair_label.is_set
	|| repair_strict_spf_label.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_node_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_ipv4_addr.yfilter)
	|| ydk::is_set(repair_ipv6_addr.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_strict_spf_label.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_node_id.is_set || is_set(repair_element_node_id.yfilter)) leaf_name_data.push_back(repair_element_node_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_ipv4_addr.is_set || is_set(repair_ipv4_addr.yfilter)) leaf_name_data.push_back(repair_ipv4_addr.get_name_leafdata());
    if (repair_ipv6_addr.is_set || is_set(repair_ipv6_addr.yfilter)) leaf_name_data.push_back(repair_ipv6_addr.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_strict_spf_label.is_set || is_set(repair_strict_spf_label.yfilter)) leaf_name_data.push_back(repair_strict_spf_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id = value;
        repair_element_node_id.value_namespace = name_space;
        repair_element_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr = value;
        repair_ipv4_addr.value_namespace = name_space;
        repair_ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr = value;
        repair_ipv6_addr.value_namespace = name_space;
        repair_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label = value;
        repair_strict_spf_label.value_namespace = name_space;
        repair_strict_spf_label.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-node-id")
    {
        repair_element_node_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-ipv4-addr")
    {
        repair_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "repair-ipv6-addr")
    {
        repair_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-strict-spf-label")
    {
        repair_strict_spf_label.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-node-id" || name == "repair-element-type" || name == "repair-ipv4-addr" || name == "repair-ipv6-addr" || name == "repair-label" || name == "repair-strict-spf-label")
        return true;
    return false;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::SegmentRoutingSidValueEntry()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "segment-routing-sid-value-entry"; yang_parent_name = "frr-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::~SegmentRoutingSidValueEntry()
{
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing-sid-value-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

