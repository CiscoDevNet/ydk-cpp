
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_wd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_wd_oper {

Watchdog::Watchdog()
    :
    nodes(std::make_shared<Watchdog::Nodes>())
{
    nodes->parent = this;

    yang_name = "watchdog"; yang_parent_name = "Cisco-IOS-XR-wd-oper";
}

Watchdog::~Watchdog()
{
}

bool Watchdog::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Watchdog::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Watchdog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wd-oper:watchdog";

    return path_buffer.str();

}

const EntityPath Watchdog::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Watchdog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Watchdog::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Watchdog::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Watchdog::clone_ptr() const
{
    return std::make_shared<Watchdog>();
}

std::string Watchdog::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Watchdog::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Watchdog::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Watchdog::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "watchdog";
}

Watchdog::Nodes::~Nodes()
{
}

bool Watchdog::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Watchdog::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Watchdog::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-wd-oper:watchdog/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Watchdog::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Watchdog::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Watchdog::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    memory_state(std::make_shared<Watchdog::Nodes::Node::MemoryState>())
	,overload_state(std::make_shared<Watchdog::Nodes::Node::OverloadState>())
	,threshold_memory(std::make_shared<Watchdog::Nodes::Node::ThresholdMemory>())
{
    memory_state->parent = this;

    overload_state->parent = this;

    threshold_memory->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Watchdog::Nodes::Node::~Node()
{
}

bool Watchdog::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (memory_state !=  nullptr && memory_state->has_data())
	|| (overload_state !=  nullptr && overload_state->has_data())
	|| (threshold_memory !=  nullptr && threshold_memory->has_data());
}

bool Watchdog::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (memory_state !=  nullptr && memory_state->has_operation())
	|| (overload_state !=  nullptr && overload_state->has_operation())
	|| (threshold_memory !=  nullptr && threshold_memory->has_operation());
}

std::string Watchdog::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-wd-oper:watchdog/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> Watchdog::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-state")
    {
        if(memory_state == nullptr)
        {
            memory_state = std::make_shared<Watchdog::Nodes::Node::MemoryState>();
        }
        return memory_state;
    }

    if(child_yang_name == "overload-state")
    {
        if(overload_state == nullptr)
        {
            overload_state = std::make_shared<Watchdog::Nodes::Node::OverloadState>();
        }
        return overload_state;
    }

    if(child_yang_name == "threshold-memory")
    {
        if(threshold_memory == nullptr)
        {
            threshold_memory = std::make_shared<Watchdog::Nodes::Node::ThresholdMemory>();
        }
        return threshold_memory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(memory_state != nullptr)
    {
        children["memory-state"] = memory_state;
    }

    if(overload_state != nullptr)
    {
        children["overload-state"] = overload_state;
    }

    if(threshold_memory != nullptr)
    {
        children["threshold-memory"] = threshold_memory;
    }

    return children;
}

void Watchdog::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Watchdog::Nodes::Node::ThresholdMemory::ThresholdMemory()
    :
    configured(std::make_shared<Watchdog::Nodes::Node::ThresholdMemory::Configured>())
	,default_(std::make_shared<Watchdog::Nodes::Node::ThresholdMemory::Default_>())
{
    configured->parent = this;

    default_->parent = this;

    yang_name = "threshold-memory"; yang_parent_name = "node";
}

Watchdog::Nodes::Node::ThresholdMemory::~ThresholdMemory()
{
}

