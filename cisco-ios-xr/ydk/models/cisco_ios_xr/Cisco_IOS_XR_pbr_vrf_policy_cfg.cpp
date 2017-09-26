
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pbr_vrf_policy_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pbr_vrf_policy_cfg {

VrfPolicy::VrfPolicy()
{

    yang_name = "vrf-policy"; yang_parent_name = "Cisco-IOS-XR-pbr-vrf-policy-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

VrfPolicy::~VrfPolicy()
{
}

bool VrfPolicy::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool VrfPolicy::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VrfPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vrf-policy-cfg:vrf-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VrfPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VrfPolicy::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void VrfPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VrfPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> VrfPolicy::clone_ptr() const
{
    return std::make_shared<VrfPolicy>();
}

std::string VrfPolicy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string VrfPolicy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function VrfPolicy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VrfPolicy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool VrfPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

VrfPolicy::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf"; yang_parent_name = "vrf-policy"; is_top_level_class = false; has_list_ancestor = false;
}

VrfPolicy::Vrf::~Vrf()
{
}

bool VrfPolicy::Vrf::has_data() const
{
    for (std::size_t index=0; index<afi.size(); index++)
    {
        if(afi[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool VrfPolicy::Vrf::has_operation() const
{
    for (std::size_t index=0; index<afi.size(); index++)
    {
        if(afi[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string VrfPolicy::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vrf-policy-cfg:vrf-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string VrfPolicy::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfPolicy::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfPolicy::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi")
    {
        for(auto const & c : afi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VrfPolicy::Vrf::Afi>();
        c->parent = this;
        afi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfPolicy::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : afi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void VrfPolicy::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void VrfPolicy::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool VrfPolicy::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "vrf-name")
        return true;
    return false;
}

VrfPolicy::Vrf::Afi::Afi()
    :
    afi_type{YType::str, "afi-type"},
    service_policy_in{YType::str, "service-policy-in"}
{

    yang_name = "afi"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

VrfPolicy::Vrf::Afi::~Afi()
{
}

bool VrfPolicy::Vrf::Afi::has_data() const
{
    return afi_type.is_set
	|| service_policy_in.is_set;
}

bool VrfPolicy::Vrf::Afi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_type.yfilter)
	|| ydk::is_set(service_policy_in.yfilter);
}

std::string VrfPolicy::Vrf::Afi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi" <<"[afi-type='" <<afi_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VrfPolicy::Vrf::Afi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_type.is_set || is_set(afi_type.yfilter)) leaf_name_data.push_back(afi_type.get_name_leafdata());
    if (service_policy_in.is_set || is_set(service_policy_in.yfilter)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VrfPolicy::Vrf::Afi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VrfPolicy::Vrf::Afi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void VrfPolicy::Vrf::Afi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-type")
    {
        afi_type = value;
        afi_type.value_namespace = name_space;
        afi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
        service_policy_in.value_namespace = name_space;
        service_policy_in.value_namespace_prefix = name_space_prefix;
    }
}

void VrfPolicy::Vrf::Afi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-type")
    {
        afi_type.yfilter = yfilter;
    }
    if(value_path == "service-policy-in")
    {
        service_policy_in.yfilter = yfilter;
    }
}

bool VrfPolicy::Vrf::Afi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-type" || name == "service-policy-in")
        return true;
    return false;
}


}
}

