
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_config_cfgmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_cfgmgr_oper {

Config::Config()
    :
    global(std::make_shared<Config::Global>())
{
    global->parent = this;

    yang_name = "config"; yang_parent_name = "Cisco-IOS-XR-config-cfgmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Config::~Config()
{
}

bool Config::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data());
}

bool Config::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-oper:config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Config::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Config::clone_ptr() const
{
    return std::make_shared<Config>();
}

std::string Config::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Config::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Config::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Config::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Config::Global::Global()
{

    yang_name = "global"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Config::Global::~Global()
{
}

bool Config::Global::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Config::Global::has_operation() const
{
    return is_set(yfilter);
}

std::string Config::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-oper:config/" << get_segment_path();
    return path_buffer.str();
}

std::string Config::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Config::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Config::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Config::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Config::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Config::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Config::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