bool Watchdog::Nodes::Node::ThresholdMemory::has_data() const
{
    return (configured !=  nullptr && configured->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Watchdog::Nodes::Node::ThresholdMemory::has_operation() const
{
    return is_set(operation)
	|| (configured !=  nullptr && configured->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Watchdog::Nodes::Node::ThresholdMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-memory";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::ThresholdMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdMemory' in Cisco_IOS_XR_wd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::Node::ThresholdMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured")
    {
        if(configured == nullptr)
        {
            configured = std::make_shared<Watchdog::Nodes::Node::ThresholdMemory::Configured>();
        }
        return configured;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Watchdog::Nodes::Node::ThresholdMemory::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::ThresholdMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured != nullptr)
    {
        children["configured"] = configured;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Watchdog::Nodes::Node::ThresholdMemory::set_value(const std::string & value_path, std::string value)
{
}

Watchdog::Nodes::Node::ThresholdMemory::Default_::Default_()
    :
    configured_memory(std::make_shared<Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory>())
	,memory(std::make_shared<Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory>())
{
    configured_memory->parent = this;

    memory->parent = this;

    yang_name = "default"; yang_parent_name = "threshold-memory";
}

Watchdog::Nodes::Node::ThresholdMemory::Default_::~Default_()
{
}

bool Watchdog::Nodes::Node::ThresholdMemory::Default_::has_data() const
{
    return (configured_memory !=  nullptr && configured_memory->has_data())
	|| (memory !=  nullptr && memory->has_data());
}

bool Watchdog::Nodes::Node::ThresholdMemory::Default_::has_operation() const
{
    return is_set(operation)
	|| (configured_memory !=  nullptr && configured_memory->has_operation())
	|| (memory !=  nullptr && memory->has_operation());
}

std::string Watchdog::Nodes::Node::ThresholdMemory::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::ThresholdMemory::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XR_wd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::Node::ThresholdMemory::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-memory")
    {
        if(configured_memory == nullptr)
        {
            configured_memory = std::make_shared<Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory>();
        }
        return configured_memory;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory>();
        }
        return memory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::ThresholdMemory::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_memory != nullptr)
    {
        children["configured-memory"] = configured_memory;
    }

    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    return children;
}

void Watchdog::Nodes::Node::ThresholdMemory::Default_::set_value(const std::string & value_path, std::string value)
{
}

Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::ConfiguredMemory()
    :
    critical{YType::uint64, "critical"},
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"}
{
    yang_name = "configured-memory"; yang_parent_name = "default";
}

Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::~ConfiguredMemory()
{
}

bool Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::has_data() const
{
    return critical.is_set
	|| minor.is_set
	|| severe.is_set;
}

bool Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(minor.operation)
	|| is_set(severe.operation);
}

std::string Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-memory";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfiguredMemory' in Cisco_IOS_XR_wd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.operation)) leaf_name_data.push_back(severe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "severe")
    {
        severe = value;
    }
}

Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::Memory()
    :
    free_memory{YType::uint64, "free-memory"},
    memory_state{YType::enumeration, "memory-state"},
    physical_memory{YType::uint32, "physical-memory"}
{
    yang_name = "memory"; yang_parent_name = "default";
}

Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::~Memory()
{
}

bool Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::has_data() const
{
    return free_memory.is_set
	|| memory_state.is_set
	|| physical_memory.is_set;
}

bool Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::has_operation() const
{
    return is_set(operation)
	|| is_set(free_memory.operation)
	|| is_set(memory_state.operation)
	|| is_set(physical_memory.operation);
}

std::string Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Memory' in Cisco_IOS_XR_wd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_memory.is_set || is_set(free_memory.operation)) leaf_name_data.push_back(free_memory.get_name_leafdata());
    if (memory_state.is_set || is_set(memory_state.operation)) leaf_name_data.push_back(memory_state.get_name_leafdata());
    if (physical_memory.is_set || is_set(physical_memory.operation)) leaf_name_data.push_back(physical_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-memory")
    {
        free_memory = value;
    }
    if(value_path == "memory-state")
    {
        memory_state = value;
    }
    if(value_path == "physical-memory")
    {
        physical_memory = value;
    }
}

Watchdog::Nodes::Node::ThresholdMemory::Configured::Configured()
    :
    critical{YType::uint64, "critical"},
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"}
{
    yang_name = "configured"; yang_parent_name = "threshold-memory";
}

Watchdog::Nodes::Node::ThresholdMemory::Configured::~Configured()
{
}

bool Watchdog::Nodes::Node::ThresholdMemory::Configured::has_data() const
{
    return critical.is_set
	|| minor.is_set
	|| severe.is_set;
}

bool Watchdog::Nodes::Node::ThresholdMemory::Configured::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(minor.operation)
	|| is_set(severe.operation);
}

