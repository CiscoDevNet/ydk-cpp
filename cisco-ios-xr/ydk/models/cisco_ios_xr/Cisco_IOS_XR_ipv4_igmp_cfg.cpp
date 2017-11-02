
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_igmp_cfg {

Igmp::Igmp()
    :
    vrfs(std::make_shared<Igmp::Vrfs>())
	,default_context(nullptr) // presence node
{
    vrfs->parent = this;

    yang_name = "igmp"; yang_parent_name = "Cisco-IOS-XR-ipv4-igmp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Igmp::~Igmp()
{
}

bool Igmp::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data())
	|| (default_context !=  nullptr && default_context->has_data());
}

bool Igmp::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (default_context !=  nullptr && default_context->has_operation());
}

std::string Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Igmp::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Igmp::DefaultContext>();
        }
        return default_context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    return children;
}

void Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Igmp::clone_ptr() const
{
    return std::make_shared<Igmp>();
}

std::string Igmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Igmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Igmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Igmp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "default-context")
        return true;
    return false;
}

Igmp::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::Vrfs::~Vrfs()
{
}

bool Igmp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Igmp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    ssmdns_query_group{YType::empty, "ssmdns-query-group"},
    robustness{YType::uint32, "robustness"}
    	,
    traffic(std::make_shared<Igmp::Vrfs::Vrf::Traffic>())
	,inheritable_defaults(std::make_shared<Igmp::Vrfs::Vrf::InheritableDefaults>())
	,ssm_access_groups(std::make_shared<Igmp::Vrfs::Vrf::SsmAccessGroups>())
	,maximum(std::make_shared<Igmp::Vrfs::Vrf::Maximum>())
	,interfaces(std::make_shared<Igmp::Vrfs::Vrf::Interfaces>())
{
    traffic->parent = this;
    inheritable_defaults->parent = this;
    ssm_access_groups->parent = this;
    maximum->parent = this;
    interfaces->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::Vrfs::Vrf::~Vrf()
{
}

bool Igmp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| ssmdns_query_group.is_set
	|| robustness.is_set
	|| (traffic !=  nullptr && traffic->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Igmp::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ssmdns_query_group.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| (traffic !=  nullptr && traffic->has_operation())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_operation())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Igmp::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ssmdns_query_group.is_set || is_set(ssmdns_query_group.yfilter)) leaf_name_data.push_back(ssmdns_query_group.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<Igmp::Vrfs::Vrf::Traffic>();
        }
        return traffic;
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults == nullptr)
        {
            inheritable_defaults = std::make_shared<Igmp::Vrfs::Vrf::InheritableDefaults>();
        }
        return inheritable_defaults;
    }

    if(child_yang_name == "ssm-access-groups")
    {
        if(ssm_access_groups == nullptr)
        {
            ssm_access_groups = std::make_shared<Igmp::Vrfs::Vrf::SsmAccessGroups>();
        }
        return ssm_access_groups;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Igmp::Vrfs::Vrf::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Igmp::Vrfs::Vrf::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traffic != nullptr)
    {
        children["traffic"] = traffic;
    }

    if(inheritable_defaults != nullptr)
    {
        children["inheritable-defaults"] = inheritable_defaults;
    }

    if(ssm_access_groups != nullptr)
    {
        children["ssm-access-groups"] = ssm_access_groups;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Igmp::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group = value;
        ssmdns_query_group.value_namespace = name_space;
        ssmdns_query_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic" || name == "inheritable-defaults" || name == "ssm-access-groups" || name == "maximum" || name == "interfaces" || name == "vrf-name" || name == "ssmdns-query-group" || name == "robustness")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Traffic::Traffic()
    :
    profile{YType::str, "profile"}
{

    yang_name = "traffic"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Traffic::~Traffic()
{
}

bool Igmp::Vrfs::Vrf::Traffic::has_data() const
{
    return profile.is_set;
}

bool Igmp::Vrfs::Vrf::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Igmp::Vrfs::Vrf::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::InheritableDefaults::InheritableDefaults()
    :
    query_timeout{YType::uint32, "query-timeout"},
    access_group{YType::str, "access-group"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    version{YType::uint32, "version"},
    router_enable{YType::boolean, "router-enable"},
    query_interval{YType::uint32, "query-interval"}
    	,
    maximum_groups_per_interface_oor(nullptr) // presence node
	,explicit_tracking(nullptr) // presence node
{

    yang_name = "inheritable-defaults"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::InheritableDefaults::~InheritableDefaults()
{
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::has_data() const
{
    return query_timeout.is_set
	|| access_group.is_set
	|| query_max_response_time.is_set
	|| version.is_set
	|| router_enable.is_set
	|| query_interval.is_set
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_enable.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string Igmp::Vrfs::Vrf::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::InheritableDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.yfilter)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor == nullptr)
        {
            maximum_groups_per_interface_oor = std::make_shared<Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor>();
        }
        return maximum_groups_per_interface_oor;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::InheritableDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_groups_per_interface_oor != nullptr)
    {
        children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void Igmp::Vrfs::Vrf::InheritableDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
        router_enable.value_namespace = name_space;
        router_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::InheritableDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-enable")
    {
        router_enable.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups-per-interface-oor" || name == "explicit-tracking" || name == "query-timeout" || name == "access-group" || name == "query-max-response-time" || name == "version" || name == "router-enable" || name == "query-interval")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    maximum_groups{YType::uint32, "maximum-groups"},
    warning_threshold{YType::uint32, "warning-threshold"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "inheritable-defaults"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_data() const
{
    return maximum_groups.is_set
	|| warning_threshold.is_set
	|| access_list_name.is_set;
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter)
	|| ydk::is_set(warning_threshold.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups" || name == "warning-threshold" || name == "access-list-name")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "inheritable-defaults"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::~ExplicitTracking()
{
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroups()
{

    yang_name = "ssm-access-groups"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::SsmAccessGroups::~SsmAccessGroups()
{
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::has_data() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::has_operation() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Vrfs::Vrf::SsmAccessGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::SsmAccessGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::SsmAccessGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-access-group")
    {
        for(auto const & c : ssm_access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup>();
        c->parent = this;
        ssm_access_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::SsmAccessGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_access_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Vrfs::Vrf::SsmAccessGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Vrfs::Vrf::SsmAccessGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-access-group")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::SsmAccessGroup()
    :
    source_address{YType::str, "source-address"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "ssm-access-group"; yang_parent_name = "ssm-access-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::~SsmAccessGroup()
{
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_data() const
{
    return source_address.is_set
	|| access_list_name.is_set;
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-group" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "access-list-name")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Maximum::Maximum()
    :
    maximum_groups{YType::uint32, "maximum-groups"}
{

    yang_name = "maximum"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Maximum::~Maximum()
{
}

bool Igmp::Vrfs::Vrf::Maximum::has_data() const
{
    return maximum_groups.is_set;
}

bool Igmp::Vrfs::Vrf::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter);
}

std::string Igmp::Vrfs::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Vrfs::Vrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Vrfs::Vrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    query_timeout{YType::uint32, "query-timeout"},
    access_group{YType::str, "access-group"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    version{YType::uint32, "version"},
    router_enable{YType::boolean, "router-enable"},
    query_interval{YType::uint32, "query-interval"}
    	,
    join_groups(nullptr) // presence node
	,static_group_group_addresses(std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses>())
	,maximum_groups_per_interface_oor(nullptr) // presence node
	,explicit_tracking(nullptr) // presence node
{
    static_group_group_addresses->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| query_timeout.is_set
	|| access_group.is_set
	|| query_max_response_time.is_set
	|| version.is_set
	|| router_enable.is_set
	|| query_interval.is_set
	|| (join_groups !=  nullptr && join_groups->has_data())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_enable.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| (join_groups !=  nullptr && join_groups->has_operation())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_operation())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.yfilter)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-groups")
    {
        if(join_groups == nullptr)
        {
            join_groups = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups>();
        }
        return join_groups;
    }

    if(child_yang_name == "static-group-group-addresses")
    {
        if(static_group_group_addresses == nullptr)
        {
            static_group_group_addresses = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses>();
        }
        return static_group_group_addresses;
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor == nullptr)
        {
            maximum_groups_per_interface_oor = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor>();
        }
        return maximum_groups_per_interface_oor;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(join_groups != nullptr)
    {
        children["join-groups"] = join_groups;
    }

    if(static_group_group_addresses != nullptr)
    {
        children["static-group-group-addresses"] = static_group_group_addresses;
    }

    if(maximum_groups_per_interface_oor != nullptr)
    {
        children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
        router_enable.value_namespace = name_space;
        router_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-enable")
    {
        router_enable.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-groups" || name == "static-group-group-addresses" || name == "maximum-groups-per-interface-oor" || name == "explicit-tracking" || name == "interface-name" || name == "query-timeout" || name == "access-group" || name == "query-max-response-time" || name == "version" || name == "router-enable" || name == "query-interval")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroups()
{

    yang_name = "join-groups"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::~JoinGroups()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup>();
        c->parent = this;
        join_group.push_back(c);
        return c;
    }

    if(child_yang_name == "join-group-source-address")
    {
        for(auto const & c : join_group_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress>();
        c->parent = this;
        join_group_source_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : join_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : join_group_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-group" || name == "join-group-source-address")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::JoinGroup()
    :
    group_address{YType::str, "group-address"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "join-group"; yang_parent_name = "join-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::~JoinGroup()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_data() const
{
    return group_address.is_set
	|| mode.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[group-address='" <<group_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "mode")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::JoinGroupSourceAddress()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "join-group-source-address"; yang_parent_name = "join-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::~JoinGroupSourceAddress()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| mode.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group-source-address" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "mode")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddresses()
{

    yang_name = "static-group-group-addresses"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::~StaticGroupGroupAddresses()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_data() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-group-group-address")
    {
        for(auto const & c : static_group_group_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress>();
        c->parent = this;
        static_group_group_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-source-address")
    {
        for(auto const & c : static_group_group_address_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress>();
        c->parent = this;
        static_group_group_address_source_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_source_address_source_address_mask.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address_source_address_mask.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_group_group_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_source_address_source_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-group-group-address" || name == "static-group-group-address-source-address" || name == "static-group-group-address-source-address-source-address-mask" || name == "static-group-group-address-group-address-mask" || name == "static-group-group-address-group-address-mask-source-address" || name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::StaticGroupGroupAddress()
    :
    group_address{YType::str, "group-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::~StaticGroupGroupAddress()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_data() const
{
    return group_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address" <<"[group-address='" <<group_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::StaticGroupGroupAddressSourceAddress()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-source-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::~StaticGroupGroupAddressSourceAddress()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::StaticGroupGroupAddressSourceAddressSourceAddressMask()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::~StaticGroupGroupAddressSourceAddressSourceAddressMask()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address-source-address-mask" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-address-mask='" <<source_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "source-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::StaticGroupGroupAddressGroupAddressMask()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::~StaticGroupGroupAddressGroupAddressMask()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::StaticGroupGroupAddressGroupAddressMaskSourceAddress()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    source_address{YType::str, "source-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask-source-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::~StaticGroupGroupAddressGroupAddressMaskSourceAddress()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "source-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address-source-address-mask" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-address-mask='" <<source_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "source-address" || name == "source-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    maximum_groups{YType::uint32, "maximum-groups"},
    warning_threshold{YType::uint32, "warning-threshold"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_data() const
{
    return maximum_groups.is_set
	|| warning_threshold.is_set
	|| access_list_name.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter)
	|| ydk::is_set(warning_threshold.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups" || name == "warning-threshold" || name == "access-list-name")
        return true;
    return false;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::~ExplicitTracking()
{
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

Igmp::DefaultContext::DefaultContext()
    :
    ssmdns_query_group{YType::empty, "ssmdns-query-group"},
    robustness{YType::uint32, "robustness"}
    	,
    nsf(std::make_shared<Igmp::DefaultContext::Nsf>())
	,unicast_qos_adjust(std::make_shared<Igmp::DefaultContext::UnicastQosAdjust>())
	,accounting(std::make_shared<Igmp::DefaultContext::Accounting>())
	,traffic(std::make_shared<Igmp::DefaultContext::Traffic>())
	,inheritable_defaults(std::make_shared<Igmp::DefaultContext::InheritableDefaults>())
	,ssm_access_groups(std::make_shared<Igmp::DefaultContext::SsmAccessGroups>())
	,maximum(std::make_shared<Igmp::DefaultContext::Maximum>())
	,interfaces(std::make_shared<Igmp::DefaultContext::Interfaces>())
{
    nsf->parent = this;
    unicast_qos_adjust->parent = this;
    accounting->parent = this;
    traffic->parent = this;
    inheritable_defaults->parent = this;
    ssm_access_groups->parent = this;
    maximum->parent = this;
    interfaces->parent = this;

    yang_name = "default-context"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::~DefaultContext()
{
}

bool Igmp::DefaultContext::has_data() const
{
    return ssmdns_query_group.is_set
	|| robustness.is_set
	|| (nsf !=  nullptr && nsf->has_data())
	|| (unicast_qos_adjust !=  nullptr && unicast_qos_adjust->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (traffic !=  nullptr && traffic->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Igmp::DefaultContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssmdns_query_group.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (unicast_qos_adjust !=  nullptr && unicast_qos_adjust->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (traffic !=  nullptr && traffic->has_operation())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_operation())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Igmp::DefaultContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssmdns_query_group.is_set || is_set(ssmdns_query_group.yfilter)) leaf_name_data.push_back(ssmdns_query_group.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Igmp::DefaultContext::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "unicast-qos-adjust")
    {
        if(unicast_qos_adjust == nullptr)
        {
            unicast_qos_adjust = std::make_shared<Igmp::DefaultContext::UnicastQosAdjust>();
        }
        return unicast_qos_adjust;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Igmp::DefaultContext::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<Igmp::DefaultContext::Traffic>();
        }
        return traffic;
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults == nullptr)
        {
            inheritable_defaults = std::make_shared<Igmp::DefaultContext::InheritableDefaults>();
        }
        return inheritable_defaults;
    }

    if(child_yang_name == "ssm-access-groups")
    {
        if(ssm_access_groups == nullptr)
        {
            ssm_access_groups = std::make_shared<Igmp::DefaultContext::SsmAccessGroups>();
        }
        return ssm_access_groups;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Igmp::DefaultContext::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Igmp::DefaultContext::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(unicast_qos_adjust != nullptr)
    {
        children["unicast-qos-adjust"] = unicast_qos_adjust;
    }

    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(traffic != nullptr)
    {
        children["traffic"] = traffic;
    }

    if(inheritable_defaults != nullptr)
    {
        children["inheritable-defaults"] = inheritable_defaults;
    }

    if(ssm_access_groups != nullptr)
    {
        children["ssm-access-groups"] = ssm_access_groups;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Igmp::DefaultContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group = value;
        ssmdns_query_group.value_namespace = name_space;
        ssmdns_query_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsf" || name == "unicast-qos-adjust" || name == "accounting" || name == "traffic" || name == "inheritable-defaults" || name == "ssm-access-groups" || name == "maximum" || name == "interfaces" || name == "ssmdns-query-group" || name == "robustness")
        return true;
    return false;
}

Igmp::DefaultContext::Nsf::Nsf()
    :
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "nsf"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::Nsf::~Nsf()
{
}

bool Igmp::DefaultContext::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Igmp::DefaultContext::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string Igmp::DefaultContext::Nsf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime")
        return true;
    return false;
}

Igmp::DefaultContext::UnicastQosAdjust::UnicastQosAdjust()
    :
    download_interval{YType::uint32, "download-interval"},
    adjustment_delay{YType::uint32, "adjustment-delay"},
    hold_off{YType::uint32, "hold-off"}
{

    yang_name = "unicast-qos-adjust"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::UnicastQosAdjust::~UnicastQosAdjust()
{
}

bool Igmp::DefaultContext::UnicastQosAdjust::has_data() const
{
    return download_interval.is_set
	|| adjustment_delay.is_set
	|| hold_off.is_set;
}

bool Igmp::DefaultContext::UnicastQosAdjust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(download_interval.yfilter)
	|| ydk::is_set(adjustment_delay.yfilter)
	|| ydk::is_set(hold_off.yfilter);
}

std::string Igmp::DefaultContext::UnicastQosAdjust::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::UnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-qos-adjust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::UnicastQosAdjust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (download_interval.is_set || is_set(download_interval.yfilter)) leaf_name_data.push_back(download_interval.get_name_leafdata());
    if (adjustment_delay.is_set || is_set(adjustment_delay.yfilter)) leaf_name_data.push_back(adjustment_delay.get_name_leafdata());
    if (hold_off.is_set || is_set(hold_off.yfilter)) leaf_name_data.push_back(hold_off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::UnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::UnicastQosAdjust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::UnicastQosAdjust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "download-interval")
    {
        download_interval = value;
        download_interval.value_namespace = name_space;
        download_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-delay")
    {
        adjustment_delay = value;
        adjustment_delay.value_namespace = name_space;
        adjustment_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off")
    {
        hold_off = value;
        hold_off.value_namespace = name_space;
        hold_off.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::UnicastQosAdjust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "download-interval")
    {
        download_interval.yfilter = yfilter;
    }
    if(value_path == "adjustment-delay")
    {
        adjustment_delay.yfilter = yfilter;
    }
    if(value_path == "hold-off")
    {
        hold_off.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::UnicastQosAdjust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "download-interval" || name == "adjustment-delay" || name == "hold-off")
        return true;
    return false;
}

Igmp::DefaultContext::Accounting::Accounting()
    :
    max_history{YType::uint32, "max-history"}
{

    yang_name = "accounting"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::Accounting::~Accounting()
{
}

bool Igmp::DefaultContext::Accounting::has_data() const
{
    return max_history.is_set;
}

bool Igmp::DefaultContext::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_history.yfilter);
}

std::string Igmp::DefaultContext::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_history.is_set || is_set(max_history.yfilter)) leaf_name_data.push_back(max_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-history")
    {
        max_history = value;
        max_history.value_namespace = name_space;
        max_history.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-history")
    {
        max_history.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-history")
        return true;
    return false;
}

Igmp::DefaultContext::Traffic::Traffic()
    :
    profile{YType::str, "profile"}
{

    yang_name = "traffic"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::Traffic::~Traffic()
{
}

bool Igmp::DefaultContext::Traffic::has_data() const
{
    return profile.is_set;
}

bool Igmp::DefaultContext::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Igmp::DefaultContext::Traffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Igmp::DefaultContext::InheritableDefaults::InheritableDefaults()
    :
    query_timeout{YType::uint32, "query-timeout"},
    access_group{YType::str, "access-group"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    version{YType::uint32, "version"},
    router_enable{YType::boolean, "router-enable"},
    query_interval{YType::uint32, "query-interval"}
    	,
    maximum_groups_per_interface_oor(nullptr) // presence node
	,explicit_tracking(nullptr) // presence node
{

    yang_name = "inheritable-defaults"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::InheritableDefaults::~InheritableDefaults()
{
}

bool Igmp::DefaultContext::InheritableDefaults::has_data() const
{
    return query_timeout.is_set
	|| access_group.is_set
	|| query_max_response_time.is_set
	|| version.is_set
	|| router_enable.is_set
	|| query_interval.is_set
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool Igmp::DefaultContext::InheritableDefaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_enable.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string Igmp::DefaultContext::InheritableDefaults::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::InheritableDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.yfilter)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor == nullptr)
        {
            maximum_groups_per_interface_oor = std::make_shared<Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor>();
        }
        return maximum_groups_per_interface_oor;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Igmp::DefaultContext::InheritableDefaults::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::InheritableDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_groups_per_interface_oor != nullptr)
    {
        children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void Igmp::DefaultContext::InheritableDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
        router_enable.value_namespace = name_space;
        router_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::InheritableDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-enable")
    {
        router_enable.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::InheritableDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups-per-interface-oor" || name == "explicit-tracking" || name == "query-timeout" || name == "access-group" || name == "query-max-response-time" || name == "version" || name == "router-enable" || name == "query-interval")
        return true;
    return false;
}

Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    maximum_groups{YType::uint32, "maximum-groups"},
    warning_threshold{YType::uint32, "warning-threshold"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "inheritable-defaults"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_data() const
{
    return maximum_groups.is_set
	|| warning_threshold.is_set
	|| access_list_name.is_set;
}

bool Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter)
	|| ydk::is_set(warning_threshold.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/inheritable-defaults/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups" || name == "warning-threshold" || name == "access-list-name")
        return true;
    return false;
}

Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "inheritable-defaults"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::~ExplicitTracking()
{
}

bool Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/inheritable-defaults/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::InheritableDefaults::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroups()
{

    yang_name = "ssm-access-groups"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::SsmAccessGroups::~SsmAccessGroups()
{
}

bool Igmp::DefaultContext::SsmAccessGroups::has_data() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::DefaultContext::SsmAccessGroups::has_operation() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::DefaultContext::SsmAccessGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::SsmAccessGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::SsmAccessGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::SsmAccessGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-access-group")
    {
        for(auto const & c : ssm_access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup>();
        c->parent = this;
        ssm_access_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::SsmAccessGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_access_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::DefaultContext::SsmAccessGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::DefaultContext::SsmAccessGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::DefaultContext::SsmAccessGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-access-group")
        return true;
    return false;
}

Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::SsmAccessGroup()
    :
    source_address{YType::str, "source-address"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "ssm-access-group"; yang_parent_name = "ssm-access-groups"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::~SsmAccessGroup()
{
}

bool Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_data() const
{
    return source_address.is_set
	|| access_list_name.is_set;
}

bool Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/ssm-access-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-group" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "access-list-name")
        return true;
    return false;
}

Igmp::DefaultContext::Maximum::Maximum()
    :
    maximum_groups{YType::uint32, "maximum-groups"}
{

    yang_name = "maximum"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::Maximum::~Maximum()
{
}

bool Igmp::DefaultContext::Maximum::has_data() const
{
    return maximum_groups.is_set;
}

bool Igmp::DefaultContext::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter);
}

std::string Igmp::DefaultContext::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::Interfaces::~Interfaces()
{
}

bool Igmp::DefaultContext::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::DefaultContext::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::DefaultContext::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::DefaultContext::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::DefaultContext::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::DefaultContext::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    query_timeout{YType::uint32, "query-timeout"},
    access_group{YType::str, "access-group"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    version{YType::uint32, "version"},
    router_enable{YType::boolean, "router-enable"},
    query_interval{YType::uint32, "query-interval"}
    	,
    join_groups(nullptr) // presence node
	,static_group_group_addresses(std::make_shared<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses>())
	,maximum_groups_per_interface_oor(nullptr) // presence node
	,explicit_tracking(nullptr) // presence node
{
    static_group_group_addresses->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Igmp::DefaultContext::Interfaces::Interface::~Interface()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| query_timeout.is_set
	|| access_group.is_set
	|| query_max_response_time.is_set
	|| version.is_set
	|| router_enable.is_set
	|| query_interval.is_set
	|| (join_groups !=  nullptr && join_groups->has_data())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool Igmp::DefaultContext::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_enable.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| (join_groups !=  nullptr && join_groups->has_operation())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_operation())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string Igmp::DefaultContext::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:igmp/default-context/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::DefaultContext::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.yfilter)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-groups")
    {
        if(join_groups == nullptr)
        {
            join_groups = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::JoinGroups>();
        }
        return join_groups;
    }

    if(child_yang_name == "static-group-group-addresses")
    {
        if(static_group_group_addresses == nullptr)
        {
            static_group_group_addresses = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses>();
        }
        return static_group_group_addresses;
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor == nullptr)
        {
            maximum_groups_per_interface_oor = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor>();
        }
        return maximum_groups_per_interface_oor;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(join_groups != nullptr)
    {
        children["join-groups"] = join_groups;
    }

    if(static_group_group_addresses != nullptr)
    {
        children["static-group-group-addresses"] = static_group_group_addresses;
    }

    if(maximum_groups_per_interface_oor != nullptr)
    {
        children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
        router_enable.value_namespace = name_space;
        router_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-enable")
    {
        router_enable.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-groups" || name == "static-group-group-addresses" || name == "maximum-groups-per-interface-oor" || name == "explicit-tracking" || name == "interface-name" || name == "query-timeout" || name == "access-group" || name == "query-max-response-time" || name == "version" || name == "router-enable" || name == "query-interval")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroups()
{

    yang_name = "join-groups"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::~JoinGroups()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::JoinGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::JoinGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::JoinGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup>();
        c->parent = this;
        join_group.push_back(c);
        return c;
    }

    if(child_yang_name == "join-group-source-address")
    {
        for(auto const & c : join_group_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress>();
        c->parent = this;
        join_group_source_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::JoinGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : join_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : join_group_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::JoinGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::DefaultContext::Interfaces::Interface::JoinGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-group" || name == "join-group-source-address")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::JoinGroup()
    :
    group_address{YType::str, "group-address"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "join-group"; yang_parent_name = "join-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::~JoinGroup()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_data() const
{
    return group_address.is_set
	|| mode.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[group-address='" <<group_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "mode")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::JoinGroupSourceAddress()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "join-group-source-address"; yang_parent_name = "join-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::~JoinGroupSourceAddress()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| mode.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group-source-address" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "mode")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddresses()
{

    yang_name = "static-group-group-addresses"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::~StaticGroupGroupAddresses()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_data() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-group-group-address")
    {
        for(auto const & c : static_group_group_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress>();
        c->parent = this;
        static_group_group_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-source-address")
    {
        for(auto const & c : static_group_group_address_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress>();
        c->parent = this;
        static_group_group_address_source_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_source_address_source_address_mask.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address_source_address_mask.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_group_group_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_source_address_source_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-group-group-address" || name == "static-group-group-address-source-address" || name == "static-group-group-address-source-address-source-address-mask" || name == "static-group-group-address-group-address-mask" || name == "static-group-group-address-group-address-mask-source-address" || name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::StaticGroupGroupAddress()
    :
    group_address{YType::str, "group-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::~StaticGroupGroupAddress()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_data() const
{
    return group_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address" <<"[group-address='" <<group_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::StaticGroupGroupAddressSourceAddress()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-source-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::~StaticGroupGroupAddressSourceAddress()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::StaticGroupGroupAddressSourceAddressSourceAddressMask()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::~StaticGroupGroupAddressSourceAddressSourceAddressMask()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address-source-address-mask" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-address-mask='" <<source_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "source-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::StaticGroupGroupAddressGroupAddressMask()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::~StaticGroupGroupAddressGroupAddressMask()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::StaticGroupGroupAddressGroupAddressMaskSourceAddress()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    source_address{YType::str, "source-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask-source-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::~StaticGroupGroupAddressGroupAddressMaskSourceAddress()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "source-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address-source-address-mask" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-address-mask='" <<source_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "source-address" || name == "source-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    maximum_groups{YType::uint32, "maximum-groups"},
    warning_threshold{YType::uint32, "warning-threshold"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_data() const
{
    return maximum_groups.is_set
	|| warning_threshold.is_set
	|| access_list_name.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter)
	|| ydk::is_set(warning_threshold.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups" || name == "warning-threshold" || name == "access-list-name")
        return true;
    return false;
}

Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::~ExplicitTracking()
{
}

bool Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

Amt::Amt()
    :
    maximum_v4_route_gateway{YType::uint32, "maximum-v4-route-gateway"},
    gateway_filter{YType::str, "gateway-filter"},
    maximum_v4_routes{YType::uint32, "maximum-v4-routes"},
    amttos{YType::uint32, "amttos"},
    amtttl{YType::uint32, "amtttl"},
    maximum_v6_route_gateway{YType::uint32, "maximum-v6-route-gateway"},
    maximum_gateway{YType::uint32, "maximum-gateway"},
    maximum_v6_routes{YType::uint32, "maximum-v6-routes"},
    amtqqic{YType::uint32, "amtqqic"},
    amtmtu{YType::uint32, "amtmtu"}
    	,
    relay_adv_add(nullptr) // presence node
	,relay_anycast_prefix(nullptr) // presence node
{

    yang_name = "amt"; yang_parent_name = "Cisco-IOS-XR-ipv4-igmp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Amt::~Amt()
{
}

bool Amt::has_data() const
{
    return maximum_v4_route_gateway.is_set
	|| gateway_filter.is_set
	|| maximum_v4_routes.is_set
	|| amttos.is_set
	|| amtttl.is_set
	|| maximum_v6_route_gateway.is_set
	|| maximum_gateway.is_set
	|| maximum_v6_routes.is_set
	|| amtqqic.is_set
	|| amtmtu.is_set
	|| (relay_adv_add !=  nullptr && relay_adv_add->has_data())
	|| (relay_anycast_prefix !=  nullptr && relay_anycast_prefix->has_data());
}

bool Amt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_v4_route_gateway.yfilter)
	|| ydk::is_set(gateway_filter.yfilter)
	|| ydk::is_set(maximum_v4_routes.yfilter)
	|| ydk::is_set(amttos.yfilter)
	|| ydk::is_set(amtttl.yfilter)
	|| ydk::is_set(maximum_v6_route_gateway.yfilter)
	|| ydk::is_set(maximum_gateway.yfilter)
	|| ydk::is_set(maximum_v6_routes.yfilter)
	|| ydk::is_set(amtqqic.yfilter)
	|| ydk::is_set(amtmtu.yfilter)
	|| (relay_adv_add !=  nullptr && relay_adv_add->has_operation())
	|| (relay_anycast_prefix !=  nullptr && relay_anycast_prefix->has_operation());
}

std::string Amt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:amt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Amt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_v4_route_gateway.is_set || is_set(maximum_v4_route_gateway.yfilter)) leaf_name_data.push_back(maximum_v4_route_gateway.get_name_leafdata());
    if (gateway_filter.is_set || is_set(gateway_filter.yfilter)) leaf_name_data.push_back(gateway_filter.get_name_leafdata());
    if (maximum_v4_routes.is_set || is_set(maximum_v4_routes.yfilter)) leaf_name_data.push_back(maximum_v4_routes.get_name_leafdata());
    if (amttos.is_set || is_set(amttos.yfilter)) leaf_name_data.push_back(amttos.get_name_leafdata());
    if (amtttl.is_set || is_set(amtttl.yfilter)) leaf_name_data.push_back(amtttl.get_name_leafdata());
    if (maximum_v6_route_gateway.is_set || is_set(maximum_v6_route_gateway.yfilter)) leaf_name_data.push_back(maximum_v6_route_gateway.get_name_leafdata());
    if (maximum_gateway.is_set || is_set(maximum_gateway.yfilter)) leaf_name_data.push_back(maximum_gateway.get_name_leafdata());
    if (maximum_v6_routes.is_set || is_set(maximum_v6_routes.yfilter)) leaf_name_data.push_back(maximum_v6_routes.get_name_leafdata());
    if (amtqqic.is_set || is_set(amtqqic.yfilter)) leaf_name_data.push_back(amtqqic.get_name_leafdata());
    if (amtmtu.is_set || is_set(amtmtu.yfilter)) leaf_name_data.push_back(amtmtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Amt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay-adv-add")
    {
        if(relay_adv_add == nullptr)
        {
            relay_adv_add = std::make_shared<Amt::RelayAdvAdd>();
        }
        return relay_adv_add;
    }

    if(child_yang_name == "relay-anycast-prefix")
    {
        if(relay_anycast_prefix == nullptr)
        {
            relay_anycast_prefix = std::make_shared<Amt::RelayAnycastPrefix>();
        }
        return relay_anycast_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Amt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay_adv_add != nullptr)
    {
        children["relay-adv-add"] = relay_adv_add;
    }

    if(relay_anycast_prefix != nullptr)
    {
        children["relay-anycast-prefix"] = relay_anycast_prefix;
    }

    return children;
}

void Amt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-v4-route-gateway")
    {
        maximum_v4_route_gateway = value;
        maximum_v4_route_gateway.value_namespace = name_space;
        maximum_v4_route_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-filter")
    {
        gateway_filter = value;
        gateway_filter.value_namespace = name_space;
        gateway_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-v4-routes")
    {
        maximum_v4_routes = value;
        maximum_v4_routes.value_namespace = name_space;
        maximum_v4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amttos")
    {
        amttos = value;
        amttos.value_namespace = name_space;
        amttos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amtttl")
    {
        amtttl = value;
        amtttl.value_namespace = name_space;
        amtttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-v6-route-gateway")
    {
        maximum_v6_route_gateway = value;
        maximum_v6_route_gateway.value_namespace = name_space;
        maximum_v6_route_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-gateway")
    {
        maximum_gateway = value;
        maximum_gateway.value_namespace = name_space;
        maximum_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-v6-routes")
    {
        maximum_v6_routes = value;
        maximum_v6_routes.value_namespace = name_space;
        maximum_v6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amtqqic")
    {
        amtqqic = value;
        amtqqic.value_namespace = name_space;
        amtqqic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amtmtu")
    {
        amtmtu = value;
        amtmtu.value_namespace = name_space;
        amtmtu.value_namespace_prefix = name_space_prefix;
    }
}

void Amt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-v4-route-gateway")
    {
        maximum_v4_route_gateway.yfilter = yfilter;
    }
    if(value_path == "gateway-filter")
    {
        gateway_filter.yfilter = yfilter;
    }
    if(value_path == "maximum-v4-routes")
    {
        maximum_v4_routes.yfilter = yfilter;
    }
    if(value_path == "amttos")
    {
        amttos.yfilter = yfilter;
    }
    if(value_path == "amtttl")
    {
        amtttl.yfilter = yfilter;
    }
    if(value_path == "maximum-v6-route-gateway")
    {
        maximum_v6_route_gateway.yfilter = yfilter;
    }
    if(value_path == "maximum-gateway")
    {
        maximum_gateway.yfilter = yfilter;
    }
    if(value_path == "maximum-v6-routes")
    {
        maximum_v6_routes.yfilter = yfilter;
    }
    if(value_path == "amtqqic")
    {
        amtqqic.yfilter = yfilter;
    }
    if(value_path == "amtmtu")
    {
        amtmtu.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Amt::clone_ptr() const
{
    return std::make_shared<Amt>();
}

std::string Amt::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Amt::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Amt::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Amt::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Amt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay-adv-add" || name == "relay-anycast-prefix" || name == "maximum-v4-route-gateway" || name == "gateway-filter" || name == "maximum-v4-routes" || name == "amttos" || name == "amtttl" || name == "maximum-v6-route-gateway" || name == "maximum-gateway" || name == "maximum-v6-routes" || name == "amtqqic" || name == "amtmtu")
        return true;
    return false;
}

Amt::RelayAdvAdd::RelayAdvAdd()
    :
    address{YType::str, "address"},
    interface{YType::str, "interface"}
{

    yang_name = "relay-adv-add"; yang_parent_name = "amt"; is_top_level_class = false; has_list_ancestor = false;
}

Amt::RelayAdvAdd::~RelayAdvAdd()
{
}

bool Amt::RelayAdvAdd::has_data() const
{
    return address.is_set
	|| interface.is_set;
}

bool Amt::RelayAdvAdd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Amt::RelayAdvAdd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:amt/" << get_segment_path();
    return path_buffer.str();
}

std::string Amt::RelayAdvAdd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-adv-add";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Amt::RelayAdvAdd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Amt::RelayAdvAdd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Amt::RelayAdvAdd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Amt::RelayAdvAdd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Amt::RelayAdvAdd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Amt::RelayAdvAdd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface")
        return true;
    return false;
}

Amt::RelayAnycastPrefix::RelayAnycastPrefix()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"}
{

    yang_name = "relay-anycast-prefix"; yang_parent_name = "amt"; is_top_level_class = false; has_list_ancestor = false;
}

Amt::RelayAnycastPrefix::~RelayAnycastPrefix()
{
}

bool Amt::RelayAnycastPrefix::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool Amt::RelayAnycastPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Amt::RelayAnycastPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:amt/" << get_segment_path();
    return path_buffer.str();
}

std::string Amt::RelayAnycastPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-anycast-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Amt::RelayAnycastPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Amt::RelayAnycastPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Amt::RelayAnycastPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Amt::RelayAnycastPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Amt::RelayAnycastPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Amt::RelayAnycastPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length")
        return true;
    return false;
}

Mld::Mld()
    :
    vrfs(std::make_shared<Mld::Vrfs>())
	,default_context(nullptr) // presence node
{
    vrfs->parent = this;

    yang_name = "mld"; yang_parent_name = "Cisco-IOS-XR-ipv4-igmp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Mld::~Mld()
{
}

bool Mld::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data())
	|| (default_context !=  nullptr && default_context->has_data());
}

bool Mld::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (default_context !=  nullptr && default_context->has_operation());
}

std::string Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Mld::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Mld::DefaultContext>();
        }
        return default_context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    return children;
}

void Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Mld::clone_ptr() const
{
    return std::make_shared<Mld>();
}

std::string Mld::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Mld::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Mld::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Mld::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "default-context")
        return true;
    return false;
}

Mld::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "mld"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Vrfs::~Vrfs()
{
}

bool Mld::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    ssmdns_query_group{YType::empty, "ssmdns-query-group"},
    robustness{YType::uint32, "robustness"}
    	,
    traffic(std::make_shared<Mld::Vrfs::Vrf::Traffic>())
	,inheritable_defaults(std::make_shared<Mld::Vrfs::Vrf::InheritableDefaults>())
	,ssm_access_groups(std::make_shared<Mld::Vrfs::Vrf::SsmAccessGroups>())
	,maximum(std::make_shared<Mld::Vrfs::Vrf::Maximum>())
	,interfaces(std::make_shared<Mld::Vrfs::Vrf::Interfaces>())
{
    traffic->parent = this;
    inheritable_defaults->parent = this;
    ssm_access_groups->parent = this;
    maximum->parent = this;
    interfaces->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Vrfs::Vrf::~Vrf()
{
}

bool Mld::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| ssmdns_query_group.is_set
	|| robustness.is_set
	|| (traffic !=  nullptr && traffic->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Mld::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ssmdns_query_group.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| (traffic !=  nullptr && traffic->has_operation())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_operation())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Mld::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ssmdns_query_group.is_set || is_set(ssmdns_query_group.yfilter)) leaf_name_data.push_back(ssmdns_query_group.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<Mld::Vrfs::Vrf::Traffic>();
        }
        return traffic;
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults == nullptr)
        {
            inheritable_defaults = std::make_shared<Mld::Vrfs::Vrf::InheritableDefaults>();
        }
        return inheritable_defaults;
    }

    if(child_yang_name == "ssm-access-groups")
    {
        if(ssm_access_groups == nullptr)
        {
            ssm_access_groups = std::make_shared<Mld::Vrfs::Vrf::SsmAccessGroups>();
        }
        return ssm_access_groups;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Mld::Vrfs::Vrf::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Mld::Vrfs::Vrf::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traffic != nullptr)
    {
        children["traffic"] = traffic;
    }

    if(inheritable_defaults != nullptr)
    {
        children["inheritable-defaults"] = inheritable_defaults;
    }

    if(ssm_access_groups != nullptr)
    {
        children["ssm-access-groups"] = ssm_access_groups;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Mld::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group = value;
        ssmdns_query_group.value_namespace = name_space;
        ssmdns_query_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic" || name == "inheritable-defaults" || name == "ssm-access-groups" || name == "maximum" || name == "interfaces" || name == "vrf-name" || name == "ssmdns-query-group" || name == "robustness")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Traffic::Traffic()
    :
    profile{YType::str, "profile"}
{

    yang_name = "traffic"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Traffic::~Traffic()
{
}

bool Mld::Vrfs::Vrf::Traffic::has_data() const
{
    return profile.is_set;
}

bool Mld::Vrfs::Vrf::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Mld::Vrfs::Vrf::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Mld::Vrfs::Vrf::InheritableDefaults::InheritableDefaults()
    :
    query_timeout{YType::uint32, "query-timeout"},
    access_group{YType::str, "access-group"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    version{YType::uint32, "version"},
    router_enable{YType::boolean, "router-enable"},
    query_interval{YType::uint32, "query-interval"}
    	,
    maximum_groups_per_interface_oor(nullptr) // presence node
	,explicit_tracking(nullptr) // presence node
{

    yang_name = "inheritable-defaults"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::InheritableDefaults::~InheritableDefaults()
{
}

bool Mld::Vrfs::Vrf::InheritableDefaults::has_data() const
{
    return query_timeout.is_set
	|| access_group.is_set
	|| query_max_response_time.is_set
	|| version.is_set
	|| router_enable.is_set
	|| query_interval.is_set
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool Mld::Vrfs::Vrf::InheritableDefaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_enable.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string Mld::Vrfs::Vrf::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::InheritableDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.yfilter)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor == nullptr)
        {
            maximum_groups_per_interface_oor = std::make_shared<Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor>();
        }
        return maximum_groups_per_interface_oor;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::InheritableDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_groups_per_interface_oor != nullptr)
    {
        children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void Mld::Vrfs::Vrf::InheritableDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
        router_enable.value_namespace = name_space;
        router_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::InheritableDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-enable")
    {
        router_enable.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::InheritableDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups-per-interface-oor" || name == "explicit-tracking" || name == "query-timeout" || name == "access-group" || name == "query-max-response-time" || name == "version" || name == "router-enable" || name == "query-interval")
        return true;
    return false;
}

Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    maximum_groups{YType::uint32, "maximum-groups"},
    warning_threshold{YType::uint32, "warning-threshold"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "inheritable-defaults"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_data() const
{
    return maximum_groups.is_set
	|| warning_threshold.is_set
	|| access_list_name.is_set;
}

bool Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter)
	|| ydk::is_set(warning_threshold.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups" || name == "warning-threshold" || name == "access-list-name")
        return true;
    return false;
}

Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "inheritable-defaults"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::~ExplicitTracking()
{
}

bool Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroups()
{

    yang_name = "ssm-access-groups"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::SsmAccessGroups::~SsmAccessGroups()
{
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::has_data() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::has_operation() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Vrfs::Vrf::SsmAccessGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::SsmAccessGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::SsmAccessGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-access-group")
    {
        for(auto const & c : ssm_access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup>();
        c->parent = this;
        ssm_access_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::SsmAccessGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_access_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Vrfs::Vrf::SsmAccessGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Vrfs::Vrf::SsmAccessGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-access-group")
        return true;
    return false;
}

Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::SsmAccessGroup()
    :
    source_address{YType::str, "source-address"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "ssm-access-group"; yang_parent_name = "ssm-access-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::~SsmAccessGroup()
{
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_data() const
{
    return source_address.is_set
	|| access_list_name.is_set;
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-group" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "access-list-name")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Maximum::Maximum()
    :
    maximum_groups{YType::uint32, "maximum-groups"}
{

    yang_name = "maximum"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Maximum::~Maximum()
{
}

bool Mld::Vrfs::Vrf::Maximum::has_data() const
{
    return maximum_groups.is_set;
}

bool Mld::Vrfs::Vrf::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter);
}

std::string Mld::Vrfs::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Mld::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Vrfs::Vrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Vrfs::Vrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    query_timeout{YType::uint32, "query-timeout"},
    access_group{YType::str, "access-group"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    version{YType::uint32, "version"},
    router_enable{YType::boolean, "router-enable"},
    query_interval{YType::uint32, "query-interval"}
    	,
    join_groups(nullptr) // presence node
	,static_group_group_addresses(std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses>())
	,maximum_groups_per_interface_oor(nullptr) // presence node
	,explicit_tracking(nullptr) // presence node
{
    static_group_group_addresses->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| query_timeout.is_set
	|| access_group.is_set
	|| query_max_response_time.is_set
	|| version.is_set
	|| router_enable.is_set
	|| query_interval.is_set
	|| (join_groups !=  nullptr && join_groups->has_data())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_enable.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| (join_groups !=  nullptr && join_groups->has_operation())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_operation())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.yfilter)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-groups")
    {
        if(join_groups == nullptr)
        {
            join_groups = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups>();
        }
        return join_groups;
    }

    if(child_yang_name == "static-group-group-addresses")
    {
        if(static_group_group_addresses == nullptr)
        {
            static_group_group_addresses = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses>();
        }
        return static_group_group_addresses;
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor == nullptr)
        {
            maximum_groups_per_interface_oor = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor>();
        }
        return maximum_groups_per_interface_oor;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(join_groups != nullptr)
    {
        children["join-groups"] = join_groups;
    }

    if(static_group_group_addresses != nullptr)
    {
        children["static-group-group-addresses"] = static_group_group_addresses;
    }

    if(maximum_groups_per_interface_oor != nullptr)
    {
        children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
        router_enable.value_namespace = name_space;
        router_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-enable")
    {
        router_enable.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-groups" || name == "static-group-group-addresses" || name == "maximum-groups-per-interface-oor" || name == "explicit-tracking" || name == "interface-name" || name == "query-timeout" || name == "access-group" || name == "query-max-response-time" || name == "version" || name == "router-enable" || name == "query-interval")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroups()
{

    yang_name = "join-groups"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::~JoinGroups()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup>();
        c->parent = this;
        join_group.push_back(c);
        return c;
    }

    if(child_yang_name == "join-group-source-address")
    {
        for(auto const & c : join_group_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress>();
        c->parent = this;
        join_group_source_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : join_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : join_group_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-group" || name == "join-group-source-address")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::JoinGroup()
    :
    group_address{YType::str, "group-address"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "join-group"; yang_parent_name = "join-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::~JoinGroup()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_data() const
{
    return group_address.is_set
	|| mode.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[group-address='" <<group_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "mode")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::JoinGroupSourceAddress()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "join-group-source-address"; yang_parent_name = "join-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::~JoinGroupSourceAddress()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| mode.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group-source-address" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "mode")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddresses()
{

    yang_name = "static-group-group-addresses"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::~StaticGroupGroupAddresses()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_data() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-group-group-address")
    {
        for(auto const & c : static_group_group_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress>();
        c->parent = this;
        static_group_group_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-source-address")
    {
        for(auto const & c : static_group_group_address_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress>();
        c->parent = this;
        static_group_group_address_source_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_source_address_source_address_mask.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address_source_address_mask.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_group_group_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_source_address_source_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-group-group-address" || name == "static-group-group-address-source-address" || name == "static-group-group-address-source-address-source-address-mask" || name == "static-group-group-address-group-address-mask" || name == "static-group-group-address-group-address-mask-source-address" || name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::StaticGroupGroupAddress()
    :
    group_address{YType::str, "group-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::~StaticGroupGroupAddress()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_data() const
{
    return group_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address" <<"[group-address='" <<group_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::StaticGroupGroupAddressSourceAddress()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-source-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::~StaticGroupGroupAddressSourceAddress()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::StaticGroupGroupAddressSourceAddressSourceAddressMask()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::~StaticGroupGroupAddressSourceAddressSourceAddressMask()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address-source-address-mask" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-address-mask='" <<source_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "source-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::StaticGroupGroupAddressGroupAddressMask()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::~StaticGroupGroupAddressGroupAddressMask()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::StaticGroupGroupAddressGroupAddressMaskSourceAddress()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    source_address{YType::str, "source-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask-source-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::~StaticGroupGroupAddressGroupAddressMaskSourceAddress()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "source-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address-source-address-mask" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-address-mask='" <<source_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "source-address" || name == "source-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    maximum_groups{YType::uint32, "maximum-groups"},
    warning_threshold{YType::uint32, "warning-threshold"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_data() const
{
    return maximum_groups.is_set
	|| warning_threshold.is_set
	|| access_list_name.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter)
	|| ydk::is_set(warning_threshold.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups" || name == "warning-threshold" || name == "access-list-name")
        return true;
    return false;
}

Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::~ExplicitTracking()
{
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

Mld::DefaultContext::DefaultContext()
    :
    ssmdns_query_group{YType::empty, "ssmdns-query-group"},
    robustness{YType::uint32, "robustness"}
    	,
    nsf(std::make_shared<Mld::DefaultContext::Nsf>())
	,unicast_qos_adjust(std::make_shared<Mld::DefaultContext::UnicastQosAdjust>())
	,accounting(std::make_shared<Mld::DefaultContext::Accounting>())
	,traffic(std::make_shared<Mld::DefaultContext::Traffic>())
	,inheritable_defaults(std::make_shared<Mld::DefaultContext::InheritableDefaults>())
	,ssm_access_groups(std::make_shared<Mld::DefaultContext::SsmAccessGroups>())
	,maximum(std::make_shared<Mld::DefaultContext::Maximum>())
	,interfaces(std::make_shared<Mld::DefaultContext::Interfaces>())
{
    nsf->parent = this;
    unicast_qos_adjust->parent = this;
    accounting->parent = this;
    traffic->parent = this;
    inheritable_defaults->parent = this;
    ssm_access_groups->parent = this;
    maximum->parent = this;
    interfaces->parent = this;

    yang_name = "default-context"; yang_parent_name = "mld"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::~DefaultContext()
{
}

bool Mld::DefaultContext::has_data() const
{
    return ssmdns_query_group.is_set
	|| robustness.is_set
	|| (nsf !=  nullptr && nsf->has_data())
	|| (unicast_qos_adjust !=  nullptr && unicast_qos_adjust->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (traffic !=  nullptr && traffic->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Mld::DefaultContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssmdns_query_group.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (unicast_qos_adjust !=  nullptr && unicast_qos_adjust->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (traffic !=  nullptr && traffic->has_operation())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_operation())
	|| (ssm_access_groups !=  nullptr && ssm_access_groups->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Mld::DefaultContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssmdns_query_group.is_set || is_set(ssmdns_query_group.yfilter)) leaf_name_data.push_back(ssmdns_query_group.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Mld::DefaultContext::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "unicast-qos-adjust")
    {
        if(unicast_qos_adjust == nullptr)
        {
            unicast_qos_adjust = std::make_shared<Mld::DefaultContext::UnicastQosAdjust>();
        }
        return unicast_qos_adjust;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Mld::DefaultContext::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<Mld::DefaultContext::Traffic>();
        }
        return traffic;
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults == nullptr)
        {
            inheritable_defaults = std::make_shared<Mld::DefaultContext::InheritableDefaults>();
        }
        return inheritable_defaults;
    }

    if(child_yang_name == "ssm-access-groups")
    {
        if(ssm_access_groups == nullptr)
        {
            ssm_access_groups = std::make_shared<Mld::DefaultContext::SsmAccessGroups>();
        }
        return ssm_access_groups;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Mld::DefaultContext::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Mld::DefaultContext::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(unicast_qos_adjust != nullptr)
    {
        children["unicast-qos-adjust"] = unicast_qos_adjust;
    }

    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(traffic != nullptr)
    {
        children["traffic"] = traffic;
    }

    if(inheritable_defaults != nullptr)
    {
        children["inheritable-defaults"] = inheritable_defaults;
    }

    if(ssm_access_groups != nullptr)
    {
        children["ssm-access-groups"] = ssm_access_groups;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Mld::DefaultContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group = value;
        ssmdns_query_group.value_namespace = name_space;
        ssmdns_query_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssmdns-query-group")
    {
        ssmdns_query_group.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsf" || name == "unicast-qos-adjust" || name == "accounting" || name == "traffic" || name == "inheritable-defaults" || name == "ssm-access-groups" || name == "maximum" || name == "interfaces" || name == "ssmdns-query-group" || name == "robustness")
        return true;
    return false;
}

Mld::DefaultContext::Nsf::Nsf()
    :
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "nsf"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::Nsf::~Nsf()
{
}

bool Mld::DefaultContext::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Mld::DefaultContext::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string Mld::DefaultContext::Nsf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime")
        return true;
    return false;
}

Mld::DefaultContext::UnicastQosAdjust::UnicastQosAdjust()
    :
    download_interval{YType::uint32, "download-interval"},
    adjustment_delay{YType::uint32, "adjustment-delay"},
    hold_off{YType::uint32, "hold-off"}
{

    yang_name = "unicast-qos-adjust"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::UnicastQosAdjust::~UnicastQosAdjust()
{
}

bool Mld::DefaultContext::UnicastQosAdjust::has_data() const
{
    return download_interval.is_set
	|| adjustment_delay.is_set
	|| hold_off.is_set;
}

bool Mld::DefaultContext::UnicastQosAdjust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(download_interval.yfilter)
	|| ydk::is_set(adjustment_delay.yfilter)
	|| ydk::is_set(hold_off.yfilter);
}

std::string Mld::DefaultContext::UnicastQosAdjust::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::UnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-qos-adjust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::UnicastQosAdjust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (download_interval.is_set || is_set(download_interval.yfilter)) leaf_name_data.push_back(download_interval.get_name_leafdata());
    if (adjustment_delay.is_set || is_set(adjustment_delay.yfilter)) leaf_name_data.push_back(adjustment_delay.get_name_leafdata());
    if (hold_off.is_set || is_set(hold_off.yfilter)) leaf_name_data.push_back(hold_off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::UnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::UnicastQosAdjust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::UnicastQosAdjust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "download-interval")
    {
        download_interval = value;
        download_interval.value_namespace = name_space;
        download_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-delay")
    {
        adjustment_delay = value;
        adjustment_delay.value_namespace = name_space;
        adjustment_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off")
    {
        hold_off = value;
        hold_off.value_namespace = name_space;
        hold_off.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::UnicastQosAdjust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "download-interval")
    {
        download_interval.yfilter = yfilter;
    }
    if(value_path == "adjustment-delay")
    {
        adjustment_delay.yfilter = yfilter;
    }
    if(value_path == "hold-off")
    {
        hold_off.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::UnicastQosAdjust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "download-interval" || name == "adjustment-delay" || name == "hold-off")
        return true;
    return false;
}

Mld::DefaultContext::Accounting::Accounting()
    :
    max_history{YType::uint32, "max-history"}
{

    yang_name = "accounting"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::Accounting::~Accounting()
{
}

bool Mld::DefaultContext::Accounting::has_data() const
{
    return max_history.is_set;
}

bool Mld::DefaultContext::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_history.yfilter);
}

std::string Mld::DefaultContext::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_history.is_set || is_set(max_history.yfilter)) leaf_name_data.push_back(max_history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-history")
    {
        max_history = value;
        max_history.value_namespace = name_space;
        max_history.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-history")
    {
        max_history.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-history")
        return true;
    return false;
}

Mld::DefaultContext::Traffic::Traffic()
    :
    profile{YType::str, "profile"}
{

    yang_name = "traffic"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::Traffic::~Traffic()
{
}

bool Mld::DefaultContext::Traffic::has_data() const
{
    return profile.is_set;
}

bool Mld::DefaultContext::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Mld::DefaultContext::Traffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Mld::DefaultContext::InheritableDefaults::InheritableDefaults()
    :
    query_timeout{YType::uint32, "query-timeout"},
    access_group{YType::str, "access-group"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    version{YType::uint32, "version"},
    router_enable{YType::boolean, "router-enable"},
    query_interval{YType::uint32, "query-interval"}
    	,
    maximum_groups_per_interface_oor(nullptr) // presence node
	,explicit_tracking(nullptr) // presence node
{

    yang_name = "inheritable-defaults"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::InheritableDefaults::~InheritableDefaults()
{
}

bool Mld::DefaultContext::InheritableDefaults::has_data() const
{
    return query_timeout.is_set
	|| access_group.is_set
	|| query_max_response_time.is_set
	|| version.is_set
	|| router_enable.is_set
	|| query_interval.is_set
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool Mld::DefaultContext::InheritableDefaults::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_enable.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string Mld::DefaultContext::InheritableDefaults::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::InheritableDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.yfilter)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor == nullptr)
        {
            maximum_groups_per_interface_oor = std::make_shared<Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor>();
        }
        return maximum_groups_per_interface_oor;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Mld::DefaultContext::InheritableDefaults::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::InheritableDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_groups_per_interface_oor != nullptr)
    {
        children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void Mld::DefaultContext::InheritableDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
        router_enable.value_namespace = name_space;
        router_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::InheritableDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-enable")
    {
        router_enable.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::InheritableDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups-per-interface-oor" || name == "explicit-tracking" || name == "query-timeout" || name == "access-group" || name == "query-max-response-time" || name == "version" || name == "router-enable" || name == "query-interval")
        return true;
    return false;
}

Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    maximum_groups{YType::uint32, "maximum-groups"},
    warning_threshold{YType::uint32, "warning-threshold"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "inheritable-defaults"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_data() const
{
    return maximum_groups.is_set
	|| warning_threshold.is_set
	|| access_list_name.is_set;
}

bool Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter)
	|| ydk::is_set(warning_threshold.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/inheritable-defaults/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups" || name == "warning-threshold" || name == "access-list-name")
        return true;
    return false;
}

Mld::DefaultContext::InheritableDefaults::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "inheritable-defaults"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::InheritableDefaults::ExplicitTracking::~ExplicitTracking()
{
}

bool Mld::DefaultContext::InheritableDefaults::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool Mld::DefaultContext::InheritableDefaults::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::DefaultContext::InheritableDefaults::ExplicitTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/inheritable-defaults/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::InheritableDefaults::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::InheritableDefaults::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::InheritableDefaults::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::InheritableDefaults::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::InheritableDefaults::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::InheritableDefaults::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::InheritableDefaults::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

Mld::DefaultContext::SsmAccessGroups::SsmAccessGroups()
{

    yang_name = "ssm-access-groups"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::SsmAccessGroups::~SsmAccessGroups()
{
}

bool Mld::DefaultContext::SsmAccessGroups::has_data() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::DefaultContext::SsmAccessGroups::has_operation() const
{
    for (std::size_t index=0; index<ssm_access_group.size(); index++)
    {
        if(ssm_access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::DefaultContext::SsmAccessGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::SsmAccessGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::SsmAccessGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::SsmAccessGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-access-group")
    {
        for(auto const & c : ssm_access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup>();
        c->parent = this;
        ssm_access_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::SsmAccessGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_access_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::DefaultContext::SsmAccessGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::DefaultContext::SsmAccessGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::DefaultContext::SsmAccessGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-access-group")
        return true;
    return false;
}

Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::SsmAccessGroup()
    :
    source_address{YType::str, "source-address"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "ssm-access-group"; yang_parent_name = "ssm-access-groups"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::~SsmAccessGroup()
{
}

bool Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_data() const
{
    return source_address.is_set
	|| access_list_name.is_set;
}

bool Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/ssm-access-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-access-group" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "access-list-name")
        return true;
    return false;
}

Mld::DefaultContext::Maximum::Maximum()
    :
    maximum_groups{YType::uint32, "maximum-groups"}
{

    yang_name = "maximum"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::Maximum::~Maximum()
{
}

bool Mld::DefaultContext::Maximum::has_data() const
{
    return maximum_groups.is_set;
}

bool Mld::DefaultContext::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter);
}

std::string Mld::DefaultContext::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::Interfaces::~Interfaces()
{
}

bool Mld::DefaultContext::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::DefaultContext::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::DefaultContext::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::DefaultContext::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::DefaultContext::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::DefaultContext::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    query_timeout{YType::uint32, "query-timeout"},
    access_group{YType::str, "access-group"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    version{YType::uint32, "version"},
    router_enable{YType::boolean, "router-enable"},
    query_interval{YType::uint32, "query-interval"}
    	,
    join_groups(nullptr) // presence node
	,static_group_group_addresses(std::make_shared<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses>())
	,maximum_groups_per_interface_oor(nullptr) // presence node
	,explicit_tracking(nullptr) // presence node
{
    static_group_group_addresses->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::DefaultContext::Interfaces::Interface::~Interface()
{
}

bool Mld::DefaultContext::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| query_timeout.is_set
	|| access_group.is_set
	|| query_max_response_time.is_set
	|| version.is_set
	|| router_enable.is_set
	|| query_interval.is_set
	|| (join_groups !=  nullptr && join_groups->has_data())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_data())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool Mld::DefaultContext::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_enable.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| (join_groups !=  nullptr && join_groups->has_operation())
	|| (static_group_group_addresses !=  nullptr && static_group_group_addresses->has_operation())
	|| (maximum_groups_per_interface_oor !=  nullptr && maximum_groups_per_interface_oor->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string Mld::DefaultContext::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-cfg:mld/default-context/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::DefaultContext::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_enable.is_set || is_set(router_enable.yfilter)) leaf_name_data.push_back(router_enable.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-groups")
    {
        if(join_groups == nullptr)
        {
            join_groups = std::make_shared<Mld::DefaultContext::Interfaces::Interface::JoinGroups>();
        }
        return join_groups;
    }

    if(child_yang_name == "static-group-group-addresses")
    {
        if(static_group_group_addresses == nullptr)
        {
            static_group_group_addresses = std::make_shared<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses>();
        }
        return static_group_group_addresses;
    }

    if(child_yang_name == "maximum-groups-per-interface-oor")
    {
        if(maximum_groups_per_interface_oor == nullptr)
        {
            maximum_groups_per_interface_oor = std::make_shared<Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor>();
        }
        return maximum_groups_per_interface_oor;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Mld::DefaultContext::Interfaces::Interface::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(join_groups != nullptr)
    {
        children["join-groups"] = join_groups;
    }

    if(static_group_group_addresses != nullptr)
    {
        children["static-group-group-addresses"] = static_group_group_addresses;
    }

    if(maximum_groups_per_interface_oor != nullptr)
    {
        children["maximum-groups-per-interface-oor"] = maximum_groups_per_interface_oor;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void Mld::DefaultContext::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-enable")
    {
        router_enable = value;
        router_enable.value_namespace = name_space;
        router_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-enable")
    {
        router_enable.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-groups" || name == "static-group-group-addresses" || name == "maximum-groups-per-interface-oor" || name == "explicit-tracking" || name == "interface-name" || name == "query-timeout" || name == "access-group" || name == "query-max-response-time" || name == "version" || name == "router-enable" || name == "query-interval")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroups()
{

    yang_name = "join-groups"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::~JoinGroups()
{
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<join_group_source_address.size(); index++)
    {
        if(join_group_source_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::JoinGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::JoinGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::JoinGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup>();
        c->parent = this;
        join_group.push_back(c);
        return c;
    }

    if(child_yang_name == "join-group-source-address")
    {
        for(auto const & c : join_group_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress>();
        c->parent = this;
        join_group_source_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::JoinGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : join_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : join_group_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::DefaultContext::Interfaces::Interface::JoinGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::DefaultContext::Interfaces::Interface::JoinGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-group" || name == "join-group-source-address")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::JoinGroup()
    :
    group_address{YType::str, "group-address"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "join-group"; yang_parent_name = "join-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::~JoinGroup()
{
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_data() const
{
    return group_address.is_set
	|| mode.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[group-address='" <<group_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "mode")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::JoinGroupSourceAddress()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "join-group-source-address"; yang_parent_name = "join-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::~JoinGroupSourceAddress()
{
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| mode.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group-source-address" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "mode")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddresses()
{

    yang_name = "static-group-group-addresses"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::~StaticGroupGroupAddresses()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_data() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_group_group_address.size(); index++)
    {
        if(static_group_group_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address.size(); index++)
    {
        if(static_group_group_address_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<static_group_group_address_group_address_mask_source_address_source_address_mask.size(); index++)
    {
        if(static_group_group_address_group_address_mask_source_address_source_address_mask[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-group-group-address")
    {
        for(auto const & c : static_group_group_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress>();
        c->parent = this;
        static_group_group_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-source-address")
    {
        for(auto const & c : static_group_group_address_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress>();
        c->parent = this;
        static_group_group_address_source_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_source_address_source_address_mask.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
    {
        for(auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask>();
        c->parent = this;
        static_group_group_address_group_address_mask_source_address_source_address_mask.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_group_group_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_source_address_source_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : static_group_group_address_group_address_mask_source_address_source_address_mask)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-group-group-address" || name == "static-group-group-address-source-address" || name == "static-group-group-address-source-address-source-address-mask" || name == "static-group-group-address-group-address-mask" || name == "static-group-group-address-group-address-mask-source-address" || name == "static-group-group-address-group-address-mask-source-address-source-address-mask")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::StaticGroupGroupAddress()
    :
    group_address{YType::str, "group-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::~StaticGroupGroupAddress()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_data() const
{
    return group_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address" <<"[group-address='" <<group_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::StaticGroupGroupAddressSourceAddress()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-source-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::~StaticGroupGroupAddressSourceAddress()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::StaticGroupGroupAddressSourceAddressSourceAddressMask()
    :
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::~StaticGroupGroupAddressSourceAddressSourceAddressMask()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-source-address-source-address-mask" <<"[group-address='" <<group_address <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-address-mask='" <<source_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "source-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::StaticGroupGroupAddressGroupAddressMask()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::~StaticGroupGroupAddressGroupAddressMask()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::StaticGroupGroupAddressGroupAddressMaskSourceAddress()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    source_address{YType::str, "source-address"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask-source-address"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::~StaticGroupGroupAddressGroupAddressMaskSourceAddress()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']" <<"[source-address='" <<source_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "source-address" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
    :
    group_address{YType::str, "group-address"},
    group_address_mask{YType::str, "group-address-mask"},
    source_address{YType::str, "source-address"},
    source_address_mask{YType::str, "source-address-mask"},
    group_count{YType::uint32, "group-count"},
    source_count{YType::uint32, "source-count"},
    suppress_report{YType::boolean, "suppress-report"}
{

    yang_name = "static-group-group-address-group-address-mask-source-address-source-address-mask"; yang_parent_name = "static-group-group-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask()
{
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_data() const
{
    return group_address.is_set
	|| group_address_mask.is_set
	|| source_address.is_set
	|| source_address_mask.is_set
	|| group_count.is_set
	|| source_count.is_set
	|| suppress_report.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_address_mask.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_address_mask.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(suppress_report.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group-group-address-group-address-mask-source-address-source-address-mask" <<"[group-address='" <<group_address <<"']" <<"[group-address-mask='" <<group_address_mask <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-address-mask='" <<source_address_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_address_mask.is_set || is_set(group_address_mask.yfilter)) leaf_name_data.push_back(group_address_mask.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_address_mask.is_set || is_set(source_address_mask.yfilter)) leaf_name_data.push_back(source_address_mask.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (suppress_report.is_set || is_set(suppress_report.yfilter)) leaf_name_data.push_back(suppress_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask = value;
        group_address_mask.value_namespace = name_space;
        group_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask = value;
        source_address_mask.value_namespace = name_space;
        source_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-report")
    {
        suppress_report = value;
        suppress_report.value_namespace = name_space;
        suppress_report.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-address-mask")
    {
        group_address_mask.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-address-mask")
    {
        source_address_mask.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "suppress-report")
    {
        suppress_report.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "group-address-mask" || name == "source-address" || name == "source-address-mask" || name == "group-count" || name == "source-count" || name == "suppress-report")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::MaximumGroupsPerInterfaceOor()
    :
    maximum_groups{YType::uint32, "maximum-groups"},
    warning_threshold{YType::uint32, "warning-threshold"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "maximum-groups-per-interface-oor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::~MaximumGroupsPerInterfaceOor()
{
}

bool Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_data() const
{
    return maximum_groups.is_set
	|| warning_threshold.is_set
	|| access_list_name.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_groups.yfilter)
	|| ydk::is_set(warning_threshold.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-groups-per-interface-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_groups.is_set || is_set(maximum_groups.yfilter)) leaf_name_data.push_back(maximum_groups.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups = value;
        maximum_groups.value_namespace = name_space;
        maximum_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-groups")
    {
        maximum_groups.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-groups" || name == "warning-threshold" || name == "access-list-name")
        return true;
    return false;
}

Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::~ExplicitTracking()
{
}

bool Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Mld::DefaultContext::Interfaces::Interface::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

const Enum::YLeaf IgmpFilter::include {0, "include"};
const Enum::YLeaf IgmpFilter::exclude {1, "exclude"};
const Enum::YLeaf IgmpFilter::star_g {2, "star-g"};


}
}

