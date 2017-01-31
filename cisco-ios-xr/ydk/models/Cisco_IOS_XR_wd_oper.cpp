
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_wd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_wd_oper {

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

EntityPath Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.operation)) leaf_name_data.push_back(severe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory::get_children()
{
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

EntityPath Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_memory.is_set || is_set(free_memory.operation)) leaf_name_data.push_back(free_memory.get_name_leafdata());
    if (memory_state.is_set || is_set(memory_state.operation)) leaf_name_data.push_back(memory_state.get_name_leafdata());
    if (physical_memory.is_set || is_set(physical_memory.operation)) leaf_name_data.push_back(physical_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory::get_children()
{
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

Watchdog::Nodes::Node::ThresholdMemory::Default_::Default_()
    :
    configured_memory(std::make_unique<Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory>())
	,memory(std::make_unique<Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory>())
{
    configured_memory->parent = this;
    children["configured-memory"] = configured_memory.get();

    memory->parent = this;
    children["memory"] = memory.get();

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

EntityPath Watchdog::Nodes::Node::ThresholdMemory::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::Node::ThresholdMemory::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configured-memory")
    {
        if(configured_memory != nullptr)
        {
            children["configured-memory"] = configured_memory.get();
        }
        else
        {
            configured_memory = std::make_unique<Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory>();
            configured_memory->parent = this;
            children["configured-memory"] = configured_memory.get();
        }
        return children.at("configured-memory");
    }

    if(child_yang_name == "memory")
    {
        if(memory != nullptr)
        {
            children["memory"] = memory.get();
        }
        else
        {
            memory = std::make_unique<Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory>();
            memory->parent = this;
            children["memory"] = memory.get();
        }
        return children.at("memory");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Watchdog::Nodes::Node::ThresholdMemory::Default_::get_children()
{
    if(children.find("configured-memory") == children.end())
    {
        if(configured_memory != nullptr)
        {
            children["configured-memory"] = configured_memory.get();
        }
    }

    if(children.find("memory") == children.end())
    {
        if(memory != nullptr)
        {
            children["memory"] = memory.get();
        }
    }

    return children;
}

void Watchdog::Nodes::Node::ThresholdMemory::Default_::set_value(const std::string & value_path, std::string value)
{
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

EntityPath Watchdog::Nodes::Node::ThresholdMemory::Configured::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.operation)) leaf_name_data.push_back(severe.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::Node::ThresholdMemory::Configured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Watchdog::Nodes::Node::ThresholdMemory::Configured::get_children()
{
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

Watchdog::Nodes::Node::ThresholdMemory::ThresholdMemory()
    :
    configured(std::make_unique<Watchdog::Nodes::Node::ThresholdMemory::Configured>())
	,default_(std::make_unique<Watchdog::Nodes::Node::ThresholdMemory::Default_>())
{
    configured->parent = this;
    children["configured"] = configured.get();

    default_->parent = this;
    children["default"] = default_.get();

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

EntityPath Watchdog::Nodes::Node::ThresholdMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::Node::ThresholdMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configured")
    {
        if(configured != nullptr)
        {
            children["configured"] = configured.get();
        }
        else
        {
            configured = std::make_unique<Watchdog::Nodes::Node::ThresholdMemory::Configured>();
            configured->parent = this;
            children["configured"] = configured.get();
        }
        return children.at("configured");
    }

    if(child_yang_name == "default")
    {
        if(default_ != nullptr)
        {
            children["default"] = default_.get();
        }
        else
        {
            default_ = std::make_unique<Watchdog::Nodes::Node::ThresholdMemory::Default_>();
            default_->parent = this;
            children["default"] = default_.get();
        }
        return children.at("default");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Watchdog::Nodes::Node::ThresholdMemory::get_children()
{
    if(children.find("configured") == children.end())
    {
        if(configured != nullptr)
        {
            children["configured"] = configured.get();
        }
    }

    if(children.find("default") == children.end())
    {
        if(default_ != nullptr)
        {
            children["default"] = default_.get();
        }
    }

    return children;
}

void Watchdog::Nodes::Node::ThresholdMemory::set_value(const std::string & value_path, std::string value)
{
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

EntityPath Watchdog::Nodes::Node::MemoryState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_memory.is_set || is_set(free_memory.operation)) leaf_name_data.push_back(free_memory.get_name_leafdata());
    if (memory_state.is_set || is_set(memory_state.operation)) leaf_name_data.push_back(memory_state.get_name_leafdata());
    if (physical_memory.is_set || is_set(physical_memory.operation)) leaf_name_data.push_back(physical_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::Node::MemoryState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Watchdog::Nodes::Node::MemoryState::get_children()
{
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

EntityPath Watchdog::Nodes::Node::OverloadState::CurrentThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (throttle_duration.is_set || is_set(throttle_duration.operation)) leaf_name_data.push_back(throttle_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::Node::OverloadState::CurrentThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Watchdog::Nodes::Node::OverloadState::CurrentThrottle::get_children()
{
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

EntityPath Watchdog::Nodes::Node::OverloadState::LastThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.operation)) leaf_name_data.push_back(stop_time.get_name_leafdata());
    if (throttle_duration.is_set || is_set(throttle_duration.operation)) leaf_name_data.push_back(throttle_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::Node::OverloadState::LastThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Watchdog::Nodes::Node::OverloadState::LastThrottle::get_children()
{
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

Watchdog::Nodes::Node::OverloadState::OverloadState()
    :
    	configured_wdsysmon_throttle{YType::uint32, "configured-wdsysmon-throttle"},
	 default_wdsysmon_throttle{YType::uint32, "default-wdsysmon-throttle"},
	 overload_control_notification{YType::enumeration, "overload-control-notification"}
    	,
    current_throttle(std::make_unique<Watchdog::Nodes::Node::OverloadState::CurrentThrottle>())
{
    current_throttle->parent = this;
    children["current-throttle"] = current_throttle.get();

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

EntityPath Watchdog::Nodes::Node::OverloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_wdsysmon_throttle.is_set || is_set(configured_wdsysmon_throttle.operation)) leaf_name_data.push_back(configured_wdsysmon_throttle.get_name_leafdata());
    if (default_wdsysmon_throttle.is_set || is_set(default_wdsysmon_throttle.operation)) leaf_name_data.push_back(default_wdsysmon_throttle.get_name_leafdata());
    if (overload_control_notification.is_set || is_set(overload_control_notification.operation)) leaf_name_data.push_back(overload_control_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::Node::OverloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-throttle")
    {
        if(current_throttle != nullptr)
        {
            children["current-throttle"] = current_throttle.get();
        }
        else
        {
            current_throttle = std::make_unique<Watchdog::Nodes::Node::OverloadState::CurrentThrottle>();
            current_throttle->parent = this;
            children["current-throttle"] = current_throttle.get();
        }
        return children.at("current-throttle");
    }

    if(child_yang_name == "last-throttle")
    {
        for(auto const & c : last_throttle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Watchdog::Nodes::Node::OverloadState::LastThrottle>();
        c->parent = this;
        last_throttle.push_back(std::move(c));
        children[segment_path] = last_throttle.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Watchdog::Nodes::Node::OverloadState::get_children()
{
    if(children.find("current-throttle") == children.end())
    {
        if(current_throttle != nullptr)
        {
            children["current-throttle"] = current_throttle.get();
        }
    }

    for (auto const & c : last_throttle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
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

Watchdog::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    memory_state(std::make_unique<Watchdog::Nodes::Node::MemoryState>())
	,overload_state(std::make_unique<Watchdog::Nodes::Node::OverloadState>())
	,threshold_memory(std::make_unique<Watchdog::Nodes::Node::ThresholdMemory>())
{
    memory_state->parent = this;
    children["memory-state"] = memory_state.get();

    overload_state->parent = this;
    children["overload-state"] = overload_state.get();

    threshold_memory->parent = this;
    children["threshold-memory"] = threshold_memory.get();

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
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Watchdog::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-wd-oper:watchdog/nodes/" << get_segment_path();
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

Entity* Watchdog::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "memory-state")
    {
        if(memory_state != nullptr)
        {
            children["memory-state"] = memory_state.get();
        }
        else
        {
            memory_state = std::make_unique<Watchdog::Nodes::Node::MemoryState>();
            memory_state->parent = this;
            children["memory-state"] = memory_state.get();
        }
        return children.at("memory-state");
    }

    if(child_yang_name == "overload-state")
    {
        if(overload_state != nullptr)
        {
            children["overload-state"] = overload_state.get();
        }
        else
        {
            overload_state = std::make_unique<Watchdog::Nodes::Node::OverloadState>();
            overload_state->parent = this;
            children["overload-state"] = overload_state.get();
        }
        return children.at("overload-state");
    }

    if(child_yang_name == "threshold-memory")
    {
        if(threshold_memory != nullptr)
        {
            children["threshold-memory"] = threshold_memory.get();
        }
        else
        {
            threshold_memory = std::make_unique<Watchdog::Nodes::Node::ThresholdMemory>();
            threshold_memory->parent = this;
            children["threshold-memory"] = threshold_memory.get();
        }
        return children.at("threshold-memory");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Watchdog::Nodes::Node::get_children()
{
    if(children.find("memory-state") == children.end())
    {
        if(memory_state != nullptr)
        {
            children["memory-state"] = memory_state.get();
        }
    }

    if(children.find("overload-state") == children.end())
    {
        if(overload_state != nullptr)
        {
            children["overload-state"] = overload_state.get();
        }
    }

    if(children.find("threshold-memory") == children.end())
    {
        if(threshold_memory != nullptr)
        {
            children["threshold-memory"] = threshold_memory.get();
        }
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

EntityPath Watchdog::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-wd-oper:watchdog/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Watchdog::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Watchdog::Nodes::get_children()
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

void Watchdog::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Watchdog::Watchdog()
    :
    nodes(std::make_unique<Watchdog::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

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

EntityPath Watchdog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchdog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<Watchdog::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Watchdog::get_children()
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

void Watchdog::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Watchdog::clone_ptr()
{
    return std::make_unique<Watchdog>();
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

