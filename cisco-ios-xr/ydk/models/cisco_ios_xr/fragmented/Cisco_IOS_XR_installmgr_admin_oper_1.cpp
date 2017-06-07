
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_installmgr_admin_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_installmgr_admin_oper {

Install::Logs::Log::Communication::LogContents::V3::V3()
    :
    category{YType::enumeration, "category"},
    message{YType::str, "message"}
    	,
    scope(std::make_shared<Install::Logs::Log::Communication::LogContents::V3::Scope>())
{
    scope->parent = this;

    yang_name = "v3"; yang_parent_name = "log-contents";
}

Install::Logs::Log::Communication::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Communication::LogContents::V3::has_data() const
{
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Communication::LogContents::V3::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(message.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Communication::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

const EntityPath Install::Logs::Log::Communication::LogContents::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V3' in Cisco_IOS_XR_installmgr_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Install::Logs::Log::Communication::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Install::Logs::Log::Communication::LogContents::V3::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Logs::Log::Communication::LogContents::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Install::Logs::Log::Communication::LogContents::V3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
}

Install::Logs::Log::Communication::LogContents::V3::Scope::Scope()
    :
    admin_read{YType::boolean, "admin-read"},
    affected_sd_rs{YType::uint32, "affected-sd-rs"}
{
    yang_name = "scope"; yang_parent_name = "v3";
}

Install::Logs::Log::Communication::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Communication::LogContents::V3::Scope::has_data() const
{
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Communication::LogContents::V3::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_read.operation)
	|| is_set(affected_sd_rs.operation);
}

std::string Install::Logs::Log::Communication::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

const EntityPath Install::Logs::Log::Communication::LogContents::V3::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Scope' in Cisco_IOS_XR_installmgr_admin_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.operation)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.operation)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Install::Logs::Log::Communication::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::Logs::Log::Communication::LogContents::V3::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Install::Logs::Log::Communication::LogContents::V3::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
    }
}


}
}