std::string Watchdog::Nodes::Node::ThresholdMemory::Configured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::ThresholdMemory::Configured::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Configured' in Cisco_IOS_XR_wd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.operation)) leaf_name_data.push_back(severe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::Node::ThresholdMemory::Configured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::ThresholdMemory::Configured::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Watchdog::Nodes::Node::ThresholdMemory::Configured::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "severe")
    {
        severe = value;
    }
}

Watchdog::Nodes::Node::MemoryState::MemoryState()
    :
    free_memory{YType::uint64, "free-memory"},
    memory_state{YType::enumeration, "memory-state"},
    physical_memory{YType::uint32, "physical-memory"}
{
    yang_name = "memory-state"; yang_parent_name = "node";
}

Watchdog::Nodes::Node::MemoryState::~MemoryState()
{
}

bool Watchdog::Nodes::Node::MemoryState::has_data() const
{
    return free_memory.is_set
	|| memory_state.is_set
	|| physical_memory.is_set;
}

bool Watchdog::Nodes::Node::MemoryState::has_operation() const
{
    return is_set(operation)
	|| is_set(free_memory.operation)
	|| is_set(memory_state.operation)
	|| is_set(physical_memory.operation);
}

std::string Watchdog::Nodes::Node::MemoryState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-state";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::MemoryState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemoryState' in Cisco_IOS_XR_wd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_memory.is_set || is_set(free_memory.operation)) leaf_name_data.push_back(free_memory.get_name_leafdata());
    if (memory_state.is_set || is_set(memory_state.operation)) leaf_name_data.push_back(memory_state.get_name_leafdata());
    if (physical_memory.is_set || is_set(physical_memory.operation)) leaf_name_data.push_back(physical_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::Node::MemoryState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::MemoryState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Watchdog::Nodes::Node::MemoryState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-memory")
    {
        free_memory = value;
    }
    if(value_path == "memory-state")
    {
        memory_state = value;
    }
    if(value_path == "physical-memory")
    {
        physical_memory = value;
    }
}

Watchdog::Nodes::Node::OverloadState::OverloadState()
    :
    configured_wdsysmon_throttle{YType::uint32, "configured-wdsysmon-throttle"},
    default_wdsysmon_throttle{YType::uint32, "default-wdsysmon-throttle"},
    overload_control_notification{YType::enumeration, "overload-control-notification"}
    	,
    current_throttle(std::make_shared<Watchdog::Nodes::Node::OverloadState::CurrentThrottle>())
{
    current_throttle->parent = this;

    yang_name = "overload-state"; yang_parent_name = "node";
}

Watchdog::Nodes::Node::OverloadState::~OverloadState()
{
}

bool Watchdog::Nodes::Node::OverloadState::has_data() const
{
    for (std::size_t index=0; index<last_throttle.size(); index++)
    {
        if(last_throttle[index]->has_data())
            return true;
    }
    return configured_wdsysmon_throttle.is_set
	|| default_wdsysmon_throttle.is_set
	|| overload_control_notification.is_set
	|| (current_throttle !=  nullptr && current_throttle->has_data());
}

