
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_spirit_corehelper_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_spirit_corehelper_cfg {

Exception::Exception()
    :
    file(std::make_shared<Exception::File>())
{
    file->parent = this;

    yang_name = "exception"; yang_parent_name = "Cisco-IOS-XR-spirit-corehelper-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Exception::~Exception()
{
}

bool Exception::has_data() const
{
    if (is_presence_container) return true;
    return (file !=  nullptr && file->has_data());
}

bool Exception::has_operation() const
{
    return is_set(yfilter)
	|| (file !=  nullptr && file->has_operation());
}

std::string Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-corehelper-cfg:exception";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Exception::File>();
        }
        return file;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Exception::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(file != nullptr)
    {
        _children["file"] = file;
    }

    return _children;
}

void Exception::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Exception::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Exception::clone_ptr() const
{
    return std::make_shared<Exception>();
}

std::string Exception::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Exception::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Exception::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Exception::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Exception::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file")
        return true;
    return false;
}

Exception::File::File()
    :
    choice2{YType::str, "choice2"},
    choice1{YType::str, "choice1"},
    choice3{YType::str, "choice3"}
{

    yang_name = "file"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false; 
}

Exception::File::~File()
{
}

bool Exception::File::has_data() const
{
    if (is_presence_container) return true;
    return choice2.is_set
	|| choice1.is_set
	|| choice3.is_set;
}

bool Exception::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(choice2.yfilter)
	|| ydk::is_set(choice1.yfilter)
	|| ydk::is_set(choice3.yfilter);
}

std::string Exception::File::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-corehelper-cfg:exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::File::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (choice2.is_set || is_set(choice2.yfilter)) leaf_name_data.push_back(choice2.get_name_leafdata());
    if (choice1.is_set || is_set(choice1.yfilter)) leaf_name_data.push_back(choice1.get_name_leafdata());
    if (choice3.is_set || is_set(choice3.yfilter)) leaf_name_data.push_back(choice3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Exception::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Exception::File::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Exception::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "choice2")
    {
        choice2 = value;
        choice2.value_namespace = name_space;
        choice2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "choice1")
    {
        choice1 = value;
        choice1.value_namespace = name_space;
        choice1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "choice3")
    {
        choice3 = value;
        choice3.value_namespace = name_space;
        choice3.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "choice2")
    {
        choice2.yfilter = yfilter;
    }
    if(value_path == "choice1")
    {
        choice1.yfilter = yfilter;
    }
    if(value_path == "choice3")
    {
        choice3.yfilter = yfilter;
    }
}

bool Exception::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "choice2" || name == "choice1" || name == "choice3")
        return true;
    return false;
}


}
}

