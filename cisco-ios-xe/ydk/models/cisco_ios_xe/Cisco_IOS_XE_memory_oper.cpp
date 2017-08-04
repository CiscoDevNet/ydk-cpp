
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_memory_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_memory_oper {

MemoryStatistics::MemoryStatistics()
{
    yang_name = "memory-statistics"; yang_parent_name = "Cisco-IOS-XE-memory-oper";
}

MemoryStatistics::~MemoryStatistics()
{
}

bool MemoryStatistics::has_data() const
{
    for (std::size_t index=0; index<memory_statistic.size(); index++)
    {
        if(memory_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool MemoryStatistics::has_operation() const
{
    for (std::size_t index=0; index<memory_statistic.size(); index++)
    {
        if(memory_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MemoryStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-memory-oper:memory-statistics";

    return path_buffer.str();

}

const EntityPath MemoryStatistics::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MemoryStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-statistic")
    {
        for(auto const & c : memory_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MemoryStatistics::MemoryStatistic>();
        c->parent = this;
        memory_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemoryStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : memory_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MemoryStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MemoryStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MemoryStatistics::clone_ptr() const
{
    return std::make_shared<MemoryStatistics>();
}

std::string MemoryStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MemoryStatistics::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MemoryStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MemoryStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MemoryStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-statistic")
        return true;
    return false;
}

MemoryStatistics::MemoryStatistic::MemoryStatistic()
    :
    name{YType::str, "name"},
    free_memory{YType::uint64, "free-memory"},
    highest_usage{YType::uint64, "highest-usage"},
    lowest_usage{YType::uint64, "lowest-usage"},
    total_memory{YType::uint64, "total-memory"},
    used_memory{YType::uint64, "used-memory"}
{
    yang_name = "memory-statistic"; yang_parent_name = "memory-statistics";
}

MemoryStatistics::MemoryStatistic::~MemoryStatistic()
{
}

bool MemoryStatistics::MemoryStatistic::has_data() const
{
    return name.is_set
	|| free_memory.is_set
	|| highest_usage.is_set
	|| lowest_usage.is_set
	|| total_memory.is_set
	|| used_memory.is_set;
}

bool MemoryStatistics::MemoryStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(free_memory.yfilter)
	|| ydk::is_set(highest_usage.yfilter)
	|| ydk::is_set(lowest_usage.yfilter)
	|| ydk::is_set(total_memory.yfilter)
	|| ydk::is_set(used_memory.yfilter);
}

std::string MemoryStatistics::MemoryStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-statistic" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath MemoryStatistics::MemoryStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-memory-oper:memory-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (free_memory.is_set || is_set(free_memory.yfilter)) leaf_name_data.push_back(free_memory.get_name_leafdata());
    if (highest_usage.is_set || is_set(highest_usage.yfilter)) leaf_name_data.push_back(highest_usage.get_name_leafdata());
    if (lowest_usage.is_set || is_set(lowest_usage.yfilter)) leaf_name_data.push_back(lowest_usage.get_name_leafdata());
    if (total_memory.is_set || is_set(total_memory.yfilter)) leaf_name_data.push_back(total_memory.get_name_leafdata());
    if (used_memory.is_set || is_set(used_memory.yfilter)) leaf_name_data.push_back(used_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MemoryStatistics::MemoryStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemoryStatistics::MemoryStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MemoryStatistics::MemoryStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-memory")
    {
        free_memory = value;
        free_memory.value_namespace = name_space;
        free_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest-usage")
    {
        highest_usage = value;
        highest_usage.value_namespace = name_space;
        highest_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-usage")
    {
        lowest_usage = value;
        lowest_usage.value_namespace = name_space;
        lowest_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-memory")
    {
        total_memory = value;
        total_memory.value_namespace = name_space;
        total_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used-memory")
    {
        used_memory = value;
        used_memory.value_namespace = name_space;
        used_memory.value_namespace_prefix = name_space_prefix;
    }
}

void MemoryStatistics::MemoryStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "free-memory")
    {
        free_memory.yfilter = yfilter;
    }
    if(value_path == "highest-usage")
    {
        highest_usage.yfilter = yfilter;
    }
    if(value_path == "lowest-usage")
    {
        lowest_usage.yfilter = yfilter;
    }
    if(value_path == "total-memory")
    {
        total_memory.yfilter = yfilter;
    }
    if(value_path == "used-memory")
    {
        used_memory.yfilter = yfilter;
    }
}

bool MemoryStatistics::MemoryStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "free-memory" || name == "highest-usage" || name == "lowest-usage" || name == "total-memory" || name == "used-memory")
        return true;
    return false;
}


}
}
