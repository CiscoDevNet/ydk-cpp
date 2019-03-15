
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_freqsync_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_oper {

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::QualityLevelEffectiveInput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-input"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::~QualityLevelEffectiveInput()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::QualityLevelEffectiveOutput()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-effective-output"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::~QualityLevelEffectiveOutput()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-effective-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelEffectiveOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::QualityLevelSelectedSource()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level-selected-source"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::~QualityLevelSelectedSource()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level-selected-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::QualityLevelSelectedSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::SpaSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "spa-selection-point"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::~SpaSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spa-selection-point";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::SpaSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::NodeSelectionPoint()
    :
    selection_point{YType::uint8, "selection-point"},
    selection_point_description{YType::str, "selection-point-description"}
{

    yang_name = "node-selection-point"; yang_parent_name = "clock-data"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::~NodeSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| selection_point_description.is_set;
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(selection_point_description.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-selection-point";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::ClockDatas::ClockData::NodeSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "selection-point-description")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInputs()
    :
    selection_point_input(this, {})
{

    yang_name = "selection-point-inputs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::~SelectionPointInputs()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<selection_point_input.len(); index++)
    {
        if(selection_point_input[index]->has_data())
            return true;
    }
    return false;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::has_operation() const
{
    for (std::size_t index=0; index<selection_point_input.len(); index++)
    {
        if(selection_point_input[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-inputs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point-input")
    {
        auto ent_ = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput>();
        ent_->parent = this;
        selection_point_input.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : selection_point_input.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-input")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::SelectionPointInput()
    :
    selection_point{YType::uint32, "selection-point"},
    stream_type{YType::enumeration, "stream-type"},
    source_type{YType::enumeration, "source-type"},
    interface{YType::str, "interface"},
    clock_port{YType::uint32, "clock-port"},
    last_node{YType::str, "last-node"},
    last_selection_point{YType::uint32, "last-selection-point"},
    output_id{YType::uint32, "output-id"},
    supports_frequency{YType::boolean, "supports-frequency"},
    supports_time_of_day{YType::boolean, "supports-time-of-day"},
    priority{YType::uint8, "priority"},
    time_of_day_priority{YType::uint8, "time-of-day-priority"},
    selected{YType::boolean, "selected"},
    output_id_xr{YType::uint8, "output-id-xr"},
    platform_status{YType::enumeration, "platform-status"},
    platform_failed_reason{YType::str, "platform-failed-reason"}
        ,
    input_selection_point(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint>())
    , stream(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream>())
    , original_source(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource>())
    , quality_level(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel>())
{
    input_selection_point->parent = this;
    stream->parent = this;
    original_source->parent = this;
    quality_level->parent = this;

    yang_name = "selection-point-input"; yang_parent_name = "selection-point-inputs"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::~SelectionPointInput()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::has_data() const
{
    if (is_presence_container) return true;
    return selection_point.is_set
	|| stream_type.is_set
	|| source_type.is_set
	|| interface.is_set
	|| clock_port.is_set
	|| last_node.is_set
	|| last_selection_point.is_set
	|| output_id.is_set
	|| supports_frequency.is_set
	|| supports_time_of_day.is_set
	|| priority.is_set
	|| time_of_day_priority.is_set
	|| selected.is_set
	|| output_id_xr.is_set
	|| platform_status.is_set
	|| platform_failed_reason.is_set
	|| (input_selection_point !=  nullptr && input_selection_point->has_data())
	|| (stream !=  nullptr && stream->has_data())
	|| (original_source !=  nullptr && original_source->has_data())
	|| (quality_level !=  nullptr && quality_level->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point.yfilter)
	|| ydk::is_set(stream_type.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(clock_port.yfilter)
	|| ydk::is_set(last_node.yfilter)
	|| ydk::is_set(last_selection_point.yfilter)
	|| ydk::is_set(output_id.yfilter)
	|| ydk::is_set(supports_frequency.yfilter)
	|| ydk::is_set(supports_time_of_day.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(selected.yfilter)
	|| ydk::is_set(output_id_xr.yfilter)
	|| ydk::is_set(platform_status.yfilter)
	|| ydk::is_set(platform_failed_reason.yfilter)
	|| (input_selection_point !=  nullptr && input_selection_point->has_operation())
	|| (stream !=  nullptr && stream->has_operation())
	|| (original_source !=  nullptr && original_source->has_operation())
	|| (quality_level !=  nullptr && quality_level->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-input";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point.is_set || is_set(selection_point.yfilter)) leaf_name_data.push_back(selection_point.get_name_leafdata());
    if (stream_type.is_set || is_set(stream_type.yfilter)) leaf_name_data.push_back(stream_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (clock_port.is_set || is_set(clock_port.yfilter)) leaf_name_data.push_back(clock_port.get_name_leafdata());
    if (last_node.is_set || is_set(last_node.yfilter)) leaf_name_data.push_back(last_node.get_name_leafdata());
    if (last_selection_point.is_set || is_set(last_selection_point.yfilter)) leaf_name_data.push_back(last_selection_point.get_name_leafdata());
    if (output_id.is_set || is_set(output_id.yfilter)) leaf_name_data.push_back(output_id.get_name_leafdata());
    if (supports_frequency.is_set || is_set(supports_frequency.yfilter)) leaf_name_data.push_back(supports_frequency.get_name_leafdata());
    if (supports_time_of_day.is_set || is_set(supports_time_of_day.yfilter)) leaf_name_data.push_back(supports_time_of_day.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (selected.is_set || is_set(selected.yfilter)) leaf_name_data.push_back(selected.get_name_leafdata());
    if (output_id_xr.is_set || is_set(output_id_xr.yfilter)) leaf_name_data.push_back(output_id_xr.get_name_leafdata());
    if (platform_status.is_set || is_set(platform_status.yfilter)) leaf_name_data.push_back(platform_status.get_name_leafdata());
    if (platform_failed_reason.is_set || is_set(platform_failed_reason.yfilter)) leaf_name_data.push_back(platform_failed_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-selection-point")
    {
        if(input_selection_point == nullptr)
        {
            input_selection_point = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint>();
        }
        return input_selection_point;
    }

    if(child_yang_name == "stream")
    {
        if(stream == nullptr)
        {
            stream = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream>();
        }
        return stream;
    }

    if(child_yang_name == "original-source")
    {
        if(original_source == nullptr)
        {
            original_source = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource>();
        }
        return original_source;
    }

    if(child_yang_name == "quality-level")
    {
        if(quality_level == nullptr)
        {
            quality_level = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel>();
        }
        return quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input_selection_point != nullptr)
    {
        _children["input-selection-point"] = input_selection_point;
    }

    if(stream != nullptr)
    {
        _children["stream"] = stream;
    }

    if(original_source != nullptr)
    {
        _children["original-source"] = original_source;
    }

    if(quality_level != nullptr)
    {
        _children["quality-level"] = quality_level;
    }

    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point")
    {
        selection_point = value;
        selection_point.value_namespace = name_space;
        selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stream-type")
    {
        stream_type = value;
        stream_type.value_namespace = name_space;
        stream_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-port")
    {
        clock_port = value;
        clock_port.value_namespace = name_space;
        clock_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-node")
    {
        last_node = value;
        last_node.value_namespace = name_space;
        last_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-selection-point")
    {
        last_selection_point = value;
        last_selection_point.value_namespace = name_space;
        last_selection_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-id")
    {
        output_id = value;
        output_id.value_namespace = name_space;
        output_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency = value;
        supports_frequency.value_namespace = name_space;
        supports_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day = value;
        supports_time_of_day.value_namespace = name_space;
        supports_time_of_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected")
    {
        selected = value;
        selected.value_namespace = name_space;
        selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-id-xr")
    {
        output_id_xr = value;
        output_id_xr.value_namespace = name_space;
        output_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-status")
    {
        platform_status = value;
        platform_status.value_namespace = name_space;
        platform_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-failed-reason")
    {
        platform_failed_reason = value;
        platform_failed_reason.value_namespace = name_space;
        platform_failed_reason.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point")
    {
        selection_point.yfilter = yfilter;
    }
    if(value_path == "stream-type")
    {
        stream_type.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "clock-port")
    {
        clock_port.yfilter = yfilter;
    }
    if(value_path == "last-node")
    {
        last_node.yfilter = yfilter;
    }
    if(value_path == "last-selection-point")
    {
        last_selection_point.yfilter = yfilter;
    }
    if(value_path == "output-id")
    {
        output_id.yfilter = yfilter;
    }
    if(value_path == "supports-frequency")
    {
        supports_frequency.yfilter = yfilter;
    }
    if(value_path == "supports-time-of-day")
    {
        supports_time_of_day.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "selected")
    {
        selected.yfilter = yfilter;
    }
    if(value_path == "output-id-xr")
    {
        output_id_xr.yfilter = yfilter;
    }
    if(value_path == "platform-status")
    {
        platform_status.yfilter = yfilter;
    }
    if(value_path == "platform-failed-reason")
    {
        platform_failed_reason.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-selection-point" || name == "stream" || name == "original-source" || name == "quality-level" || name == "selection-point" || name == "stream-type" || name == "source-type" || name == "interface" || name == "clock-port" || name == "last-node" || name == "last-selection-point" || name == "output-id" || name == "supports-frequency" || name == "supports-time-of-day" || name == "priority" || name == "time-of-day-priority" || name == "selected" || name == "output-id-xr" || name == "platform-status" || name == "platform-failed-reason")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::InputSelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "input-selection-point"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::~InputSelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::InputSelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::Stream()
    :
    stream_input{YType::enumeration, "stream-input"}
        ,
    source_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId>())
    , selection_point_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId>())
{
    source_id->parent = this;
    selection_point_id->parent = this;

    yang_name = "stream"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::~Stream()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::has_data() const
{
    if (is_presence_container) return true;
    return stream_input.is_set
	|| (source_id !=  nullptr && source_id->has_data())
	|| (selection_point_id !=  nullptr && selection_point_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stream_input.yfilter)
	|| (source_id !=  nullptr && source_id->has_operation())
	|| (selection_point_id !=  nullptr && selection_point_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stream";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stream_input.is_set || is_set(stream_input.yfilter)) leaf_name_data.push_back(stream_input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-id")
    {
        if(source_id == nullptr)
        {
            source_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId>();
        }
        return source_id;
    }

    if(child_yang_name == "selection-point-id")
    {
        if(selection_point_id == nullptr)
        {
            selection_point_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId>();
        }
        return selection_point_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_id != nullptr)
    {
        _children["source-id"] = source_id;
    }

    if(selection_point_id != nullptr)
    {
        _children["selection-point-id"] = selection_point_id;
    }

    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stream-input")
    {
        stream_input = value;
        stream_input.value_namespace = name_space;
        stream_input.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stream-input")
    {
        stream_input.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-id" || name == "selection-point-id" || name == "stream-input")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::SourceId()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId>())
    , internal_clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId>())
{
    clock_id->parent = this;
    internal_clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "source-id"; yang_parent_name = "stream"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::~SourceId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (internal_clock_id !=  nullptr && internal_clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (internal_clock_id !=  nullptr && internal_clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "internal-clock-id")
    {
        if(internal_clock_id == nullptr)
        {
            internal_clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId>();
        }
        return internal_clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_id != nullptr)
    {
        _children["clock-id"] = clock_id;
    }

    if(internal_clock_id != nullptr)
    {
        _children["internal-clock-id"] = internal_clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        _children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "internal-clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "source-id"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::InternalClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "internal-clock-id"; yang_parent_name = "source-id"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::~InternalClockId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::InternalClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "source-id"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SourceId::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPointId()
    :
    output_id{YType::uint8, "output-id"}
        ,
    selection_point(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint>())
{
    selection_point->parent = this;

    yang_name = "selection-point-id"; yang_parent_name = "stream"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::~SelectionPointId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::has_data() const
{
    if (is_presence_container) return true;
    return output_id.is_set
	|| (selection_point !=  nullptr && selection_point->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output_id.yfilter)
	|| (selection_point !=  nullptr && selection_point->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output_id.is_set || is_set(output_id.yfilter)) leaf_name_data.push_back(output_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection-point")
    {
        if(selection_point == nullptr)
        {
            selection_point = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint>();
        }
        return selection_point;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(selection_point != nullptr)
    {
        _children["selection-point"] = selection_point;
    }

    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output-id")
    {
        output_id = value;
        output_id.value_namespace = name_space;
        output_id.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output-id")
    {
        output_id.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point" || name == "output-id")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::SelectionPoint()
    :
    selection_point_type{YType::uint8, "selection-point-type"},
    selection_point_description{YType::str, "selection-point-description"},
    node{YType::str, "node"}
{

    yang_name = "selection-point"; yang_parent_name = "selection-point-id"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::~SelectionPoint()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::has_data() const
{
    if (is_presence_container) return true;
    return selection_point_type.is_set
	|| selection_point_description.is_set
	|| node.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selection_point_type.yfilter)
	|| ydk::is_set(selection_point_description.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selection_point_type.is_set || is_set(selection_point_type.yfilter)) leaf_name_data.push_back(selection_point_type.get_name_leafdata());
    if (selection_point_description.is_set || is_set(selection_point_description.yfilter)) leaf_name_data.push_back(selection_point_description.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type = value;
        selection_point_type.value_namespace = name_space;
        selection_point_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description = value;
        selection_point_description.value_namespace = name_space;
        selection_point_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selection-point-type")
    {
        selection_point_type.yfilter = yfilter;
    }
    if(value_path == "selection-point-description")
    {
        selection_point_description.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::Stream::SelectionPointId::SelectionPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection-point-type" || name == "selection-point-description" || name == "node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::OriginalSource()
    :
    source_class{YType::enumeration, "source-class"},
    ethernet_interface{YType::str, "ethernet-interface"},
    sonet_interface{YType::str, "sonet-interface"},
    ptp_node{YType::str, "ptp-node"},
    satellite_access_interface{YType::str, "satellite-access-interface"},
    ntp_node{YType::str, "ntp-node"}
        ,
    clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId>())
    , internal_clock_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId>())
    , gnss_receiver_id(std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId>())
{
    clock_id->parent = this;
    internal_clock_id->parent = this;
    gnss_receiver_id->parent = this;

    yang_name = "original-source"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::~OriginalSource()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::has_data() const
{
    if (is_presence_container) return true;
    return source_class.is_set
	|| ethernet_interface.is_set
	|| sonet_interface.is_set
	|| ptp_node.is_set
	|| satellite_access_interface.is_set
	|| ntp_node.is_set
	|| (clock_id !=  nullptr && clock_id->has_data())
	|| (internal_clock_id !=  nullptr && internal_clock_id->has_data())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_data());
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_class.yfilter)
	|| ydk::is_set(ethernet_interface.yfilter)
	|| ydk::is_set(sonet_interface.yfilter)
	|| ydk::is_set(ptp_node.yfilter)
	|| ydk::is_set(satellite_access_interface.yfilter)
	|| ydk::is_set(ntp_node.yfilter)
	|| (clock_id !=  nullptr && clock_id->has_operation())
	|| (internal_clock_id !=  nullptr && internal_clock_id->has_operation())
	|| (gnss_receiver_id !=  nullptr && gnss_receiver_id->has_operation());
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_class.is_set || is_set(source_class.yfilter)) leaf_name_data.push_back(source_class.get_name_leafdata());
    if (ethernet_interface.is_set || is_set(ethernet_interface.yfilter)) leaf_name_data.push_back(ethernet_interface.get_name_leafdata());
    if (sonet_interface.is_set || is_set(sonet_interface.yfilter)) leaf_name_data.push_back(sonet_interface.get_name_leafdata());
    if (ptp_node.is_set || is_set(ptp_node.yfilter)) leaf_name_data.push_back(ptp_node.get_name_leafdata());
    if (satellite_access_interface.is_set || is_set(satellite_access_interface.yfilter)) leaf_name_data.push_back(satellite_access_interface.get_name_leafdata());
    if (ntp_node.is_set || is_set(ntp_node.yfilter)) leaf_name_data.push_back(ntp_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-id")
    {
        if(clock_id == nullptr)
        {
            clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId>();
        }
        return clock_id;
    }

    if(child_yang_name == "internal-clock-id")
    {
        if(internal_clock_id == nullptr)
        {
            internal_clock_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId>();
        }
        return internal_clock_id;
    }

    if(child_yang_name == "gnss-receiver-id")
    {
        if(gnss_receiver_id == nullptr)
        {
            gnss_receiver_id = std::make_shared<FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId>();
        }
        return gnss_receiver_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_id != nullptr)
    {
        _children["clock-id"] = clock_id;
    }

    if(internal_clock_id != nullptr)
    {
        _children["internal-clock-id"] = internal_clock_id;
    }

    if(gnss_receiver_id != nullptr)
    {
        _children["gnss-receiver-id"] = gnss_receiver_id;
    }

    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-class")
    {
        source_class = value;
        source_class.value_namespace = name_space;
        source_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface = value;
        ethernet_interface.value_namespace = name_space;
        ethernet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface = value;
        sonet_interface.value_namespace = name_space;
        sonet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptp-node")
    {
        ptp_node = value;
        ptp_node.value_namespace = name_space;
        ptp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface = value;
        satellite_access_interface.value_namespace = name_space;
        satellite_access_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp-node")
    {
        ntp_node = value;
        ntp_node.value_namespace = name_space;
        ntp_node.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-class")
    {
        source_class.yfilter = yfilter;
    }
    if(value_path == "ethernet-interface")
    {
        ethernet_interface.yfilter = yfilter;
    }
    if(value_path == "sonet-interface")
    {
        sonet_interface.yfilter = yfilter;
    }
    if(value_path == "ptp-node")
    {
        ptp_node.yfilter = yfilter;
    }
    if(value_path == "satellite-access-interface")
    {
        satellite_access_interface.yfilter = yfilter;
    }
    if(value_path == "ntp-node")
    {
        ntp_node.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-id" || name == "internal-clock-id" || name == "gnss-receiver-id" || name == "source-class" || name == "ethernet-interface" || name == "sonet-interface" || name == "ptp-node" || name == "satellite-access-interface" || name == "ntp-node")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::ClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "clock-id"; yang_parent_name = "original-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::~ClockId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::ClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::InternalClockId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "internal-clock-id"; yang_parent_name = "original-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::~InternalClockId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-clock-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::InternalClockId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::GnssReceiverId()
    :
    node{YType::str, "node"},
    id{YType::uint32, "id"},
    clock_name{YType::str, "clock-name"}
{

    yang_name = "gnss-receiver-id"; yang_parent_name = "original-source"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::~GnssReceiverId()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| id.is_set
	|| clock_name.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(clock_name.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnss-receiver-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (clock_name.is_set || is_set(clock_name.yfilter)) leaf_name_data.push_back(clock_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-name")
    {
        clock_name = value;
        clock_name.value_namespace = name_space;
        clock_name.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "clock-name")
    {
        clock_name.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::OriginalSource::GnssReceiverId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "id" || name == "clock-name")
        return true;
    return false;
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::QualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    option1_value{YType::enumeration, "option1-value"},
    option2_generation1_value{YType::enumeration, "option2-generation1-value"},
    option2_generation2_value{YType::enumeration, "option2-generation2-value"}
{

    yang_name = "quality-level"; yang_parent_name = "selection-point-input"; is_top_level_class = false; has_list_ancestor = true; 
}

FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::~QualityLevel()
{
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::has_data() const
{
    if (is_presence_container) return true;
    return quality_level_option.is_set
	|| option1_value.is_set
	|| option2_generation1_value.is_set
	|| option2_generation2_value.is_set;
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(option1_value.yfilter)
	|| ydk::is_set(option2_generation1_value.yfilter)
	|| ydk::is_set(option2_generation2_value.yfilter);
}

std::string FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (option1_value.is_set || is_set(option1_value.yfilter)) leaf_name_data.push_back(option1_value.get_name_leafdata());
    if (option2_generation1_value.is_set || is_set(option2_generation1_value.yfilter)) leaf_name_data.push_back(option2_generation1_value.get_name_leafdata());
    if (option2_generation2_value.is_set || is_set(option2_generation2_value.yfilter)) leaf_name_data.push_back(option2_generation2_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option1-value")
    {
        option1_value = value;
        option1_value.value_namespace = name_space;
        option1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value = value;
        option2_generation1_value.value_namespace = name_space;
        option2_generation1_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value = value;
        option2_generation2_value.value_namespace = name_space;
        option2_generation2_value.value_namespace_prefix = name_space_prefix;
    }
}

void FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "option1-value")
    {
        option1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation1-value")
    {
        option2_generation1_value.yfilter = yfilter;
    }
    if(value_path == "option2-generation2-value")
    {
        option2_generation2_value.yfilter = yfilter;
    }
}

bool FrequencySynchronization::Nodes::Node::SelectionPointInputs::SelectionPointInput::QualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "option1-value" || name == "option2-generation1-value" || name == "option2-generation2-value")
        return true;
    return false;
}


}
}

