
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_external_usb.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_external_usb {

ExternalUsb::ExternalUsb()
    :
    config(std::make_shared<ExternalUsb::Config>())
{
    config->parent = this;

    yang_name = "external-usb"; yang_parent_name = "Cisco-IOS-XR-sysadmin-external-usb"; is_top_level_class = true; has_list_ancestor = false; 
}

ExternalUsb::~ExternalUsb()
{
}

bool ExternalUsb::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data());
}

bool ExternalUsb::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string ExternalUsb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-external-usb:external-usb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ExternalUsb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ExternalUsb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<ExternalUsb::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExternalUsb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void ExternalUsb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ExternalUsb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ExternalUsb::clone_ptr() const
{
    return std::make_shared<ExternalUsb>();
}

std::string ExternalUsb::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ExternalUsb::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ExternalUsb::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ExternalUsb::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ExternalUsb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

ExternalUsb::Config::Config()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "config"; yang_parent_name = "external-usb"; is_top_level_class = false; has_list_ancestor = false; 
}

ExternalUsb::Config::~Config()
{
}

bool ExternalUsb::Config::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool ExternalUsb::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string ExternalUsb::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-external-usb:external-usb/" << get_segment_path();
    return path_buffer.str();
}

std::string ExternalUsb::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ExternalUsb::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ExternalUsb::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ExternalUsb::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ExternalUsb::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void ExternalUsb::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool ExternalUsb::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}


}
}

