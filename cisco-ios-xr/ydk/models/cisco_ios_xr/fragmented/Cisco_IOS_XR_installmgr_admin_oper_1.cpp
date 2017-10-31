
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_installmgr_admin_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_installmgr_admin_oper {

Install::Logs::Log::Communication::LogContents::V3::V3()
    :
    category{YType::enumeration, "category"},
    message{YType::str, "message"}
    	,
    scope(std::make_shared<Install::Logs::Log::Communication::LogContents::V3::Scope>())
{
    scope->parent = this;

    yang_name = "v3"; yang_parent_name = "log-contents"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(message.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Communication::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Communication::LogContents::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

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

void Install::Logs::Log::Communication::LogContents::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Communication::LogContents::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Communication::LogContents::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "category" || name == "message")
        return true;
    return false;
}

Install::Logs::Log::Communication::LogContents::V3::Scope::Scope()
    :
    admin_read{YType::boolean, "admin-read"},
    affected_sd_rs{YType::uint32, "affected-sd-rs"}
{

    yang_name = "scope"; yang_parent_name = "v3"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(admin_read.yfilter)
	|| ydk::is_set(affected_sd_rs.yfilter);
}

std::string Install::Logs::Log::Communication::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Communication::LogContents::V3::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.yfilter)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.yfilter)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());

    return leaf_name_data;

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

void Install::Logs::Log::Communication::LogContents::V3::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
        admin_read.value_namespace = name_space;
        admin_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
        affected_sd_rs.value_namespace = name_space;
        affected_sd_rs.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Communication::LogContents::V3::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-read")
    {
        admin_read.yfilter = yfilter;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Communication::LogContents::V3::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-read" || name == "affected-sd-rs")
        return true;
    return false;
}


}
}

