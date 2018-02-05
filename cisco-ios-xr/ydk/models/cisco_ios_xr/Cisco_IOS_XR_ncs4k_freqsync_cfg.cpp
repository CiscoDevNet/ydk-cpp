
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs4k_freqsync_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs4k_freqsync_cfg {

ClockInterface::ClockInterface()
    :
    clocks(std::make_shared<ClockInterface::Clocks>())
{
    clocks->parent = this;

    yang_name = "clock-interface"; yang_parent_name = "Cisco-IOS-XR-ncs4k-freqsync-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

ClockInterface::~ClockInterface()
{
}

bool ClockInterface::has_data() const
{
    return (clocks !=  nullptr && clocks->has_data());
}

bool ClockInterface::has_operation() const
{
    return is_set(yfilter)
	|| (clocks !=  nullptr && clocks->has_operation());
}

std::string ClockInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-cfg:clock-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClockInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClockInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clocks")
    {
        if(clocks == nullptr)
        {
            clocks = std::make_shared<ClockInterface::Clocks>();
        }
        return clocks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClockInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clocks != nullptr)
    {
        children["clocks"] = clocks;
    }

    return children;
}

void ClockInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClockInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClockInterface::clone_ptr() const
{
    return std::make_shared<ClockInterface>();
}

std::string ClockInterface::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClockInterface::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClockInterface::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClockInterface::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClockInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clocks")
        return true;
    return false;
}

ClockInterface::Clocks::Clocks()
{

    yang_name = "clocks"; yang_parent_name = "clock-interface"; is_top_level_class = false; has_list_ancestor = false;
}

ClockInterface::Clocks::~Clocks()
{
}

bool ClockInterface::Clocks::has_data() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_data())
            return true;
    }
    return false;
}

bool ClockInterface::Clocks::has_operation() const
{
    for (std::size_t index=0; index<clock_.size(); index++)
    {
        if(clock_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ClockInterface::Clocks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-cfg:clock-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string ClockInterface::Clocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClockInterface::Clocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClockInterface::Clocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        auto c = std::make_shared<ClockInterface::Clocks::Clock>();
        c->parent = this;
        clock_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClockInterface::Clocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : clock_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ClockInterface::Clocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClockInterface::Clocks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ClockInterface::Clocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock")
        return true;
    return false;
}

ClockInterface::Clocks::Clock::Clock()
    :
    clock_name{YType::str, "clock-name"}
    	,
    frequency_synchronization(std::make_shared<ClockInterface::Clocks::Clock::FrequencySynchronization>())
{
    frequency_synchronization->parent = this;

    yang_name = "clock"; yang_parent_name = "clocks"; is_top_level_class = false; has_list_ancestor = false;
}

ClockInterface::Clocks::Clock::~Clock()
{
}

bool ClockInterface::Clocks::Clock::has_data() const
{
    return clock_name.is_set
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data());
}

bool ClockInterface::Clocks::Clock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_name.yfilter)
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation());
}

std::string ClockInterface::Clocks::Clock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-cfg:clock-interface/clocks/" << get_segment_path();
    return path_buffer.str();
}

std::string ClockInterface::Clocks::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock" <<"[clock-name='" <<clock_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClockInterface::Clocks::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClockInterface::Clocks::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency-synchronization")
    {
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<ClockInterface::Clocks::Clock::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClockInterface::Clocks::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(frequency_synchronization != nullptr)
    {
        children["frequency-synchronization"] = frequency_synchronization;
    }

    return children;
}

void ClockInterface::Clocks::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClockInterface::Clocks::Clock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool ClockInterface::Clocks::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-synchronization" || name == "clock-name")
        return true;
    return false;
}

ClockInterface::Clocks::Clock::FrequencySynchronization::FrequencySynchronization()
    :
    ssm_disable{YType::empty, "ssm-disable"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    priority{YType::uint32, "priority"},
    selection_input{YType::empty, "selection-input"}
    	,
    input_quality_level(std::make_shared<ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel>())
	,output_quality_level(std::make_shared<ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel>())
{
    input_quality_level->parent = this;
    output_quality_level->parent = this;

    yang_name = "frequency-synchronization"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

ClockInterface::Clocks::Clock::FrequencySynchronization::~FrequencySynchronization()
{
}

bool ClockInterface::Clocks::Clock::FrequencySynchronization::has_data() const
{
    return ssm_disable.is_set
	|| wait_to_restore_time.is_set
	|| time_of_day_priority.is_set
	|| priority.is_set
	|| selection_input.is_set
	|| (input_quality_level !=  nullptr && input_quality_level->has_data())
	|| (output_quality_level !=  nullptr && output_quality_level->has_data());
}

bool ClockInterface::Clocks::Clock::FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssm_disable.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| (input_quality_level !=  nullptr && input_quality_level->has_operation())
	|| (output_quality_level !=  nullptr && output_quality_level->has_operation());
}

std::string ClockInterface::Clocks::Clock::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClockInterface::Clocks::Clock::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClockInterface::Clocks::Clock::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClockInterface::Clocks::Clock::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input_quality_level != nullptr)
    {
        children["input-quality-level"] = input_quality_level;
    }

    if(output_quality_level != nullptr)
    {
        children["output-quality-level"] = output_quality_level;
    }

    return children;
}

void ClockInterface::Clocks::Clock::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssm-disable")
    {
        ssm_disable = value;
        ssm_disable.value_namespace = name_space;
        ssm_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
}

void ClockInterface::Clocks::Clock::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssm-disable")
    {
        ssm_disable.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
}

bool ClockInterface::Clocks::Clock::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-quality-level" || name == "output-quality-level" || name == "ssm-disable" || name == "wait-to-restore-time" || name == "time-of-day-priority" || name == "priority" || name == "selection-input")
        return true;
    return false;
}

ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "input-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool ClockInterface::Clocks::Clock::FrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "output-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool ClockInterface::Clocks::Clock::FrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

FrequencySynchronization::FrequencySynchronization()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    enable{YType::empty, "enable"},
    source_selection_logging{YType::enumeration, "source-selection-logging"},
    clock_interface_source_type{YType::enumeration, "clock-interface-source-type"},
    system_timing_mode{YType::enumeration, "system-timing-mode"}
{

    yang_name = "frequency-synchronization"; yang_parent_name = "Cisco-IOS-XR-ncs4k-freqsync-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    path_buffer << "Cisco-IOS-XR-ncs4k-freqsync-cfg:frequency-synchronization";
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

