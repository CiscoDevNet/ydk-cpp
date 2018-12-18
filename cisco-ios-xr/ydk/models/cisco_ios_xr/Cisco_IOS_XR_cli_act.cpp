
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_cli_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_cli_act {

CliCommand::CliCommand()
    :
    input(std::make_shared<CliCommand::Input>())
    , output(std::make_shared<CliCommand::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "cli-command"; yang_parent_name = "Cisco-IOS-XR-cli-act"; is_top_level_class = true; has_list_ancestor = false; 
}

CliCommand::~CliCommand()
{
}

bool CliCommand::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool CliCommand::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string CliCommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cli-act:cli-command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CliCommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CliCommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CliCommand::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<CliCommand::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CliCommand::get_children() const
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

void CliCommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CliCommand::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CliCommand::clone_ptr() const
{
    return std::make_shared<CliCommand>();
}

std::string CliCommand::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string CliCommand::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function CliCommand::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CliCommand::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool CliCommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

CliCommand::Input::Input()
    :
    command{YType::str, "command"}
{

    yang_name = "input"; yang_parent_name = "cli-command"; is_top_level_class = false; has_list_ancestor = false; 
}

CliCommand::Input::~Input()
{
}

bool CliCommand::Input::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool CliCommand::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string CliCommand::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cli-act:cli-command/" << get_segment_path();
    return path_buffer.str();
}

std::string CliCommand::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CliCommand::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CliCommand::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CliCommand::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CliCommand::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void CliCommand::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool CliCommand::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

CliCommand::Output::Output()
    :
    response{YType::str, "response"}
{

    yang_name = "output"; yang_parent_name = "cli-command"; is_top_level_class = false; has_list_ancestor = false; 
}

CliCommand::Output::~Output()
{
}

bool CliCommand::Output::has_data() const
{
    if (is_presence_container) return true;
    return response.is_set;
}

bool CliCommand::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string CliCommand::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cli-act:cli-command/" << get_segment_path();
    return path_buffer.str();
}

std::string CliCommand::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CliCommand::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CliCommand::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CliCommand::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CliCommand::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void CliCommand::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool CliCommand::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "response")
        return true;
    return false;
}


}
}

