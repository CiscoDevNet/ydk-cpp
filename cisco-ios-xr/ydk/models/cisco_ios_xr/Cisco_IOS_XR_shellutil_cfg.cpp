
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_shellutil_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_shellutil_cfg {

HostNames::HostNames()
    :
    host_name{YType::str, "host-name"}
{

    yang_name = "host-names"; yang_parent_name = "Cisco-IOS-XR-shellutil-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HostNames::~HostNames()
{
}

bool HostNames::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set;
}

bool HostNames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter);
}

std::string HostNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-cfg:host-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HostNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HostNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HostNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HostNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
}

void HostNames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> HostNames::clone_ptr() const
{
    return std::make_shared<HostNames>();
}

std::string HostNames::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HostNames::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HostNames::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HostNames::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HostNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name")
        return true;
    return false;
}


}
}

