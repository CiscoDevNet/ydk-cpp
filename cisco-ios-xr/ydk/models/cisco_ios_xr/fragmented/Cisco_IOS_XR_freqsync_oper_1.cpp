
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_freqsync_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_oper {

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

