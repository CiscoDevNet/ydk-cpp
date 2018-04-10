
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_sam_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_sam_cfg {

Sam::Sam()
    :
    prompt_interval(nullptr) // presence node
{

    yang_name = "sam"; yang_parent_name = "Cisco-IOS-XR-crypto-sam-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Sam::~Sam()
{
}

bool Sam::has_data() const
{
    return (prompt_interval !=  nullptr && prompt_interval->has_data());
}

bool Sam::has_operation() const
{
    return is_set(yfilter)
	|| (prompt_interval !=  nullptr && prompt_interval->has_operation());
}

std::string Sam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:sam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt-interval")
    {
        if(prompt_interval == nullptr)
        {
            prompt_interval = std::make_shared<Sam::PromptInterval>();
        }
        return prompt_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prompt_interval != nullptr)
    {
        children["prompt-interval"] = prompt_interval;
    }

    return children;
}

void Sam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Sam::clone_ptr() const
{
    return std::make_shared<Sam>();
}

std::string Sam::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sam::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sam::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Sam::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Sam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prompt-interval")
        return true;
    return false;
}

Sam::PromptInterval::PromptInterval()
    :
    action{YType::enumeration, "action"},
    prompt_time{YType::uint32, "prompt-time"}
{

    yang_name = "prompt-interval"; yang_parent_name = "sam"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::PromptInterval::~PromptInterval()
{
}

bool Sam::PromptInterval::has_data() const
{
    return action.is_set
	|| prompt_time.is_set;
}

bool Sam::PromptInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(prompt_time.yfilter);
}

std::string Sam::PromptInterval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:sam/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::PromptInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::PromptInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (prompt_time.is_set || is_set(prompt_time.yfilter)) leaf_name_data.push_back(prompt_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::PromptInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::PromptInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Sam::PromptInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt-time")
    {
        prompt_time = value;
        prompt_time.value_namespace = name_space;
        prompt_time.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::PromptInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "prompt-time")
    {
        prompt_time.yfilter = yfilter;
    }
}

bool Sam::PromptInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "prompt-time")
        return true;
    return false;
}

const Enum::YLeaf CryptoSamAction::proceed {1, "proceed"};
const Enum::YLeaf CryptoSamAction::terminate {2, "terminate"};


}
}

