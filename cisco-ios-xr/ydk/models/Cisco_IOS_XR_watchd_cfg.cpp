
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_watchd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_watchd_cfg {

Watchdog::ThresholdMemory::ThresholdMemory()
    :
    	critical{YType::uint32, "critical"},
	 minor{YType::uint32, "minor"},
	 severe{YType::uint32, "severe"}
{
    yang_name = "threshold-memory"; yang_parent_name = "watchdog";
}

Watchdog::ThresholdMemory::~ThresholdMemory()
{
}

bool Watchdog::ThresholdMemory::has_data() const
{
    return critical.is_set
	|| minor.is_set
	|| severe.is_set;
}

bool Watchdog::ThresholdMemory::has_operation() const
{
    return is_set(operation)
	|| is_set(critical.operation)
	|| is_set(minor.operation)
	|| is_set(severe.operation);
}

std::string Watchdog::ThresholdMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-memory";

    return path_buffer.str();

}

EntityPath Watchdog::ThresholdMemory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-watchd-cfg:watchdog/" << get_segment_path();
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

Entity* Watchdog::ThresholdMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Watchdog::ThresholdMemory::get_children()
{
    return children;
}

void Watchdog::ThresholdMemory::set_value(const std::string & value_path, std::string value)
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

Watchdog::Watchdog()
    :
    	overload_notification{YType::empty, "overload-notification"},
	 overload_throttle_timeout{YType::uint32, "overload-throttle-timeout"},
	 restart_deadlock_disable{YType::empty, "restart-deadlock-disable"},
	 restart_memoryhog_disable{YType::empty, "restart-memoryhog-disable"}
    	,
    threshold_memory(std::make_unique<Watchdog::ThresholdMemory>())
{
    threshold_memory->parent = this;
    children["threshold-memory"] = threshold_memory.get();

    yang_name = "watchdog"; yang_parent_name = "Cisco-IOS-XR-watchd-cfg";
}

Watchdog::~Watchdog()
{
}

bool Watchdog::has_data() const
{
    return overload_notification.is_set
	|| overload_throttle_timeout.is_set
	|| restart_deadlock_disable.is_set
	|| restart_memoryhog_disable.is_set
	|| (threshold_memory !=  nullptr && threshold_memory->has_data());
}

bool Watchdog::has_operation() const
{
    return is_set(operation)
	|| is_set(overload_notification.operation)
	|| is_set(overload_throttle_timeout.operation)
	|| is_set(restart_deadlock_disable.operation)
	|| is_set(restart_memoryhog_disable.operation)
	|| (threshold_memory !=  nullptr && is_set(threshold_memory->operation));
}

std::string Watchdog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-watchd-cfg:watchdog";

    return path_buffer.str();

}

EntityPath Watchdog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload_notification.is_set || is_set(overload_notification.operation)) leaf_name_data.push_back(overload_notification.get_name_leafdata());
    if (overload_throttle_timeout.is_set || is_set(overload_throttle_timeout.operation)) leaf_name_data.push_back(overload_throttle_timeout.get_name_leafdata());
    if (restart_deadlock_disable.is_set || is_set(restart_deadlock_disable.operation)) leaf_name_data.push_back(restart_deadlock_disable.get_name_leafdata());
    if (restart_memoryhog_disable.is_set || is_set(restart_memoryhog_disable.operation)) leaf_name_data.push_back(restart_memoryhog_disable.get_name_leafdata());


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

    if(child_yang_name == "threshold-memory")
    {
        if(threshold_memory != nullptr)
        {
            children["threshold-memory"] = threshold_memory.get();
        }
        else
        {
            threshold_memory = std::make_unique<Watchdog::ThresholdMemory>();
            threshold_memory->parent = this;
            children["threshold-memory"] = threshold_memory.get();
        }
        return children.at("threshold-memory");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Watchdog::get_children()
{
    if(children.find("threshold-memory") == children.end())
    {
        if(threshold_memory != nullptr)
        {
            children["threshold-memory"] = threshold_memory.get();
        }
    }

    return children;
}

void Watchdog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "overload-notification")
    {
        overload_notification = value;
    }
    if(value_path == "overload-throttle-timeout")
    {
        overload_throttle_timeout = value;
    }
    if(value_path == "restart-deadlock-disable")
    {
        restart_deadlock_disable = value;
    }
    if(value_path == "restart-memoryhog-disable")
    {
        restart_memoryhog_disable = value;
    }
}

std::unique_ptr<Entity> Watchdog::clone_ptr()
{
    return std::make_unique<Watchdog>();
}
Watchd::Watchd()
    :
    	timeout{YType::uint32, "timeout"}
{
    yang_name = "watchd"; yang_parent_name = "Cisco-IOS-XR-watchd-cfg";
}

Watchd::~Watchd()
{
}

bool Watchd::has_data() const
{
    return timeout.is_set;
}

bool Watchd::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Watchd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-watchd-cfg:watchd";

    return path_buffer.str();

}

EntityPath Watchd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Watchd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Watchd::get_children()
{
    return children;
}

void Watchd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

std::unique_ptr<Entity> Watchd::clone_ptr()
{
    return std::make_unique<Watchd>();
}


}
}

