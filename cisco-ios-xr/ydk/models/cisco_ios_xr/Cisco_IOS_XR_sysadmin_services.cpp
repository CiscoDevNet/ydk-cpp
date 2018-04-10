
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_services.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_services {

Service::Service()
    :
    cli(std::make_shared<Service::Cli>())
{
    cli->parent = this;

    yang_name = "service"; yang_parent_name = "Cisco-IOS-XR-sysadmin-services"; is_top_level_class = true; has_list_ancestor = false;
}

Service::~Service()
{
}

bool Service::has_data() const
{
    return (cli !=  nullptr && cli->has_data());
}

bool Service::has_operation() const
{
    return is_set(yfilter)
	|| (cli !=  nullptr && cli->has_operation());
}

std::string Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-services:service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cli")
    {
        if(cli == nullptr)
        {
            cli = std::make_shared<Service::Cli>();
        }
        return cli;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cli != nullptr)
    {
        children["cli"] = cli;
    }

    return children;
}

void Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Service::clone_ptr() const
{
    return std::make_shared<Service>();
}

std::string Service::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Service::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Service::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Service::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cli")
        return true;
    return false;
}

Service::Cli::Cli()
    :
    interactive(std::make_shared<Service::Cli::Interactive>())
{
    interactive->parent = this;

    yang_name = "cli"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Service::Cli::~Cli()
{
}

bool Service::Cli::has_data() const
{
    return (interactive !=  nullptr && interactive->has_data());
}

bool Service::Cli::has_operation() const
{
    return is_set(yfilter)
	|| (interactive !=  nullptr && interactive->has_operation());
}

std::string Service::Cli::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-services:service/" << get_segment_path();
    return path_buffer.str();
}

std::string Service::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::Cli::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Service::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interactive")
    {
        if(interactive == nullptr)
        {
            interactive = std::make_shared<Service::Cli::Interactive>();
        }
        return interactive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Service::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interactive != nullptr)
    {
        children["interactive"] = interactive;
    }

    return children;
}

void Service::Cli::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Service::Cli::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Service::Cli::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interactive")
        return true;
    return false;
}

Service::Cli::Interactive::Interactive()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "interactive"; yang_parent_name = "cli"; is_top_level_class = false; has_list_ancestor = false;
}

Service::Cli::Interactive::~Interactive()
{
}

bool Service::Cli::Interactive::has_data() const
{
    return enabled.is_set;
}

bool Service::Cli::Interactive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Service::Cli::Interactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-services:service/cli/" << get_segment_path();
    return path_buffer.str();
}

std::string Service::Cli::Interactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::Cli::Interactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Service::Cli::Interactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Service::Cli::Interactive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Service::Cli::Interactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Service::Cli::Interactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Service::Cli::Interactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}


}
}

