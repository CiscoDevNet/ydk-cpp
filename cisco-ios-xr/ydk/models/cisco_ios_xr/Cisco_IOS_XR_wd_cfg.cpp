
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_wd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_wd_cfg {

Watchdog::Watchdog()
    :
    threshold_memory_switchover{YType::uint32, "threshold-memory-switchover"},
    restart_deadlock_disable{YType::empty, "restart-deadlock-disable"},
    monitor_qnet_timeout{YType::uint32, "monitor-qnet-timeout"},
    monitor_cpuhog_timeout{YType::uint32, "monitor-cpuhog-timeout"},
    monitor_procnto_timeout{YType::uint32, "monitor-procnto-timeout"},
    overload_notification{YType::empty, "overload-notification"},
    restart_cpuhog_disable{YType::empty, "restart-cpuhog-disable"},
    restart_memoryhog_disable{YType::empty, "restart-memoryhog-disable"},
    overload_throttle_timeout{YType::uint32, "overload-throttle-timeout"}
        ,
    threshold_memory(std::make_shared<Watchdog::ThresholdMemory>())
{
    threshold_memory->parent = this;

    yang_name = "watchdog"; yang_parent_name = "Cisco-IOS-XR-wd-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Watchdog::~Watchdog()
{
}

bool Watchdog::has_data() const
{
    if (is_presence_container) return true;
    return threshold_memory_switchover.is_set
	|| restart_deadlock_disable.is_set
	|| monitor_qnet_timeout.is_set
	|| monitor_cpuhog_timeout.is_set
	|| monitor_procnto_timeout.is_set
	|| overload_notification.is_set
	|| restart_cpuhog_disable.is_set
	|| restart_memoryhog_disable.is_set
	|| overload_throttle_timeout.is_set
	|| (threshold_memory !=  nullptr && threshold_memory->has_data());
}

bool Watchdog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_memory_switchover.yfilter)
	|| ydk::is_set(restart_deadlock_disable.yfilter)
	|| ydk::is_set(monitor_qnet_timeout.yfilter)
	|| ydk::is_set(monitor_cpuhog_timeout.yfilter)
	|| ydk::is_set(monitor_procnto_timeout.yfilter)
	|| ydk::is_set(overload_notification.yfilter)
	|| ydk::is_set(restart_cpuhog_disable.yfilter)
	|| ydk::is_set(restart_memoryhog_disable.yfilter)
	|| ydk::is_set(overload_throttle_timeout.yfilter)
	|| (threshold_memory !=  nullptr && threshold_memory->has_operation());
}

std::string Watchdog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wd-cfg:watchdog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Watchdog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_memory_switchover.is_set || is_set(threshold_memory_switchover.yfilter)) leaf_name_data.push_back(threshold_memory_switchover.get_name_leafdata());
    if (restart_deadlock_disable.is_set || is_set(restart_deadlock_disable.yfilter)) leaf_name_data.push_back(restart_deadlock_disable.get_name_leafdata());
    if (monitor_qnet_timeout.is_set || is_set(monitor_qnet_timeout.yfilter)) leaf_name_data.push_back(monitor_qnet_timeout.get_name_leafdata());
    if (monitor_cpuhog_timeout.is_set || is_set(monitor_cpuhog_timeout.yfilter)) leaf_name_data.push_back(monitor_cpuhog_timeout.get_name_leafdata());
    if (monitor_procnto_timeout.is_set || is_set(monitor_procnto_timeout.yfilter)) leaf_name_data.push_back(monitor_procnto_timeout.get_name_leafdata());
    if (overload_notification.is_set || is_set(overload_notification.yfilter)) leaf_name_data.push_back(overload_notification.get_name_leafdata());
    if (restart_cpuhog_disable.is_set || is_set(restart_cpuhog_disable.yfilter)) leaf_name_data.push_back(restart_cpuhog_disable.get_name_leafdata());
    if (restart_memoryhog_disable.is_set || is_set(restart_memoryhog_disable.yfilter)) leaf_name_data.push_back(restart_memoryhog_disable.get_name_leafdata());
    if (overload_throttle_timeout.is_set || is_set(overload_throttle_timeout.yfilter)) leaf_name_data.push_back(overload_throttle_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Watchdog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-memory")
    {
        if(threshold_memory == nullptr)
        {
            threshold_memory = std::make_shared<Watchdog::ThresholdMemory>();
        }
        return threshold_memory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold_memory != nullptr)
    {
        children["threshold-memory"] = threshold_memory;
    }

    return children;
}

