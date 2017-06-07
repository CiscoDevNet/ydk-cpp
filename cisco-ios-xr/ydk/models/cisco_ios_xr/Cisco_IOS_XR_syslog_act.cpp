
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_syslog_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_syslog_act {

LogmsgRpc::LogmsgRpc()
    :
    input(std::make_shared<LogmsgRpc::Input>())
{
    input->parent = this;

    yang_name = "logmsg"; yang_parent_name = "Cisco-IOS-XR-syslog-act";
}

LogmsgRpc::~LogmsgRpc()
{
}

bool LogmsgRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool LogmsgRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string LogmsgRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-syslog-act:logmsg";

    return path_buffer.str();

}

const EntityPath LogmsgRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> LogmsgRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<LogmsgRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LogmsgRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void LogmsgRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LogmsgRpc::clone_ptr() const
{
    return std::make_shared<LogmsgRpc>();
}

std::string LogmsgRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LogmsgRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LogmsgRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

LogmsgRpc::Input::Input()
    :
    message{YType::str, "message"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "input"; yang_parent_name = "logmsg";
}

LogmsgRpc::Input::~Input()
{
}

bool LogmsgRpc::Input::has_data() const
{
    return message.is_set
	|| severity.is_set;
}

bool LogmsgRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(message.operation)
	|| is_set(severity.operation);
}

std::string LogmsgRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath LogmsgRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-syslog-act:logmsg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LogmsgRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LogmsgRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LogmsgRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message")
    {
        message = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}


}
}

