
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

    yang_name = "exception"; yang_parent_name = "Cisco-IOS-XR-spirit-corehelper-cfg";
}

Exception::~Exception()
{
}

bool Exception::has_data() const
{
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

const EntityPath Exception::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Exception::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file != nullptr)
    {
        children["file"] = file;
    }

    return children;
}

void Exception::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Exception::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Exception::clone_ptr() const
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
    choice1{YType::str, "choice1"},
    choice2{YType::str, "choice2"},
    choice3{YType::str, "choice3"}
{
    yang_name = "file"; yang_parent_name = "exception";
}

Exception::File::~File()
{
}

bool Exception::File::has_data() const
{
    return choice1.is_set
	|| choice2.is_set
	|| choice3.is_set;
}

bool Exception::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(choice1.yfilter)
	|| ydk::is_set(choice2.yfilter)
	|| ydk::is_set(choice3.yfilter);
}

std::string Exception::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";

    return path_buffer.str();

}

const EntityPath Exception::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-spirit-corehelper-cfg:exception/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (choice1.is_set || is_set(choice1.yfilter)) leaf_name_data.push_back(choice1.get_name_leafdata());
    if (choice2.is_set || is_set(choice2.yfilter)) leaf_name_data.push_back(choice2.get_name_leafdata());
    if (choice3.is_set || is_set(choice3.yfilter)) leaf_name_data.push_back(choice3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Exception::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Exception::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Exception::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "choice1")
    {
        choice1 = value;
        choice1.value_namespace = name_space;
        choice1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "choice2")
    {
        choice2 = value;
        choice2.value_namespace = name_space;
        choice2.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "choice1")
    {
        choice1.yfilter = yfilter;
    }
    if(value_path == "choice2")
    {
        choice2.yfilter = yfilter;
    }
    if(value_path == "choice3")
    {
        choice3.yfilter = yfilter;
    }
}

bool Exception::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "choice1" || name == "choice2" || name == "choice3")
        return true;
    return false;
}


}
}

