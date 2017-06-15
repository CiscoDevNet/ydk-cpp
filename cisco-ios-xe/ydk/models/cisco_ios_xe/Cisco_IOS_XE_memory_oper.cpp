
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_memory_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_memory_oper {

MemoryStats::MemoryStats()
{
    yang_name = "memory-stats"; yang_parent_name = "Cisco-IOS-XE-memory-oper";
}

MemoryStats::~MemoryStats()
{
}

bool MemoryStats::has_data() const
{
    for (std::size_t index=0; index<memory_stat_.size(); index++)
    {
        if(memory_stat_[index]->has_data())
            return true;
    }
    return false;
}

bool MemoryStats::has_operation() const
{
    for (std::size_t index=0; index<memory_stat_.size(); index++)
    {
        if(memory_stat_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MemoryStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-memory-oper:memory-stats";

    return path_buffer.str();

}

const EntityPath MemoryStats::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MemoryStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-stat")
    {
        for(auto const & c : memory_stat_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MemoryStats::MemoryStat>();
        c->parent = this;
        memory_stat_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemoryStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : memory_stat_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MemoryStats::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MemoryStats::clone_ptr() const
{
    return std::make_shared<MemoryStats>();
}

std::string MemoryStats::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MemoryStats::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MemoryStats::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

MemoryStats::MemoryStat::MemoryStat()
    :
    name{YType::str, "name"},
    free_memory{YType::uint64, "free-memory"},
    highest_usage{YType::uint64, "highest-usage"},
    lowest_usage{YType::uint64, "lowest-usage"},
    total_memory{YType::uint64, "total-memory"},
    used_memory{YType::uint64, "used-memory"}
{
    yang_name = "memory-stat"; yang_parent_name = "memory-stats";
}

MemoryStats::MemoryStat::~MemoryStat()
{
}

bool MemoryStats::MemoryStat::has_data() const
{
    return name.is_set
	|| free_memory.is_set
	|| highest_usage.is_set
	|| lowest_usage.is_set
	|| total_memory.is_set
	|| used_memory.is_set;
}

bool MemoryStats::MemoryStat::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(free_memory.operation)
	|| is_set(highest_usage.operation)
	|| is_set(lowest_usage.operation)
	|| is_set(total_memory.operation)
	|| is_set(used_memory.operation);
}

std::string MemoryStats::MemoryStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-stat" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath MemoryStats::MemoryStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-memory-oper:memory-stats/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (free_memory.is_set || is_set(free_memory.operation)) leaf_name_data.push_back(free_memory.get_name_leafdata());
    if (highest_usage.is_set || is_set(highest_usage.operation)) leaf_name_data.push_back(highest_usage.get_name_leafdata());
    if (lowest_usage.is_set || is_set(lowest_usage.operation)) leaf_name_data.push_back(lowest_usage.get_name_leafdata());
    if (total_memory.is_set || is_set(total_memory.operation)) leaf_name_data.push_back(total_memory.get_name_leafdata());
    if (used_memory.is_set || is_set(used_memory.operation)) leaf_name_data.push_back(used_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MemoryStats::MemoryStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemoryStats::MemoryStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MemoryStats::MemoryStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "free-memory")
    {
        free_memory = value;
    }
    if(value_path == "highest-usage")
    {
        highest_usage = value;
    }
    if(value_path == "lowest-usage")
    {
        lowest_usage = value;
    }
    if(value_path == "total-memory")
    {
        total_memory = value;
    }
    if(value_path == "used-memory")
    {
        used_memory = value;
    }
}


}
}