void Watchdog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-memory-switchover")
    {
        threshold_memory_switchover = value;
        threshold_memory_switchover.value_namespace = name_space;
        threshold_memory_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-deadlock-disable")
    {
        restart_deadlock_disable = value;
        restart_deadlock_disable.value_namespace = name_space;
        restart_deadlock_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-qnet-timeout")
    {
        monitor_qnet_timeout = value;
        monitor_qnet_timeout.value_namespace = name_space;
        monitor_qnet_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-cpuhog-timeout")
    {
        monitor_cpuhog_timeout = value;
        monitor_cpuhog_timeout.value_namespace = name_space;
        monitor_cpuhog_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-procnto-timeout")
    {
        monitor_procnto_timeout = value;
        monitor_procnto_timeout.value_namespace = name_space;
        monitor_procnto_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-notification")
    {
        overload_notification = value;
        overload_notification.value_namespace = name_space;
        overload_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-cpuhog-disable")
    {
        restart_cpuhog_disable = value;
        restart_cpuhog_disable.value_namespace = name_space;
        restart_cpuhog_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-memoryhog-disable")
    {
        restart_memoryhog_disable = value;
        restart_memoryhog_disable.value_namespace = name_space;
        restart_memoryhog_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-throttle-timeout")
    {
        overload_throttle_timeout = value;
        overload_throttle_timeout.value_namespace = name_space;
        overload_throttle_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Watchdog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-memory-switchover")
    {
        threshold_memory_switchover.yfilter = yfilter;
    }
    if(value_path == "restart-deadlock-disable")
    {
        restart_deadlock_disable.yfilter = yfilter;
    }
    if(value_path == "monitor-qnet-timeout")
    {
        monitor_qnet_timeout.yfilter = yfilter;
    }
    if(value_path == "monitor-cpuhog-timeout")
    {
        monitor_cpuhog_timeout.yfilter = yfilter;
    }
    if(value_path == "monitor-procnto-timeout")
    {
        monitor_procnto_timeout.yfilter = yfilter;
    }
    if(value_path == "overload-notification")
    {
        overload_notification.yfilter = yfilter;
    }
    if(value_path == "restart-cpuhog-disable")
    {
        restart_cpuhog_disable.yfilter = yfilter;
    }
    if(value_path == "restart-memoryhog-disable")
    {
        restart_memoryhog_disable.yfilter = yfilter;
    }
    if(value_path == "overload-throttle-timeout")
    {
        overload_throttle_timeout.yfilter = yfilter;
    }
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

std::map<std::pair<std::string, std::string>, std::string> Watchdog::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Watchdog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-memory" || name == "threshold-memory-switchover" || name == "restart-deadlock-disable" || name == "monitor-qnet-timeout" || name == "monitor-cpuhog-timeout" || name == "monitor-procnto-timeout" || name == "overload-notification" || name == "restart-cpuhog-disable" || name == "restart-memoryhog-disable" || name == "overload-throttle-timeout")
        return true;
    return false;
}

Watchdog::ThresholdMemory::ThresholdMemory()
    :
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"},
    critical{YType::uint32, "critical"}
{

    yang_name = "threshold-memory"; yang_parent_name = "watchdog"; is_top_level_class = false; has_list_ancestor = false; 
}

Watchdog::ThresholdMemory::~ThresholdMemory()
{
}

bool Watchdog::ThresholdMemory::has_data() const
{
    if (is_presence_container) return true;
    return minor.is_set
	|| severe.is_set
	|| critical.is_set;
}

bool Watchdog::ThresholdMemory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(severe.yfilter)
	|| ydk::is_set(critical.yfilter);
}

std::string Watchdog::ThresholdMemory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wd-cfg:watchdog/" << get_segment_path();
    return path_buffer.str();
}

std::string Watchdog::ThresholdMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Watchdog::ThresholdMemory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Watchdog::ThresholdMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::ThresholdMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Watchdog::ThresholdMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severe")
    {
        severe = value;
        severe.value_namespace = name_space;
        severe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
}

void Watchdog::ThresholdMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "severe")
    {
        severe.yfilter = yfilter;
    }
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
}

bool Watchdog::ThresholdMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minor" || name == "severe" || name == "critical")
        return true;
    return false;
}


}
}

