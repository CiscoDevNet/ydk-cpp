
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "notifications.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace notifications {

CreateSubscription::CreateSubscription()
    :
    input(std::make_shared<CreateSubscription::Input>())
{
    input->parent = this;

    yang_name = "create-subscription"; yang_parent_name = "notifications"; is_top_level_class = true; has_list_ancestor = false; 
}

CreateSubscription::~CreateSubscription()
{
}

bool CreateSubscription::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CreateSubscription::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CreateSubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifications:create-subscription";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CreateSubscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CreateSubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CreateSubscription::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateSubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CreateSubscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CreateSubscription::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CreateSubscription::clone_ptr() const
{
    return std::make_shared<CreateSubscription>();
}

std::string CreateSubscription::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CreateSubscription::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CreateSubscription::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CreateSubscription::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CreateSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CreateSubscription::Input::Input()
    :
    stream{YType::str, "stream"},
    filter{YType::str, "filter"},
    starttime{YType::str, "startTime"},
    stoptime{YType::str, "stopTime"}
{

    yang_name = "input"; yang_parent_name = "create-subscription"; is_top_level_class = false; has_list_ancestor = false; 
}

CreateSubscription::Input::~Input()
{
}

bool CreateSubscription::Input::has_data() const
{
    if (is_presence_container) return true;
    return stream.is_set
	|| filter.is_set
	|| starttime.is_set
	|| stoptime.is_set;
}

bool CreateSubscription::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(starttime.yfilter)
	|| ydk::is_set(stoptime.yfilter);
}

std::string CreateSubscription::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifications:create-subscription/" << get_segment_path();
    return path_buffer.str();
}

std::string CreateSubscription::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CreateSubscription::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (starttime.is_set || is_set(starttime.yfilter)) leaf_name_data.push_back(starttime.get_name_leafdata());
    if (stoptime.is_set || is_set(stoptime.yfilter)) leaf_name_data.push_back(stoptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CreateSubscription::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateSubscription::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CreateSubscription::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTime")
    {
        starttime = value;
        starttime.value_namespace = name_space;
        starttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopTime")
    {
        stoptime = value;
        stoptime.value_namespace = name_space;
        stoptime.value_namespace_prefix = name_space_prefix;
    }
}

void CreateSubscription::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "startTime")
    {
        starttime.yfilter = yfilter;
    }
    if(value_path == "stopTime")
    {
        stoptime.yfilter = yfilter;
    }
}

bool CreateSubscription::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream" || name == "filter" || name == "startTime" || name == "stopTime")
        return true;
    return false;
}


}
}

