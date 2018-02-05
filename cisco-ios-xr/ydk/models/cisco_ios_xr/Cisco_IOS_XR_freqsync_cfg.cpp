
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_freqsync_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_cfg {

FrequencySynchronization::FrequencySynchronization()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    enable{YType::empty, "enable"},
    source_selection_logging{YType::enumeration, "source-selection-logging"},
    clock_interface_source_type{YType::enumeration, "clock-interface-source-type"},
    system_timing_mode{YType::enumeration, "system-timing-mode"}
{

    yang_name = "frequency-synchronization"; yang_parent_name = "Cisco-IOS-XR-freqsync-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

FrequencySynchronization::~FrequencySynchronization()
{
}

bool FrequencySynchronization::has_data() const
{
    return quality_level_option.is_set
	|| enable.is_set
	|| source_selection_logging.is_set
	|| clock_interface_source_type.is_set
	|| system_timing_mode.is_set;
}

bool FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source_selection_logging.yfilter)
	|| ydk::is_set(clock_interface_source_type.yfilter)
	|| ydk::is_set(system_timing_mode.yfilter);
}

std::string FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-cfg:frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_selection_logging.is_set || is_set(source_selection_logging.yfilter)) leaf_name_data.push_back(source_selection_logging.get_name_leafdata());
    if (clock_interface_source_type.is_set || is_set(clock_interface_source_type.yfilter)) leaf_name_data.push_back(clock_interface_source_type.get_name_leafdata());
    if (system_timing_mode.is_set || is_set(system_timing_mode.yfilter)) leaf_name_data.push_back(system_timing_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-selection-logging")
    {
        source_selection_logging = value;
        source_selection_logging.value_namespace = name_space;
        source_selection_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-interface-source-type")
    {
        clock_interface_source_type = value;
        clock_interface_source_type.value_namespace = name_space;
        clock_interface_source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-timing-mode")
    {
        system_timing_mode = value;
        system_timing_mode.value_namespace = name_space;
        system_timing_mode.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source-selection-logging")
    {
        source_selection_logging.yfilter = yfilter;
    }
    if(value_path == "clock-interface-source-type")
    {
        clock_interface_source_type.yfilter = yfilter;
    }
    if(value_path == "system-timing-mode")
    {
        system_timing_mode.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> FrequencySynchronization::clone_ptr() const
{
    return std::make_shared<FrequencySynchronization>();
}

std::string FrequencySynchronization::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FrequencySynchronization::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FrequencySynchronization::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FrequencySynchronization::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "enable" || name == "source-selection-logging" || name == "clock-interface-source-type" || name == "system-timing-mode")
        return true;
    return false;
}

const Enum::YLeaf FsyncSystemTimingMode::line_only {2, "line-only"};
const Enum::YLeaf FsyncSystemTimingMode::clock_only {3, "clock-only"};

const Enum::YLeaf FsyncClockSource::system {1, "system"};
const Enum::YLeaf FsyncClockSource::independent {3, "independent"};

const Enum::YLeaf FsyncSourceSelectionLogging::changes {1, "changes"};
const Enum::YLeaf FsyncSourceSelectionLogging::errors {2, "errors"};


}
}

