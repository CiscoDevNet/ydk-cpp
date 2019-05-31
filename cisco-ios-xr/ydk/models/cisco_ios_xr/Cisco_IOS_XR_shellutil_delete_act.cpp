
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_shellutil_delete_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_shellutil_delete_act {

Delete::Delete()
    :
    input(std::make_shared<Delete::Input>())
    , output(std::make_shared<Delete::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "delete"; yang_parent_name = "Cisco-IOS-XR-shellutil-delete-act"; is_top_level_class = true; has_list_ancestor = false; 
}

Delete::~Delete()
{
}

bool Delete::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Delete::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Delete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-delete-act:delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Delete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Delete::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Delete::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Delete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Delete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Delete::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Delete::clone_ptr() const
{
    return std::make_shared<Delete>();
}

std::string Delete::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Delete::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Delete::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Delete::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Delete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Delete::Input::Input()
    :
    name{YType::str, "name"},
    location{YType::str, "location"},
    recurse{YType::boolean, "recurse"}
{

    yang_name = "input"; yang_parent_name = "delete"; is_top_level_class = false; has_list_ancestor = false; 
}

Delete::Input::~Input()
{
}

bool Delete::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| location.is_set
	|| recurse.is_set;
}

bool Delete::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(recurse.yfilter);
}

std::string Delete::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-delete-act:delete/" << get_segment_path();
    return path_buffer.str();
}

std::string Delete::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (recurse.is_set || is_set(recurse.yfilter)) leaf_name_data.push_back(recurse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Delete::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Delete::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Delete::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse")
    {
        recurse = value;
        recurse.value_namespace = name_space;
        recurse.value_namespace_prefix = name_space_prefix;
    }
}

void Delete::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "recurse")
    {
        recurse.yfilter = yfilter;
    }
}

bool Delete::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "location" || name == "recurse")
        return true;
    return false;
}

Delete::Output::Output()
    :
    response{YType::str, "response"}
{

    yang_name = "output"; yang_parent_name = "delete"; is_top_level_class = false; has_list_ancestor = false; 
}

Delete::Output::~Output()
{
}

bool Delete::Output::has_data() const
{
    if (is_presence_container) return true;
    return response.is_set;
}

bool Delete::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Delete::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-delete-act:delete/" << get_segment_path();
    return path_buffer.str();
}

std::string Delete::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Delete::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Delete::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Delete::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Delete::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Delete::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "response")
        return true;
    return false;
}


}
}

