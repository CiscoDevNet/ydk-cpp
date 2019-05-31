
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_shellutil_copy_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_shellutil_copy_act {

Copy::Copy()
    :
    input(std::make_shared<Copy::Input>())
    , output(std::make_shared<Copy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "copy"; yang_parent_name = "Cisco-IOS-XR-shellutil-copy-act"; is_top_level_class = true; has_list_ancestor = false; 
}

Copy::~Copy()
{
}

bool Copy::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Copy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Copy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-copy-act:copy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Copy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Copy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Copy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Copy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Copy::get_children() const
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

void Copy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Copy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Copy::clone_ptr() const
{
    return std::make_shared<Copy>();
}

std::string Copy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Copy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Copy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Copy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Copy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Copy::Input::Input()
    :
    sourcename{YType::str, "sourcename"},
    destinationname{YType::str, "destinationname"},
    sourcefilesystem{YType::str, "sourcefilesystem"},
    destinationfilesystem{YType::str, "destinationfilesystem"},
    sourcelocation{YType::str, "sourcelocation"},
    destinationlocation{YType::str, "destinationlocation"},
    vrf{YType::str, "vrf"},
    recurse{YType::boolean, "recurse"}
{

    yang_name = "input"; yang_parent_name = "copy"; is_top_level_class = false; has_list_ancestor = false; 
}

Copy::Input::~Input()
{
}

bool Copy::Input::has_data() const
{
    if (is_presence_container) return true;
    return sourcename.is_set
	|| destinationname.is_set
	|| sourcefilesystem.is_set
	|| destinationfilesystem.is_set
	|| sourcelocation.is_set
	|| destinationlocation.is_set
	|| vrf.is_set
	|| recurse.is_set;
}

bool Copy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sourcename.yfilter)
	|| ydk::is_set(destinationname.yfilter)
	|| ydk::is_set(sourcefilesystem.yfilter)
	|| ydk::is_set(destinationfilesystem.yfilter)
	|| ydk::is_set(sourcelocation.yfilter)
	|| ydk::is_set(destinationlocation.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(recurse.yfilter);
}

std::string Copy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-copy-act:copy/" << get_segment_path();
    return path_buffer.str();
}

std::string Copy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Copy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sourcename.is_set || is_set(sourcename.yfilter)) leaf_name_data.push_back(sourcename.get_name_leafdata());
    if (destinationname.is_set || is_set(destinationname.yfilter)) leaf_name_data.push_back(destinationname.get_name_leafdata());
    if (sourcefilesystem.is_set || is_set(sourcefilesystem.yfilter)) leaf_name_data.push_back(sourcefilesystem.get_name_leafdata());
    if (destinationfilesystem.is_set || is_set(destinationfilesystem.yfilter)) leaf_name_data.push_back(destinationfilesystem.get_name_leafdata());
    if (sourcelocation.is_set || is_set(sourcelocation.yfilter)) leaf_name_data.push_back(sourcelocation.get_name_leafdata());
    if (destinationlocation.is_set || is_set(destinationlocation.yfilter)) leaf_name_data.push_back(destinationlocation.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (recurse.is_set || is_set(recurse.yfilter)) leaf_name_data.push_back(recurse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Copy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Copy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Copy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sourcename")
    {
        sourcename = value;
        sourcename.value_namespace = name_space;
        sourcename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destinationname")
    {
        destinationname = value;
        destinationname.value_namespace = name_space;
        destinationname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourcefilesystem")
    {
        sourcefilesystem = value;
        sourcefilesystem.value_namespace = name_space;
        sourcefilesystem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destinationfilesystem")
    {
        destinationfilesystem = value;
        destinationfilesystem.value_namespace = name_space;
        destinationfilesystem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourcelocation")
    {
        sourcelocation = value;
        sourcelocation.value_namespace = name_space;
        sourcelocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destinationlocation")
    {
        destinationlocation = value;
        destinationlocation.value_namespace = name_space;
        destinationlocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse")
    {
        recurse = value;
        recurse.value_namespace = name_space;
        recurse.value_namespace_prefix = name_space_prefix;
    }
}

void Copy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sourcename")
    {
        sourcename.yfilter = yfilter;
    }
    if(value_path == "destinationname")
    {
        destinationname.yfilter = yfilter;
    }
    if(value_path == "sourcefilesystem")
    {
        sourcefilesystem.yfilter = yfilter;
    }
    if(value_path == "destinationfilesystem")
    {
        destinationfilesystem.yfilter = yfilter;
    }
    if(value_path == "sourcelocation")
    {
        sourcelocation.yfilter = yfilter;
    }
    if(value_path == "destinationlocation")
    {
        destinationlocation.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "recurse")
    {
        recurse.yfilter = yfilter;
    }
}

bool Copy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sourcename" || name == "destinationname" || name == "sourcefilesystem" || name == "destinationfilesystem" || name == "sourcelocation" || name == "destinationlocation" || name == "vrf" || name == "recurse")
        return true;
    return false;
}

Copy::Output::Output()
    :
    response{YType::str, "response"}
{

    yang_name = "output"; yang_parent_name = "copy"; is_top_level_class = false; has_list_ancestor = false; 
}

Copy::Output::~Output()
{
}

bool Copy::Output::has_data() const
{
    if (is_presence_container) return true;
    return response.is_set;
}

bool Copy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Copy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-copy-act:copy/" << get_segment_path();
    return path_buffer.str();
}

std::string Copy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Copy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Copy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Copy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Copy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Copy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Copy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "response")
        return true;
    return false;
}


}
}

