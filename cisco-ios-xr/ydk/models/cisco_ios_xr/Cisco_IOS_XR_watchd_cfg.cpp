
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_watchd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_watchd_cfg {

Watchd::Watchd()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "watchd"; yang_parent_name = "Cisco-IOS-XR-watchd-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Watchd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-watchd-cfg:watchd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Watchd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Watchd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Watchd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Watchd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Watchd::clone_ptr() const
{
    return std::make_shared<Watchd>();
}

std::string Watchd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Watchd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Watchd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Watchd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Watchd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Watchdog::Watchdog()
    :
    overload_notification{YType::empty, "overload-notification"},
    overload_throttle_timeout{YType::uint32, "overload-throttle-timeout"},
    restart_deadlock_disable{YType::empty, "restart-deadlock-disable"},
    restart_memoryhog_disable{YType::empty, "restart-memoryhog-disable"}
    	,
    threshold_memory(std::make_shared<Watchdog::ThresholdMemory>())
{
    threshold_memory->parent = this;

    yang_name = "watchdog"; yang_parent_name = "Cisco-IOS-XR-watchd-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(overload_notification.yfilter)
	|| ydk::is_set(overload_throttle_timeout.yfilter)
	|| ydk::is_set(restart_deadlock_disable.yfilter)
	|| ydk::is_set(restart_memoryhog_disable.yfilter)
	|| (threshold_memory !=  nullptr && threshold_memory->has_operation());
}

std::string Watchdog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-watchd-cfg:watchdog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Watchdog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload_notification.is_set || is_set(overload_notification.yfilter)) leaf_name_data.push_back(overload_notification.get_name_leafdata());
    if (overload_throttle_timeout.is_set || is_set(overload_throttle_timeout.yfilter)) leaf_name_data.push_back(overload_throttle_timeout.get_name_leafdata());
    if (restart_deadlock_disable.is_set || is_set(restart_deadlock_disable.yfilter)) leaf_name_data.push_back(restart_deadlock_disable.get_name_leafdata());
    if (restart_memoryhog_disable.is_set || is_set(restart_memoryhog_disable.yfilter)) leaf_name_data.push_back(restart_memoryhog_disable.get_name_leafdata());

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
    if(threshold_memory != nullptr)
    {
        children["threshold-memory"] = threshold_memory;
    }

    return children;
}

void Watchdog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overload-notification")
    {
        overload_notification = value;
        overload_notification.value_namespace = name_space;
        overload_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-throttle-timeout")
    {
        overload_throttle_timeout = value;
        overload_throttle_timeout.value_namespace = name_space;
        overload_throttle_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-deadlock-disable")
    {
        restart_deadlock_disable = value;
        restart_deadlock_disable.value_namespace = name_space;
        restart_deadlock_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-memoryhog-disable")
    {
        restart_memoryhog_disable = value;
        restart_memoryhog_disable.value_namespace = name_space;
        restart_memoryhog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Watchdog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overload-notification")
    {
        overload_notification.yfilter = yfilter;
    }
    if(value_path == "overload-throttle-timeout")
    {
        overload_throttle_timeout.yfilter = yfilter;
    }
    if(value_path == "restart-deadlock-disable")
    {
        restart_deadlock_disable.yfilter = yfilter;
    }
    if(value_path == "restart-memoryhog-disable")
    {
        restart_memoryhog_disable.yfilter = yfilter;
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
    if(name == "threshold-memory" || name == "overload-notification" || name == "overload-throttle-timeout" || name == "restart-deadlock-disable" || name == "restart-memoryhog-disable")
        return true;
    return false;
}

Watchdog::ThresholdMemory::ThresholdMemory()
    :
    critical{YType::uint32, "critical"},
    minor{YType::uint32, "minor"},
    severe{YType::uint32, "severe"}
{

    yang_name = "threshold-memory"; yang_parent_name = "watchdog"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(severe.yfilter);
}

std::string Watchdog::ThresholdMemory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-watchd-cfg:watchdog/" << get_segment_path();
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

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Watchdog::ThresholdMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Watchdog::ThresholdMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Watchdog::ThresholdMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
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
}

void Watchdog::ThresholdMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "severe")
    {
        severe.yfilter = yfilter;
    }
}

bool Watchdog::ThresholdMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "minor" || name == "severe")
        return true;
    return false;
}


}
}