bool Watchdog::Nodes::Node::OverloadState::has_operation() const
{
    for (std::size_t index=0; index<last_throttle.size(); index++)
    {
        if(last_throttle[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(configured_wdsysmon_throttle.operation)
	|| is_set(default_wdsysmon_throttle.operation)
	|| is_set(overload_control_notification.operation)
	|| (current_throttle !=  nullptr && current_throttle->has_operation());
}

std::string Watchdog::Nodes::Node::OverloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-state";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::OverloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OverloadState' in Cisco_IOS_XR_wd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_wdsysmon_throttle.is_set || is_set(configured_wdsysmon_throttle.operation)) leaf_name_data.push_back(configured_wdsysmon_throttle.get_name_leafdata());
    if (default_wdsysmon_throttle.is_set || is_set(default_wdsysmon_throttle.operation)) leaf_name_data.push_back(default_wdsysmon_throttle.get_name_leafdata());
    if (overload_control_notification.is_set || is_set(overload_control_notification.operation)) leaf_name_data.push_back(overload_control_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::Node::OverloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-throttle")
    {
        if(current_throttle == nullptr)
        {
            current_throttle = std::make_shared<Watchdog::Nodes::Node::OverloadState::CurrentThrottle>();
        }
        return current_throttle;
    }

    if(child_yang_name == "last-throttle")
    {
        for(auto const & c : last_throttle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Watchdog::Nodes::Node::OverloadState::LastThrottle>();
        c->parent = this;
        last_throttle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::OverloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(current_throttle != nullptr)
    {
        children["current-throttle"] = current_throttle;
    }

    for (auto const & c : last_throttle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Watchdog::Nodes::Node::OverloadState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-wdsysmon-throttle")
    {
        configured_wdsysmon_throttle = value;
    }
    if(value_path == "default-wdsysmon-throttle")
    {
        default_wdsysmon_throttle = value;
    }
    if(value_path == "overload-control-notification")
    {
        overload_control_notification = value;
    }
}

Watchdog::Nodes::Node::OverloadState::CurrentThrottle::CurrentThrottle()
    :
    start_time{YType::str, "start-time"},
    throttle_duration{YType::uint32, "throttle-duration"}
{
    yang_name = "current-throttle"; yang_parent_name = "overload-state";
}

Watchdog::Nodes::Node::OverloadState::CurrentThrottle::~CurrentThrottle()
{
}

bool Watchdog::Nodes::Node::OverloadState::CurrentThrottle::has_data() const
{
    return start_time.is_set
	|| throttle_duration.is_set;
}

bool Watchdog::Nodes::Node::OverloadState::CurrentThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(start_time.operation)
	|| is_set(throttle_duration.operation);
}

std::string Watchdog::Nodes::Node::OverloadState::CurrentThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-throttle";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::OverloadState::CurrentThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CurrentThrottle' in Cisco_IOS_XR_wd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (throttle_duration.is_set || is_set(throttle_duration.operation)) leaf_name_data.push_back(throttle_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::Node::OverloadState::CurrentThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::OverloadState::CurrentThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Watchdog::Nodes::Node::OverloadState::CurrentThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "throttle-duration")
    {
        throttle_duration = value;
    }
}

Watchdog::Nodes::Node::OverloadState::LastThrottle::LastThrottle()
    :
    start_time{YType::str, "start-time"},
    stop_time{YType::str, "stop-time"},
    throttle_duration{YType::uint32, "throttle-duration"}
{
    yang_name = "last-throttle"; yang_parent_name = "overload-state";
}

Watchdog::Nodes::Node::OverloadState::LastThrottle::~LastThrottle()
{
}

bool Watchdog::Nodes::Node::OverloadState::LastThrottle::has_data() const
{
    return start_time.is_set
	|| stop_time.is_set
	|| throttle_duration.is_set;
}

bool Watchdog::Nodes::Node::OverloadState::LastThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(start_time.operation)
	|| is_set(stop_time.operation)
	|| is_set(throttle_duration.operation);
}

std::string Watchdog::Nodes::Node::OverloadState::LastThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-throttle";

    return path_buffer.str();

}

const EntityPath Watchdog::Nodes::Node::OverloadState::LastThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastThrottle' in Cisco_IOS_XR_wd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.operation)) leaf_name_data.push_back(stop_time.get_name_leafdata());
    if (throttle_duration.is_set || is_set(throttle_duration.operation)) leaf_name_data.push_back(throttle_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Watchdog::Nodes::Node::OverloadState::LastThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::Nodes::Node::OverloadState::LastThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Watchdog::Nodes::Node::OverloadState::LastThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "stop-time")
    {
        stop_time = value;
    }
    if(value_path == "throttle-duration")
    {
        throttle_duration = value;
    }
}

const Enum::YLeaf MemoryStateEnum::unknown {0, "unknown"};
const Enum::YLeaf MemoryStateEnum::normal {1, "normal"};
const Enum::YLeaf MemoryStateEnum::minor {2, "minor"};
const Enum::YLeaf MemoryStateEnum::severe {3, "severe"};
const Enum::YLeaf MemoryStateEnum::critical {4, "critical"};

const Enum::YLeaf OverloadCtrlNotifEnum::disabled {0, "disabled"};
const Enum::YLeaf OverloadCtrlNotifEnum::enabled {1, "enabled"};


}
}

