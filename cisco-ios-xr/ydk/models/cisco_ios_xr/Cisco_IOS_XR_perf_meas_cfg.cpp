
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_perf_meas_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_perf_meas_cfg {

PerformanceMeasurement::PerformanceMeasurement()
    :
    enable_performance_measurement{YType::empty, "enable-performance-measurement"}
        ,
    delay_profile_interface(std::make_shared<PerformanceMeasurement::DelayProfileInterface>())
    , interfaces(std::make_shared<PerformanceMeasurement::Interfaces>())
{
    delay_profile_interface->parent = this;
    interfaces->parent = this;

    yang_name = "performance-measurement"; yang_parent_name = "Cisco-IOS-XR-perf-meas-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

PerformanceMeasurement::~PerformanceMeasurement()
{
}

bool PerformanceMeasurement::has_data() const
{
    if (is_presence_container) return true;
    return enable_performance_measurement.is_set
	|| (delay_profile_interface !=  nullptr && delay_profile_interface->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool PerformanceMeasurement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_performance_measurement.yfilter)
	|| (delay_profile_interface !=  nullptr && delay_profile_interface->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PerformanceMeasurement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-cfg:performance-measurement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_performance_measurement.is_set || is_set(enable_performance_measurement.yfilter)) leaf_name_data.push_back(enable_performance_measurement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-profile-interface")
    {
        if(delay_profile_interface == nullptr)
        {
            delay_profile_interface = std::make_shared<PerformanceMeasurement::DelayProfileInterface>();
        }
        return delay_profile_interface;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PerformanceMeasurement::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay_profile_interface != nullptr)
    {
        _children["delay-profile-interface"] = delay_profile_interface;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void PerformanceMeasurement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-performance-measurement")
    {
        enable_performance_measurement = value;
        enable_performance_measurement.value_namespace = name_space;
        enable_performance_measurement.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-performance-measurement")
    {
        enable_performance_measurement.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::clone_ptr() const
{
    return std::make_shared<PerformanceMeasurement>();
}

std::string PerformanceMeasurement::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PerformanceMeasurement::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PerformanceMeasurement::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PerformanceMeasurement::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PerformanceMeasurement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-profile-interface" || name == "interfaces" || name == "enable-performance-measurement")
        return true;
    return false;
}

PerformanceMeasurement::DelayProfileInterface::DelayProfileInterface()
    :
    advertisement(std::make_shared<PerformanceMeasurement::DelayProfileInterface::Advertisement>())
    , probe(std::make_shared<PerformanceMeasurement::DelayProfileInterface::Probe>())
{
    advertisement->parent = this;
    probe->parent = this;

    yang_name = "delay-profile-interface"; yang_parent_name = "performance-measurement"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::DelayProfileInterface::~DelayProfileInterface()
{
}

bool PerformanceMeasurement::DelayProfileInterface::has_data() const
{
    if (is_presence_container) return true;
    return (advertisement !=  nullptr && advertisement->has_data())
	|| (probe !=  nullptr && probe->has_data());
}

bool PerformanceMeasurement::DelayProfileInterface::has_operation() const
{
    return is_set(yfilter)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (probe !=  nullptr && probe->has_operation());
}

std::string PerformanceMeasurement::DelayProfileInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-cfg:performance-measurement/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::DelayProfileInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-profile-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::DelayProfileInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::DelayProfileInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<PerformanceMeasurement::DelayProfileInterface::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "probe")
    {
        if(probe == nullptr)
        {
            probe = std::make_shared<PerformanceMeasurement::DelayProfileInterface::Probe>();
        }
        return probe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::DelayProfileInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertisement != nullptr)
    {
        _children["advertisement"] = advertisement;
    }

    if(probe != nullptr)
    {
        _children["probe"] = probe;
    }

    return _children;
}

void PerformanceMeasurement::DelayProfileInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::DelayProfileInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::DelayProfileInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "probe")
        return true;
    return false;
}

PerformanceMeasurement::DelayProfileInterface::Advertisement::Advertisement()
    :
    accelerated(std::make_shared<PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated>())
    , periodic(std::make_shared<PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic>())
{
    accelerated->parent = this;
    periodic->parent = this;

    yang_name = "advertisement"; yang_parent_name = "delay-profile-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::DelayProfileInterface::Advertisement::~Advertisement()
{
}

bool PerformanceMeasurement::DelayProfileInterface::Advertisement::has_data() const
{
    if (is_presence_container) return true;
    return (accelerated !=  nullptr && accelerated->has_data())
	|| (periodic !=  nullptr && periodic->has_data());
}

bool PerformanceMeasurement::DelayProfileInterface::Advertisement::has_operation() const
{
    return is_set(yfilter)
	|| (accelerated !=  nullptr && accelerated->has_operation())
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string PerformanceMeasurement::DelayProfileInterface::Advertisement::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-cfg:performance-measurement/delay-profile-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::DelayProfileInterface::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::DelayProfileInterface::Advertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::DelayProfileInterface::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accelerated")
    {
        if(accelerated == nullptr)
        {
            accelerated = std::make_shared<PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated>();
        }
        return accelerated;
    }

    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::DelayProfileInterface::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accelerated != nullptr)
    {
        _children["accelerated"] = accelerated;
    }

    if(periodic != nullptr)
    {
        _children["periodic"] = periodic;
    }

    return _children;
}

void PerformanceMeasurement::DelayProfileInterface::Advertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::DelayProfileInterface::Advertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::DelayProfileInterface::Advertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accelerated" || name == "periodic")
        return true;
    return false;
}

PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::Accelerated()
    :
    threshold{YType::uint32, "threshold"},
    minimum_change{YType::uint32, "minimum-change"},
    enable{YType::empty, "enable"}
{

    yang_name = "accelerated"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::~Accelerated()
{
}

bool PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| minimum_change.is_set
	|| enable.is_set;
}

bool PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(minimum_change.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-cfg:performance-measurement/delay-profile-interface/advertisement/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accelerated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (minimum_change.is_set || is_set(minimum_change.yfilter)) leaf_name_data.push_back(minimum_change.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-change")
    {
        minimum_change = value;
        minimum_change.value_namespace = name_space;
        minimum_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-change")
    {
        minimum_change.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::DelayProfileInterface::Advertisement::Accelerated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "minimum-change" || name == "enable")
        return true;
    return false;
}

PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::Periodic()
    :
    interval{YType::uint32, "interval"},
    threshold{YType::uint32, "threshold"},
    minimum_change{YType::uint32, "minimum-change"},
    disable{YType::empty, "disable"}
{

    yang_name = "periodic"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::~Periodic()
{
}

bool PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| threshold.is_set
	|| minimum_change.is_set
	|| disable.is_set;
}

bool PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(minimum_change.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-cfg:performance-measurement/delay-profile-interface/advertisement/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (minimum_change.is_set || is_set(minimum_change.yfilter)) leaf_name_data.push_back(minimum_change.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-change")
    {
        minimum_change = value;
        minimum_change.value_namespace = name_space;
        minimum_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-change")
    {
        minimum_change.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::DelayProfileInterface::Advertisement::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "threshold" || name == "minimum-change" || name == "disable")
        return true;
    return false;
}

PerformanceMeasurement::DelayProfileInterface::Probe::Probe()
    :
    one_way_measurement{YType::empty, "one-way-measurement"},
    interval{YType::uint32, "interval"}
        ,
    burst(std::make_shared<PerformanceMeasurement::DelayProfileInterface::Probe::Burst>())
{
    burst->parent = this;

    yang_name = "probe"; yang_parent_name = "delay-profile-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::DelayProfileInterface::Probe::~Probe()
{
}

bool PerformanceMeasurement::DelayProfileInterface::Probe::has_data() const
{
    if (is_presence_container) return true;
    return one_way_measurement.is_set
	|| interval.is_set
	|| (burst !=  nullptr && burst->has_data());
}

bool PerformanceMeasurement::DelayProfileInterface::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(one_way_measurement.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (burst !=  nullptr && burst->has_operation());
}

std::string PerformanceMeasurement::DelayProfileInterface::Probe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-cfg:performance-measurement/delay-profile-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::DelayProfileInterface::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::DelayProfileInterface::Probe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (one_way_measurement.is_set || is_set(one_way_measurement.yfilter)) leaf_name_data.push_back(one_way_measurement.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::DelayProfileInterface::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "burst")
    {
        if(burst == nullptr)
        {
            burst = std::make_shared<PerformanceMeasurement::DelayProfileInterface::Probe::Burst>();
        }
        return burst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::DelayProfileInterface::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(burst != nullptr)
    {
        _children["burst"] = burst;
    }

    return _children;
}

void PerformanceMeasurement::DelayProfileInterface::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "one-way-measurement")
    {
        one_way_measurement = value;
        one_way_measurement.value_namespace = name_space;
        one_way_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::DelayProfileInterface::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "one-way-measurement")
    {
        one_way_measurement.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::DelayProfileInterface::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst" || name == "one-way-measurement" || name == "interval")
        return true;
    return false;
}

PerformanceMeasurement::DelayProfileInterface::Probe::Burst::Burst()
    :
    count{YType::uint32, "count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "burst"; yang_parent_name = "probe"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::DelayProfileInterface::Probe::Burst::~Burst()
{
}

bool PerformanceMeasurement::DelayProfileInterface::Probe::Burst::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| interval.is_set;
}

bool PerformanceMeasurement::DelayProfileInterface::Probe::Burst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string PerformanceMeasurement::DelayProfileInterface::Probe::Burst::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-cfg:performance-measurement/delay-profile-interface/probe/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::DelayProfileInterface::Probe::Burst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "burst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::DelayProfileInterface::Probe::Burst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::DelayProfileInterface::Probe::Burst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::DelayProfileInterface::Probe::Burst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceMeasurement::DelayProfileInterface::Probe::Burst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::DelayProfileInterface::Probe::Burst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::DelayProfileInterface::Probe::Burst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

PerformanceMeasurement::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "performance-measurement"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::Interfaces::~Interfaces()
{
}

bool PerformanceMeasurement::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceMeasurement::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceMeasurement::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-cfg:performance-measurement/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<PerformanceMeasurement::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceMeasurement::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceMeasurement::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceMeasurement::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

PerformanceMeasurement::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    enable_interface{YType::empty, "enable-interface"}
        ,
    delay_measurement(std::make_shared<PerformanceMeasurement::Interfaces::Interface::DelayMeasurement>())
{
    delay_measurement->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceMeasurement::Interfaces::Interface::~Interface()
{
}

bool PerformanceMeasurement::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| enable_interface.is_set
	|| (delay_measurement !=  nullptr && delay_measurement->has_data());
}

bool PerformanceMeasurement::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enable_interface.yfilter)
	|| (delay_measurement !=  nullptr && delay_measurement->has_operation());
}

std::string PerformanceMeasurement::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-perf-meas-cfg:performance-measurement/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceMeasurement::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable_interface.is_set || is_set(enable_interface.yfilter)) leaf_name_data.push_back(enable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-measurement")
    {
        if(delay_measurement == nullptr)
        {
            delay_measurement = std::make_shared<PerformanceMeasurement::Interfaces::Interface::DelayMeasurement>();
        }
        return delay_measurement;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay_measurement != nullptr)
    {
        _children["delay-measurement"] = delay_measurement;
    }

    return _children;
}

void PerformanceMeasurement::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-interface")
    {
        enable_interface = value;
        enable_interface.value_namespace = name_space;
        enable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enable-interface")
    {
        enable_interface.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-measurement" || name == "interface-name" || name == "enable-interface")
        return true;
    return false;
}

PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::DelayMeasurement()
    :
    enable_delay_measurement{YType::empty, "enable-delay-measurement"},
    advertise_delay{YType::uint32, "advertise-delay"}
{

    yang_name = "delay-measurement"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::~DelayMeasurement()
{
}

bool PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::has_data() const
{
    if (is_presence_container) return true;
    return enable_delay_measurement.is_set
	|| advertise_delay.is_set;
}

bool PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_delay_measurement.yfilter)
	|| ydk::is_set(advertise_delay.yfilter);
}

std::string PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-measurement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_delay_measurement.is_set || is_set(enable_delay_measurement.yfilter)) leaf_name_data.push_back(enable_delay_measurement.get_name_leafdata());
    if (advertise_delay.is_set || is_set(advertise_delay.yfilter)) leaf_name_data.push_back(advertise_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-delay-measurement")
    {
        enable_delay_measurement = value;
        enable_delay_measurement.value_namespace = name_space;
        enable_delay_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-delay")
    {
        advertise_delay = value;
        advertise_delay.value_namespace = name_space;
        advertise_delay.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-delay-measurement")
    {
        enable_delay_measurement.yfilter = yfilter;
    }
    if(value_path == "advertise-delay")
    {
        advertise_delay.yfilter = yfilter;
    }
}

bool PerformanceMeasurement::Interfaces::Interface::DelayMeasurement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-delay-measurement" || name == "advertise-delay")
        return true;
    return false;
}


}
}

