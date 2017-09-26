
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_syslog_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_syslog_act {

Logmsg::Logmsg()
    :
    input(std::make_shared<Logmsg::Input>())
{
    input->parent = this;

    yang_name = "logmsg"; yang_parent_name = "Cisco-IOS-XR-syslog-act"; is_top_level_class = true; has_list_ancestor = false;
}

Logmsg::~Logmsg()
{
}

bool Logmsg::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Logmsg::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Logmsg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-syslog-act:logmsg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Logmsg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Logmsg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Logmsg::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Logmsg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Logmsg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Logmsg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Logmsg::clone_ptr() const
{
    return std::make_shared<Logmsg>();
}

std::string Logmsg::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Logmsg::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Logmsg::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Logmsg::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Logmsg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Logmsg::Input::Input()
    :
    message{YType::str, "message"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "input"; yang_parent_name = "logmsg"; is_top_level_class = false; has_list_ancestor = false;
}

Logmsg::Input::~Input()
{
}

bool Logmsg::Input::has_data() const
{
    return message.is_set
	|| severity.is_set;
}

bool Logmsg::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Logmsg::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-syslog-act:logmsg/" << get_segment_path();
    return path_buffer.str();
}

std::string Logmsg::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Logmsg::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Logmsg::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Logmsg::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Logmsg::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Logmsg::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Logmsg::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message" || name == "severity")
        return true;
    return false;
}


}
}

