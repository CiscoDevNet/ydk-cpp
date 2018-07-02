
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_nsr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_nsr_cfg {

Nsr::Nsr()
    :
    process_failure(std::make_shared<Nsr::ProcessFailure>())
{
    process_failure->parent = this;

    yang_name = "nsr"; yang_parent_name = "Cisco-IOS-XR-infra-nsr-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Nsr::~Nsr()
{
}

bool Nsr::has_data() const
{
    if (is_presence_container) return true;
    return (process_failure !=  nullptr && process_failure->has_data());
}

bool Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (process_failure !=  nullptr && process_failure->has_operation());
}

std::string Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-nsr-cfg:nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-failure")
    {
        if(process_failure == nullptr)
        {
            process_failure = std::make_shared<Nsr::ProcessFailure>();
        }
        return process_failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(process_failure != nullptr)
    {
        children["process-failure"] = process_failure;
    }

    return children;
}

void Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Nsr::clone_ptr() const
{
    return std::make_shared<Nsr>();
}

std::string Nsr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Nsr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Nsr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Nsr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-failure")
        return true;
    return false;
}

Nsr::ProcessFailure::ProcessFailure()
    :
    switchover{YType::empty, "switchover"}
{

    yang_name = "process-failure"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false; 
}

Nsr::ProcessFailure::~ProcessFailure()
{
}

bool Nsr::ProcessFailure::has_data() const
{
    if (is_presence_container) return true;
    return switchover.is_set;
}

bool Nsr::ProcessFailure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchover.yfilter);
}

std::string Nsr::ProcessFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-nsr-cfg:nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string Nsr::ProcessFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nsr::ProcessFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchover.is_set || is_set(switchover.yfilter)) leaf_name_data.push_back(switchover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Nsr::ProcessFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nsr::ProcessFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Nsr::ProcessFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchover")
    {
        switchover = value;
        switchover.value_namespace = name_space;
        switchover.value_namespace_prefix = name_space_prefix;
    }
}

void Nsr::ProcessFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchover")
    {
        switchover.yfilter = yfilter;
    }
}

bool Nsr::ProcessFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover")
        return true;
    return false;
}


}
}

