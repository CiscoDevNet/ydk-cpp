
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_6.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-id" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-metric" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-tunnel-interface-name" || name == "downstream" || name == "line-card-disjoint" || name == "node-protect" || name == "primary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoutes()
{

    yang_name = "connected-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::has_data() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::has_operation() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route")
    {
        for(auto const & c : connected_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute>();
        c->parent = this;
        connected_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : connected_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::ConnectedRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route"; yang_parent_name = "connected-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::~ConnectedRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoutes()
{

    yang_name = "external-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::~ExternalRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::has_data() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::has_operation() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-route")
    {
        for(auto const & c : external_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute>();
        c->parent = this;
        external_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : external_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ExternalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    protocol_name(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName>())
	,route_extended_community(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>())
	,route_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_>())
{
    protocol_name->parent = this;
    route_extended_community->parent = this;
    route_information->parent = this;

    yang_name = "external-route"; yang_parent_name = "external-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::~ExternalRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (protocol_name !=  nullptr && protocol_name->has_data())
	|| (route_extended_community !=  nullptr && route_extended_community->has_data())
	|| (route_information !=  nullptr && route_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (protocol_name !=  nullptr && protocol_name->has_operation())
	|| (route_extended_community !=  nullptr && route_extended_community->has_operation())
	|| (route_information !=  nullptr && route_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-name")
    {
        if(protocol_name == nullptr)
        {
            protocol_name = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName>();
        }
        return protocol_name;
    }

    if(child_yang_name == "route-extended-community")
    {
        if(route_extended_community == nullptr)
        {
            route_extended_community = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>();
        }
        return route_extended_community;
    }

    if(child_yang_name == "route-information")
    {
        if(route_information == nullptr)
        {
            route_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_>();
        }
        return route_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_name != nullptr)
    {
        children["protocol-name"] = protocol_name;
    }

    if(route_extended_community != nullptr)
    {
        children["route-extended-community"] = route_extended_community;
    }

    if(route_information != nullptr)
    {
        children["route-information"] = route_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "route-extended-community" || name == "route-information" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::ProtocolName()
    :
    bgp_as_number{YType::str, "bgp-as-number"},
    connected_instance{YType::str, "connected-instance"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    protocol_type{YType::enumeration, "protocol-type"}
{

    yang_name = "protocol-name"; yang_parent_name = "external-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::~ProtocolName()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_data() const
{
    return bgp_as_number.is_set
	|| connected_instance.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| protocol_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(connected_instance.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(protocol_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.yfilter)) leaf_name_data.push_back(connected_instance.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
        connected_instance.value_namespace = name_space;
        connected_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "connected-instance")
    {
        connected_instance.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-as-number" || name == "connected-instance" || name == "eigrp-as-number" || name == "isis-instance-id" || name == "ospf-process-id" || name == "protocol-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::RouteExtendedCommunity()
    :
    extended_community_area_id{YType::uint32, "extended-community-area-id"},
    extended_community_domain_id_value{YType::str, "extended-community-domain-id-value"},
    extended_community_options{YType::uint8, "extended-community-options"},
    extended_community_route_type{YType::uint8, "extended-community-route-type"},
    extended_community_router_id{YType::str, "extended-community-router-id"},
    extended_communityl_domain_id_type{YType::uint16, "extended-communityl-domain-id-type"}
{

    yang_name = "route-extended-community"; yang_parent_name = "external-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::~RouteExtendedCommunity()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_data() const
{
    return extended_community_area_id.is_set
	|| extended_community_domain_id_value.is_set
	|| extended_community_options.is_set
	|| extended_community_route_type.is_set
	|| extended_community_router_id.is_set
	|| extended_communityl_domain_id_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_community_area_id.yfilter)
	|| ydk::is_set(extended_community_domain_id_value.yfilter)
	|| ydk::is_set(extended_community_options.yfilter)
	|| ydk::is_set(extended_community_route_type.yfilter)
	|| ydk::is_set(extended_community_router_id.yfilter)
	|| ydk::is_set(extended_communityl_domain_id_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_community_area_id.is_set || is_set(extended_community_area_id.yfilter)) leaf_name_data.push_back(extended_community_area_id.get_name_leafdata());
    if (extended_community_domain_id_value.is_set || is_set(extended_community_domain_id_value.yfilter)) leaf_name_data.push_back(extended_community_domain_id_value.get_name_leafdata());
    if (extended_community_options.is_set || is_set(extended_community_options.yfilter)) leaf_name_data.push_back(extended_community_options.get_name_leafdata());
    if (extended_community_route_type.is_set || is_set(extended_community_route_type.yfilter)) leaf_name_data.push_back(extended_community_route_type.get_name_leafdata());
    if (extended_community_router_id.is_set || is_set(extended_community_router_id.yfilter)) leaf_name_data.push_back(extended_community_router_id.get_name_leafdata());
    if (extended_communityl_domain_id_type.is_set || is_set(extended_communityl_domain_id_type.yfilter)) leaf_name_data.push_back(extended_communityl_domain_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-community-area-id")
    {
        extended_community_area_id = value;
        extended_community_area_id.value_namespace = name_space;
        extended_community_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-domain-id-value")
    {
        extended_community_domain_id_value = value;
        extended_community_domain_id_value.value_namespace = name_space;
        extended_community_domain_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-options")
    {
        extended_community_options = value;
        extended_community_options.value_namespace = name_space;
        extended_community_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-route-type")
    {
        extended_community_route_type = value;
        extended_community_route_type.value_namespace = name_space;
        extended_community_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-router-id")
    {
        extended_community_router_id = value;
        extended_community_router_id.value_namespace = name_space;
        extended_community_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-communityl-domain-id-type")
    {
        extended_communityl_domain_id_type = value;
        extended_communityl_domain_id_type.value_namespace = name_space;
        extended_communityl_domain_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-community-area-id")
    {
        extended_community_area_id.yfilter = yfilter;
    }
    if(value_path == "extended-community-domain-id-value")
    {
        extended_community_domain_id_value.yfilter = yfilter;
    }
    if(value_path == "extended-community-options")
    {
        extended_community_options.yfilter = yfilter;
    }
    if(value_path == "extended-community-route-type")
    {
        extended_community_route_type.yfilter = yfilter;
    }
    if(value_path == "extended-community-router-id")
    {
        extended_community_router_id.yfilter = yfilter;
    }
    if(value_path == "extended-communityl-domain-id-type")
    {
        extended_communityl_domain_id_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-community-area-id" || name == "extended-community-domain-id-value" || name == "extended-community-options" || name == "extended-community-route-type" || name == "extended-community-router-id" || name == "extended-communityl-domain-id-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInformation_()
    :
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route-information"; yang_parent_name = "external-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::~RouteInformation_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoutes()
{

    yang_name = "local-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::~LocalRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::has_data() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::has_operation() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-route")
    {
        for(auto const & c : local_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute>();
        c->parent = this;
        local_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::LocalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "local-route"; yang_parent_name = "local-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::~LocalRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "local-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "local-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoutes()
{

    yang_name = "multicast-intact-backup-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::~MulticastIntactBackupRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route")
    {
        for(auto const & c : multicast_intact_backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute>();
        c->parent = this;
        multicast_intact_backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_intact_backup_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::MulticastIntactBackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route"; yang_parent_name = "multicast-intact-backup-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::~MulticastIntactBackupRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-id" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-metric" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-tunnel-interface-name" || name == "downstream" || name == "line-card-disjoint" || name == "node-protect" || name == "primary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::MulticastIntactRouteTable()
{

    yang_name = "multicast-intact-route-table"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::~MulticastIntactRouteTable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route"; yang_parent_name = "multicast-intact-route-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteAreas()
{

    yang_name = "route-areas"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::~RouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::has_data() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::has_operation() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-area")
    {
        for(auto const & c : route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea>();
        c->parent = this;
        route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteArea()
    :
    area_id{YType::int32, "area-id"}
    	,
    backup_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>())
	,connected_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>())
	,local_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>())
	,multicast_intact_backup_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>())
	,multicast_intact_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>())
	,route_area_informations(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>())
	,summary_area_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>())
{
    backup_route_areas->parent = this;
    connected_route_areas->parent = this;
    local_route_areas->parent = this;
    multicast_intact_backup_route_areas->parent = this;
    multicast_intact_route_areas->parent = this;
    route_area_informations->parent = this;
    summary_area_information->parent = this;

    yang_name = "route-area"; yang_parent_name = "route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::~RouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::has_data() const
{
    return area_id.is_set
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_data())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_data())
	|| (local_route_areas !=  nullptr && local_route_areas->has_data())
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_data())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_data())
	|| (route_area_informations !=  nullptr && route_area_informations->has_data())
	|| (summary_area_information !=  nullptr && summary_area_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_operation())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_operation())
	|| (local_route_areas !=  nullptr && local_route_areas->has_operation())
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_operation())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_operation())
	|| (route_area_informations !=  nullptr && route_area_informations->has_operation())
	|| (summary_area_information !=  nullptr && summary_area_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route-areas")
    {
        if(backup_route_areas == nullptr)
        {
            backup_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>();
        }
        return backup_route_areas;
    }

    if(child_yang_name == "connected-route-areas")
    {
        if(connected_route_areas == nullptr)
        {
            connected_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>();
        }
        return connected_route_areas;
    }

    if(child_yang_name == "local-route-areas")
    {
        if(local_route_areas == nullptr)
        {
            local_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>();
        }
        return local_route_areas;
    }

    if(child_yang_name == "multicast-intact-backup-route-areas")
    {
        if(multicast_intact_backup_route_areas == nullptr)
        {
            multicast_intact_backup_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>();
        }
        return multicast_intact_backup_route_areas;
    }

    if(child_yang_name == "multicast-intact-route-areas")
    {
        if(multicast_intact_route_areas == nullptr)
        {
            multicast_intact_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>();
        }
        return multicast_intact_route_areas;
    }

    if(child_yang_name == "route-area-informations")
    {
        if(route_area_informations == nullptr)
        {
            route_area_informations = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>();
        }
        return route_area_informations;
    }

    if(child_yang_name == "summary-area-information")
    {
        if(summary_area_information == nullptr)
        {
            summary_area_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>();
        }
        return summary_area_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_route_areas != nullptr)
    {
        children["backup-route-areas"] = backup_route_areas;
    }

    if(connected_route_areas != nullptr)
    {
        children["connected-route-areas"] = connected_route_areas;
    }

    if(local_route_areas != nullptr)
    {
        children["local-route-areas"] = local_route_areas;
    }

    if(multicast_intact_backup_route_areas != nullptr)
    {
        children["multicast-intact-backup-route-areas"] = multicast_intact_backup_route_areas;
    }

    if(multicast_intact_route_areas != nullptr)
    {
        children["multicast-intact-route-areas"] = multicast_intact_route_areas;
    }

    if(route_area_informations != nullptr)
    {
        children["route-area-informations"] = route_area_informations;
    }

    if(summary_area_information != nullptr)
    {
        children["summary-area-information"] = summary_area_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route-areas" || name == "connected-route-areas" || name == "local-route-areas" || name == "multicast-intact-backup-route-areas" || name == "multicast-intact-route-areas" || name == "route-area-informations" || name == "summary-area-information" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteAreas()
{

    yang_name = "backup-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::~BackupRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route-area")
    {
        for(auto const & c : backup_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea>();
        c->parent = this;
        backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::BackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "backup-route-area"; yang_parent_name = "backup-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::~BackupRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-id" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-metric" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-tunnel-interface-name" || name == "downstream" || name == "line-card-disjoint" || name == "node-protect" || name == "primary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteAreas()
{

    yang_name = "connected-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::~ConnectedRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_data() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route-area")
    {
        for(auto const & c : connected_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea>();
        c->parent = this;
        connected_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : connected_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::ConnectedRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route-area"; yang_parent_name = "connected-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::~ConnectedRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteAreas()
{

    yang_name = "local-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::~LocalRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_data() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-route-area")
    {
        for(auto const & c : local_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea>();
        c->parent = this;
        local_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::LocalRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "local-route-area"; yang_parent_name = "local-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::~LocalRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "local-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "local-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteAreas()
{

    yang_name = "multicast-intact-backup-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::~MulticastIntactBackupRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route-area")
    {
        for(auto const & c : multicast_intact_backup_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea>();
        c->parent = this;
        multicast_intact_backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_intact_backup_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::MulticastIntactBackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route-area"; yang_parent_name = "multicast-intact-backup-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::~MulticastIntactBackupRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-id" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-metric" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-tunnel-interface-name" || name == "downstream" || name == "line-card-disjoint" || name == "node-protect" || name == "primary-path" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteAreas()
{

    yang_name = "multicast-intact-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::~MulticastIntactRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-route-area")
    {
        for(auto const & c : multicast_intact_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea>();
        c->parent = this;
        multicast_intact_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_intact_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::MulticastIntactRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-route-area"; yang_parent_name = "multicast-intact-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::~MulticastIntactRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformations()
{

    yang_name = "route-area-informations"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::~RouteAreaInformations()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_data() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_operation() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-informations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-area-information")
    {
        for(auto const & c : route_area_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation>();
        c->parent = this;
        route_area_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_area_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-area-information")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteAreaInformation()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route-area-information"; yang_parent_name = "route-area-informations"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::~RouteAreaInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::SummaryAreaInformation()
    :
    failure_address{YType::str, "failure-address"},
    failures{YType::uint32, "failures"}
    	,
    common(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>())
	,failure_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>())
{
    common->parent = this;
    failure_time->parent = this;

    yang_name = "summary-area-information"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::~SummaryAreaInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_data() const
{
    return failure_address.is_set
	|| failures.is_set
	|| (common !=  nullptr && common->has_data())
	|| (failure_time !=  nullptr && failure_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure_address.yfilter)
	|| ydk::is_set(failures.yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (failure_time !=  nullptr && failure_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-area-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_address.is_set || is_set(failure_address.yfilter)) leaf_name_data.push_back(failure_address.get_name_leafdata());
    if (failures.is_set || is_set(failures.yfilter)) leaf_name_data.push_back(failures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>();
        }
        return common;
    }

    if(child_yang_name == "failure-time")
    {
        if(failure_time == nullptr)
        {
            failure_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>();
        }
        return failure_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common != nullptr)
    {
        children["common"] = common;
    }

    if(failure_time != nullptr)
    {
        children["failure-time"] = failure_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure-address")
    {
        failure_address = value;
        failure_address.value_namespace = name_space;
        failure_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failures")
    {
        failures = value;
        failures.value_namespace = name_space;
        failures.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure-address")
    {
        failure_address.yfilter = yfilter;
    }
    if(value_path == "failures")
    {
        failures.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "failure-time" || name == "failure-address" || name == "failures")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::Common()
    :
    external_nssa_type1s{YType::uint32, "external-nssa-type1s"},
    external_nssa_type2s{YType::uint32, "external-nssa-type2s"},
    external_type1s{YType::uint32, "external-type1s"},
    external_type2s{YType::uint32, "external-type2s"},
    inter_areas{YType::uint32, "inter-areas"},
    intra_areas{YType::uint32, "intra-areas"},
    total{YType::uint32, "total"}
{

    yang_name = "common"; yang_parent_name = "summary-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_data() const
{
    return external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| external_type1s.is_set
	|| external_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_nssa_type1s.yfilter)
	|| ydk::is_set(external_nssa_type2s.yfilter)
	|| ydk::is_set(external_type1s.yfilter)
	|| ydk::is_set(external_type2s.yfilter)
	|| ydk::is_set(inter_areas.yfilter)
	|| ydk::is_set(intra_areas.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_nssa_type1s.is_set || is_set(external_nssa_type1s.yfilter)) leaf_name_data.push_back(external_nssa_type1s.get_name_leafdata());
    if (external_nssa_type2s.is_set || is_set(external_nssa_type2s.yfilter)) leaf_name_data.push_back(external_nssa_type2s.get_name_leafdata());
    if (external_type1s.is_set || is_set(external_type1s.yfilter)) leaf_name_data.push_back(external_type1s.get_name_leafdata());
    if (external_type2s.is_set || is_set(external_type2s.yfilter)) leaf_name_data.push_back(external_type2s.get_name_leafdata());
    if (inter_areas.is_set || is_set(inter_areas.yfilter)) leaf_name_data.push_back(inter_areas.get_name_leafdata());
    if (intra_areas.is_set || is_set(intra_areas.yfilter)) leaf_name_data.push_back(intra_areas.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s = value;
        external_nssa_type1s.value_namespace = name_space;
        external_nssa_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s = value;
        external_nssa_type2s.value_namespace = name_space;
        external_nssa_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-type1s")
    {
        external_type1s = value;
        external_type1s.value_namespace = name_space;
        external_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-type2s")
    {
        external_type2s = value;
        external_type2s.value_namespace = name_space;
        external_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-areas")
    {
        inter_areas = value;
        inter_areas.value_namespace = name_space;
        inter_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-areas")
    {
        intra_areas = value;
        intra_areas.value_namespace = name_space;
        intra_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s.yfilter = yfilter;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s.yfilter = yfilter;
    }
    if(value_path == "external-type1s")
    {
        external_type1s.yfilter = yfilter;
    }
    if(value_path == "external-type2s")
    {
        external_type2s.yfilter = yfilter;
    }
    if(value_path == "inter-areas")
    {
        inter_areas.yfilter = yfilter;
    }
    if(value_path == "intra-areas")
    {
        intra_areas.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-nssa-type1s" || name == "external-nssa-type2s" || name == "external-type1s" || name == "external-type2s" || name == "inter-areas" || name == "intra-areas" || name == "total")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::FailureTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "failure-time"; yang_parent_name = "summary-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::RouteTable()
{

    yang_name = "route-table"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::~RouteTable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route"; yang_parent_name = "route-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::SummaryInformation()
    :
    failure_address{YType::str, "failure-address"},
    failures{YType::uint32, "failures"}
    	,
    common(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common>())
	,failure_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime>())
{
    common->parent = this;
    failure_time->parent = this;

    yang_name = "summary-information"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::~SummaryInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::has_data() const
{
    return failure_address.is_set
	|| failures.is_set
	|| (common !=  nullptr && common->has_data())
	|| (failure_time !=  nullptr && failure_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure_address.yfilter)
	|| ydk::is_set(failures.yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (failure_time !=  nullptr && failure_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_address.is_set || is_set(failure_address.yfilter)) leaf_name_data.push_back(failure_address.get_name_leafdata());
    if (failures.is_set || is_set(failures.yfilter)) leaf_name_data.push_back(failures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common>();
        }
        return common;
    }

    if(child_yang_name == "failure-time")
    {
        if(failure_time == nullptr)
        {
            failure_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime>();
        }
        return failure_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common != nullptr)
    {
        children["common"] = common;
    }

    if(failure_time != nullptr)
    {
        children["failure-time"] = failure_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure-address")
    {
        failure_address = value;
        failure_address.value_namespace = name_space;
        failure_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failures")
    {
        failures = value;
        failures.value_namespace = name_space;
        failures.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure-address")
    {
        failure_address.yfilter = yfilter;
    }
    if(value_path == "failures")
    {
        failures.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "failure-time" || name == "failure-address" || name == "failures")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::Common()
    :
    external_nssa_type1s{YType::uint32, "external-nssa-type1s"},
    external_nssa_type2s{YType::uint32, "external-nssa-type2s"},
    external_type1s{YType::uint32, "external-type1s"},
    external_type2s{YType::uint32, "external-type2s"},
    inter_areas{YType::uint32, "inter-areas"},
    intra_areas{YType::uint32, "intra-areas"},
    total{YType::uint32, "total"}
{

    yang_name = "common"; yang_parent_name = "summary-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::has_data() const
{
    return external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| external_type1s.is_set
	|| external_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_nssa_type1s.yfilter)
	|| ydk::is_set(external_nssa_type2s.yfilter)
	|| ydk::is_set(external_type1s.yfilter)
	|| ydk::is_set(external_type2s.yfilter)
	|| ydk::is_set(inter_areas.yfilter)
	|| ydk::is_set(intra_areas.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_nssa_type1s.is_set || is_set(external_nssa_type1s.yfilter)) leaf_name_data.push_back(external_nssa_type1s.get_name_leafdata());
    if (external_nssa_type2s.is_set || is_set(external_nssa_type2s.yfilter)) leaf_name_data.push_back(external_nssa_type2s.get_name_leafdata());
    if (external_type1s.is_set || is_set(external_type1s.yfilter)) leaf_name_data.push_back(external_type1s.get_name_leafdata());
    if (external_type2s.is_set || is_set(external_type2s.yfilter)) leaf_name_data.push_back(external_type2s.get_name_leafdata());
    if (inter_areas.is_set || is_set(inter_areas.yfilter)) leaf_name_data.push_back(inter_areas.get_name_leafdata());
    if (intra_areas.is_set || is_set(intra_areas.yfilter)) leaf_name_data.push_back(intra_areas.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s = value;
        external_nssa_type1s.value_namespace = name_space;
        external_nssa_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s = value;
        external_nssa_type2s.value_namespace = name_space;
        external_nssa_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-type1s")
    {
        external_type1s = value;
        external_type1s.value_namespace = name_space;
        external_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-type2s")
    {
        external_type2s = value;
        external_type2s.value_namespace = name_space;
        external_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-areas")
    {
        inter_areas = value;
        inter_areas.value_namespace = name_space;
        inter_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-areas")
    {
        intra_areas = value;
        intra_areas.value_namespace = name_space;
        intra_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s.yfilter = yfilter;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s.yfilter = yfilter;
    }
    if(value_path == "external-type1s")
    {
        external_type1s.yfilter = yfilter;
    }
    if(value_path == "external-type2s")
    {
        external_type2s.yfilter = yfilter;
    }
    if(value_path == "inter-areas")
    {
        inter_areas.yfilter = yfilter;
    }
    if(value_path == "intra-areas")
    {
        intra_areas.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-nssa-type1s" || name == "external-nssa-type2s" || name == "external-type1s" || name == "external-type2s" || name == "inter-areas" || name == "intra-areas" || name == "total")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::FailureTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "failure-time"; yang_parent_name = "summary-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::Statistics()
    :
    frr_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats>())
	,interface_stats_entries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries>())
	,issu_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats>())
	,nsr_pl_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats>())
	,nsr_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats>())
	,protocol_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats>())
	,raw_io_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats>())
	,rib_batch_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats>())
	,rib_thread_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats>())
	,spf_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats>())
	,te_stats(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats>())
{
    frr_stats->parent = this;
    interface_stats_entries->parent = this;
    issu_stats->parent = this;
    nsr_pl_stats->parent = this;
    nsr_stats->parent = this;
    protocol_stats->parent = this;
    raw_io_stats->parent = this;
    rib_batch_stats->parent = this;
    rib_thread_stats->parent = this;
    spf_stats->parent = this;
    te_stats->parent = this;

    yang_name = "statistics"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::has_data() const
{
    return (frr_stats !=  nullptr && frr_stats->has_data())
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_data())
	|| (issu_stats !=  nullptr && issu_stats->has_data())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_data())
	|| (nsr_stats !=  nullptr && nsr_stats->has_data())
	|| (protocol_stats !=  nullptr && protocol_stats->has_data())
	|| (raw_io_stats !=  nullptr && raw_io_stats->has_data())
	|| (rib_batch_stats !=  nullptr && rib_batch_stats->has_data())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_data())
	|| (spf_stats !=  nullptr && spf_stats->has_data())
	|| (te_stats !=  nullptr && te_stats->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (frr_stats !=  nullptr && frr_stats->has_operation())
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation())
	|| (issu_stats !=  nullptr && issu_stats->has_operation())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_operation())
	|| (nsr_stats !=  nullptr && nsr_stats->has_operation())
	|| (protocol_stats !=  nullptr && protocol_stats->has_operation())
	|| (raw_io_stats !=  nullptr && raw_io_stats->has_operation())
	|| (rib_batch_stats !=  nullptr && rib_batch_stats->has_operation())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_operation())
	|| (spf_stats !=  nullptr && spf_stats->has_operation())
	|| (te_stats !=  nullptr && te_stats->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-stats")
    {
        if(frr_stats == nullptr)
        {
            frr_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats>();
        }
        return frr_stats;
    }

    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    if(child_yang_name == "issu-stats")
    {
        if(issu_stats == nullptr)
        {
            issu_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats>();
        }
        return issu_stats;
    }

    if(child_yang_name == "nsr-pl-stats")
    {
        if(nsr_pl_stats == nullptr)
        {
            nsr_pl_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats>();
        }
        return nsr_pl_stats;
    }

    if(child_yang_name == "nsr-stats")
    {
        if(nsr_stats == nullptr)
        {
            nsr_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats>();
        }
        return nsr_stats;
    }

    if(child_yang_name == "protocol-stats")
    {
        if(protocol_stats == nullptr)
        {
            protocol_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats>();
        }
        return protocol_stats;
    }

    if(child_yang_name == "raw-io-stats")
    {
        if(raw_io_stats == nullptr)
        {
            raw_io_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats>();
        }
        return raw_io_stats;
    }

    if(child_yang_name == "rib-batch-stats")
    {
        if(rib_batch_stats == nullptr)
        {
            rib_batch_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats>();
        }
        return rib_batch_stats;
    }

    if(child_yang_name == "rib-thread-stats")
    {
        if(rib_thread_stats == nullptr)
        {
            rib_thread_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats>();
        }
        return rib_thread_stats;
    }

    if(child_yang_name == "spf-stats")
    {
        if(spf_stats == nullptr)
        {
            spf_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats>();
        }
        return spf_stats;
    }

    if(child_yang_name == "te-stats")
    {
        if(te_stats == nullptr)
        {
            te_stats = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats>();
        }
        return te_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_stats != nullptr)
    {
        children["frr-stats"] = frr_stats;
    }

    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    if(issu_stats != nullptr)
    {
        children["issu-stats"] = issu_stats;
    }

    if(nsr_pl_stats != nullptr)
    {
        children["nsr-pl-stats"] = nsr_pl_stats;
    }

    if(nsr_stats != nullptr)
    {
        children["nsr-stats"] = nsr_stats;
    }

    if(protocol_stats != nullptr)
    {
        children["protocol-stats"] = protocol_stats;
    }

    if(raw_io_stats != nullptr)
    {
        children["raw-io-stats"] = raw_io_stats;
    }

    if(rib_batch_stats != nullptr)
    {
        children["rib-batch-stats"] = rib_batch_stats;
    }

    if(rib_thread_stats != nullptr)
    {
        children["rib-thread-stats"] = rib_thread_stats;
    }

    if(spf_stats != nullptr)
    {
        children["spf-stats"] = spf_stats;
    }

    if(te_stats != nullptr)
    {
        children["te-stats"] = te_stats;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-stats" || name == "interface-stats-entries" || name == "issu-stats" || name == "nsr-pl-stats" || name == "nsr-stats" || name == "protocol-stats" || name == "raw-io-stats" || name == "rib-batch-stats" || name == "rib-thread-stats" || name == "spf-stats" || name == "te-stats")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::FrrStats()
    :
    fs_paths{YType::uint32, "fs-paths"},
    fs_paths_eligible{YType::uint32, "fs-paths-eligible"},
    fs_paths_protected{YType::uint32, "fs-paths-protected"}
{

    yang_name = "frr-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::~FrrStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::has_data() const
{
    return fs_paths.is_set
	|| fs_paths_eligible.is_set
	|| fs_paths_protected.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fs_paths.yfilter)
	|| ydk::is_set(fs_paths_eligible.yfilter)
	|| ydk::is_set(fs_paths_protected.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fs_paths.is_set || is_set(fs_paths.yfilter)) leaf_name_data.push_back(fs_paths.get_name_leafdata());
    if (fs_paths_eligible.is_set || is_set(fs_paths_eligible.yfilter)) leaf_name_data.push_back(fs_paths_eligible.get_name_leafdata());
    if (fs_paths_protected.is_set || is_set(fs_paths_protected.yfilter)) leaf_name_data.push_back(fs_paths_protected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fs-paths")
    {
        fs_paths = value;
        fs_paths.value_namespace = name_space;
        fs_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fs-paths-eligible")
    {
        fs_paths_eligible = value;
        fs_paths_eligible.value_namespace = name_space;
        fs_paths_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fs-paths-protected")
    {
        fs_paths_protected = value;
        fs_paths_protected.value_namespace = name_space;
        fs_paths_protected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fs-paths")
    {
        fs_paths.yfilter = yfilter;
    }
    if(value_path == "fs-paths-eligible")
    {
        fs_paths_eligible.yfilter = yfilter;
    }
    if(value_path == "fs-paths-protected")
    {
        fs_paths_protected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fs-paths" || name == "fs-paths-eligible" || name == "fs-paths-protected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        for(auto const & c : interface_stats_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_stats_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(if_name_str.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        for(auto const & c : if_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
        if_name_str.value_namespace = name_space;
        if_name_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "if-name-str")
    {
        if_name_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    madj_intf{YType::boolean, "madj-intf"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| area_id_str.is_set
	|| madj_intf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_id_str.yfilter)
	|| ydk::is_set(madj_intf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-stat")
    {
        for(auto const & c : if_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
        area_id_str.value_namespace = name_space;
        area_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-intf")
    {
        madj_intf = value;
        madj_intf.value_namespace = name_space;
        madj_intf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-id-str")
    {
        area_id_str.yfilter = yfilter;
    }
    if(value_path == "madj-intf")
    {
        madj_intf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "area-id" || name == "area-id-str" || name == "madj-intf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::IssuStats()
    :
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_version{YType::uint32, "nsr-version"}
    	,
    nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched>())
	,nsr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched>())
{
    nsr_rtr_thd_sched->parent = this;
    nsr_thd_sched->parent = this;

    yang_name = "issu-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::~IssuStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::has_data() const
{
    return nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_fsm_state.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_rev.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_version.is_set
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_conn_to_active_attempts.yfilter)
	|| ydk::is_set(nsr_conn_to_active_closes.yfilter)
	|| ydk::is_set(nsr_conn_to_active_errors.yfilter)
	|| ydk::is_set(nsr_conn_to_active_fails.yfilter)
	|| ydk::is_set(nsr_conn_to_active_opens.yfilter)
	|| ydk::is_set(nsr_fsm_state.yfilter)
	|| ydk::is_set(nsr_intf_seq_no.yfilter)
	|| ydk::is_set(nsr_lsa_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_lsa_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_lsa_qad_qid.yfilter)
	|| ydk::is_set(nsr_mtu.yfilter)
	|| ydk::is_set(nsr_nbr_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_nbr_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_nbr_qad_qid.yfilter)
	|| ydk::is_set(nsr_nbr_seq_no.yfilter)
	|| ydk::is_set(nsr_nodeid.yfilter)
	|| ydk::is_set(nsr_peer_nodeid.yfilter)
	|| ydk::is_set(nsr_peer_version.yfilter)
	|| ydk::is_set(nsr_rev.yfilter)
	|| ydk::is_set(nsr_tmr_quant.yfilter)
	|| ydk::is_set(nsr_version.yfilter)
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.yfilter)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.yfilter)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.yfilter)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.yfilter)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.yfilter)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.yfilter)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.yfilter)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_rev.is_set || is_set(nsr_rev.yfilter)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.yfilter)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.yfilter)) leaf_name_data.push_back(nsr_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched == nullptr)
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched>();
        }
        return nsr_rtr_thd_sched;
    }

    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched == nullptr)
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched>();
        }
        return nsr_thd_sched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nsr_rtr_thd_sched != nullptr)
    {
        children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
    }

    if(nsr_thd_sched != nullptr)
    {
        children["nsr-thd-sched"] = nsr_thd_sched;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
        nsr_conn_to_active_attempts.value_namespace = name_space;
        nsr_conn_to_active_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
        nsr_conn_to_active_closes.value_namespace = name_space;
        nsr_conn_to_active_closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
        nsr_conn_to_active_errors.value_namespace = name_space;
        nsr_conn_to_active_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
        nsr_conn_to_active_fails.value_namespace = name_space;
        nsr_conn_to_active_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
        nsr_conn_to_active_opens.value_namespace = name_space;
        nsr_conn_to_active_opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
        nsr_fsm_state.value_namespace = name_space;
        nsr_fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
        nsr_intf_seq_no.value_namespace = name_space;
        nsr_intf_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
        nsr_lsa_init_sync_pend_count.value_namespace = name_space;
        nsr_lsa_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
        nsr_lsa_qad_mdata_count.value_namespace = name_space;
        nsr_lsa_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
        nsr_lsa_qad_qid.value_namespace = name_space;
        nsr_lsa_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
        nsr_mtu.value_namespace = name_space;
        nsr_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
        nsr_nbr_init_sync_pend_count.value_namespace = name_space;
        nsr_nbr_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
        nsr_nbr_qad_mdata_count.value_namespace = name_space;
        nsr_nbr_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
        nsr_nbr_qad_qid.value_namespace = name_space;
        nsr_nbr_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
        nsr_nbr_seq_no.value_namespace = name_space;
        nsr_nbr_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
        nsr_nodeid.value_namespace = name_space;
        nsr_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
        nsr_peer_nodeid.value_namespace = name_space;
        nsr_peer_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
        nsr_peer_version.value_namespace = name_space;
        nsr_peer_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
        nsr_rev.value_namespace = name_space;
        nsr_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
        nsr_tmr_quant.value_namespace = name_space;
        nsr_tmr_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
        nsr_version.value_namespace = name_space;
        nsr_version.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens.yfilter = yfilter;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state.yfilter = yfilter;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version.yfilter = yfilter;
    }
    if(value_path == "nsr-rev")
    {
        nsr_rev.yfilter = yfilter;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-version")
    {
        nsr_version.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-rtr-thd-sched" || name == "nsr-thd-sched" || name == "nsr-conn-to-active-attempts" || name == "nsr-conn-to-active-closes" || name == "nsr-conn-to-active-errors" || name == "nsr-conn-to-active-fails" || name == "nsr-conn-to-active-opens" || name == "nsr-fsm-state" || name == "nsr-intf-seq-no" || name == "nsr-lsa-init-sync-pend-count" || name == "nsr-lsa-qad-mdata-count" || name == "nsr-lsa-qad-qid" || name == "nsr-mtu" || name == "nsr-nbr-init-sync-pend-count" || name == "nsr-nbr-qad-mdata-count" || name == "nsr-nbr-qad-qid" || name == "nsr-nbr-seq-no" || name == "nsr-nodeid" || name == "nsr-peer-nodeid" || name == "nsr-peer-version" || name == "nsr-rev" || name == "nsr-tmr-quant" || name == "nsr-version")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{

    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "issu-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-bad-pulses-rx" || name == "nsr-events-in-q" || name == "nsr-events-rx" || name == "nsr-events-tx" || name == "nsr-good-pulses-rx" || name == "nsr-pulse-quant" || name == "nsr-pulse-tx-fails" || name == "nsr-pulses-tx")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-evs-qd" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{

    yang_name = "nsr-thd-sched"; yang_parent_name = "issu-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-bad-pulses-rx" || name == "nsr-events-in-q" || name == "nsr-events-rx" || name == "nsr-events-tx" || name == "nsr-good-pulses-rx" || name == "nsr-pulse-quant" || name == "nsr-pulse-tx-fails" || name == "nsr-pulses-tx")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-evs-qd" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NsrPlStats()
{

    yang_name = "nsr-pl-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::~NsrPlStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::has_data() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::has_operation() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncd-pri")
    {
        for(auto const & c : ncd_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri>();
        c->parent = this;
        ncd_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ncd_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncd-pri")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NcdPri()
{

    yang_name = "ncd-pri"; yang_parent_name = "nsr-pl-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::~NcdPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::has_data() const
{
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::has_operation() const
{
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "num-recv")
    {
        for(auto const & c : num_recv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv>();
        c->parent = this;
        num_recv.push_back(c);
        return c;
    }

    if(child_yang_name == "num-recv-drop")
    {
        for(auto const & c : num_recv_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop>();
        c->parent = this;
        num_recv_drop.push_back(c);
        return c;
    }

    if(child_yang_name == "num-sent")
    {
        for(auto const & c : num_sent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent>();
        c->parent = this;
        num_sent.push_back(c);
        return c;
    }

    if(child_yang_name == "num-sent-drop")
    {
        for(auto const & c : num_sent_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : num_recv)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : num_recv_drop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : num_sent)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : num_sent_drop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-recv" || name == "num-recv-drop" || name == "num-sent" || name == "num-sent-drop")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::NumRecv()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-recv"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::~NumRecv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NumRecvDrop()
{

    yang_name = "num-recv-drop"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::~NumRecvDrop()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pl-recv-drop-array")
    {
        for(auto const & c : nsr_pl_recv_drop_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray>();
        c->parent = this;
        nsr_pl_recv_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pl_recv_drop_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-recv-drop-array")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::NsrPlRecvDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-recv-drop-array"; yang_parent_name = "num-recv-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::~NsrPlRecvDropArray()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-recv-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::NumSent()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-sent"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::~NumSent()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NumSentDrop()
{

    yang_name = "num-sent-drop"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::~NumSentDrop()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pl-send-drop-array")
    {
        for(auto const & c : nsr_pl_send_drop_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray>();
        c->parent = this;
        nsr_pl_send_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pl_send_drop_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-send-drop-array")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::NsrPlSendDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-send-drop-array"; yang_parent_name = "num-sent-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::~NsrPlSendDropArray()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-send-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrStats()
    :
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_version{YType::uint32, "nsr-version"}
    	,
    nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched>())
	,nsr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched>())
{
    nsr_rtr_thd_sched->parent = this;
    nsr_thd_sched->parent = this;

    yang_name = "nsr-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::~NsrStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::has_data() const
{
    return nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_fsm_state.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_rev.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_version.is_set
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_conn_to_active_attempts.yfilter)
	|| ydk::is_set(nsr_conn_to_active_closes.yfilter)
	|| ydk::is_set(nsr_conn_to_active_errors.yfilter)
	|| ydk::is_set(nsr_conn_to_active_fails.yfilter)
	|| ydk::is_set(nsr_conn_to_active_opens.yfilter)
	|| ydk::is_set(nsr_fsm_state.yfilter)
	|| ydk::is_set(nsr_intf_seq_no.yfilter)
	|| ydk::is_set(nsr_lsa_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_lsa_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_lsa_qad_qid.yfilter)
	|| ydk::is_set(nsr_mtu.yfilter)
	|| ydk::is_set(nsr_nbr_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_nbr_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_nbr_qad_qid.yfilter)
	|| ydk::is_set(nsr_nbr_seq_no.yfilter)
	|| ydk::is_set(nsr_nodeid.yfilter)
	|| ydk::is_set(nsr_peer_nodeid.yfilter)
	|| ydk::is_set(nsr_peer_version.yfilter)
	|| ydk::is_set(nsr_rev.yfilter)
	|| ydk::is_set(nsr_tmr_quant.yfilter)
	|| ydk::is_set(nsr_version.yfilter)
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.yfilter)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.yfilter)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.yfilter)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.yfilter)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.yfilter)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.yfilter)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.yfilter)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_rev.is_set || is_set(nsr_rev.yfilter)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.yfilter)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.yfilter)) leaf_name_data.push_back(nsr_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched == nullptr)
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched>();
        }
        return nsr_rtr_thd_sched;
    }

    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched == nullptr)
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched>();
        }
        return nsr_thd_sched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nsr_rtr_thd_sched != nullptr)
    {
        children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
    }

    if(nsr_thd_sched != nullptr)
    {
        children["nsr-thd-sched"] = nsr_thd_sched;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
        nsr_conn_to_active_attempts.value_namespace = name_space;
        nsr_conn_to_active_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
        nsr_conn_to_active_closes.value_namespace = name_space;
        nsr_conn_to_active_closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
        nsr_conn_to_active_errors.value_namespace = name_space;
        nsr_conn_to_active_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
        nsr_conn_to_active_fails.value_namespace = name_space;
        nsr_conn_to_active_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
        nsr_conn_to_active_opens.value_namespace = name_space;
        nsr_conn_to_active_opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
        nsr_fsm_state.value_namespace = name_space;
        nsr_fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
        nsr_intf_seq_no.value_namespace = name_space;
        nsr_intf_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
        nsr_lsa_init_sync_pend_count.value_namespace = name_space;
        nsr_lsa_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
        nsr_lsa_qad_mdata_count.value_namespace = name_space;
        nsr_lsa_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
        nsr_lsa_qad_qid.value_namespace = name_space;
        nsr_lsa_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
        nsr_mtu.value_namespace = name_space;
        nsr_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
        nsr_nbr_init_sync_pend_count.value_namespace = name_space;
        nsr_nbr_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
        nsr_nbr_qad_mdata_count.value_namespace = name_space;
        nsr_nbr_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
        nsr_nbr_qad_qid.value_namespace = name_space;
        nsr_nbr_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
        nsr_nbr_seq_no.value_namespace = name_space;
        nsr_nbr_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
        nsr_nodeid.value_namespace = name_space;
        nsr_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
        nsr_peer_nodeid.value_namespace = name_space;
        nsr_peer_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
        nsr_peer_version.value_namespace = name_space;
        nsr_peer_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
        nsr_rev.value_namespace = name_space;
        nsr_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
        nsr_tmr_quant.value_namespace = name_space;
        nsr_tmr_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
        nsr_version.value_namespace = name_space;
        nsr_version.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens.yfilter = yfilter;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state.yfilter = yfilter;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version.yfilter = yfilter;
    }
    if(value_path == "nsr-rev")
    {
        nsr_rev.yfilter = yfilter;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-version")
    {
        nsr_version.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-rtr-thd-sched" || name == "nsr-thd-sched" || name == "nsr-conn-to-active-attempts" || name == "nsr-conn-to-active-closes" || name == "nsr-conn-to-active-errors" || name == "nsr-conn-to-active-fails" || name == "nsr-conn-to-active-opens" || name == "nsr-fsm-state" || name == "nsr-intf-seq-no" || name == "nsr-lsa-init-sync-pend-count" || name == "nsr-lsa-qad-mdata-count" || name == "nsr-lsa-qad-qid" || name == "nsr-mtu" || name == "nsr-nbr-init-sync-pend-count" || name == "nsr-nbr-qad-mdata-count" || name == "nsr-nbr-qad-qid" || name == "nsr-nbr-seq-no" || name == "nsr-nodeid" || name == "nsr-peer-nodeid" || name == "nsr-peer-version" || name == "nsr-rev" || name == "nsr-tmr-quant" || name == "nsr-version")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{

    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "nsr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-bad-pulses-rx" || name == "nsr-events-in-q" || name == "nsr-events-rx" || name == "nsr-events-tx" || name == "nsr-good-pulses-rx" || name == "nsr-pulse-quant" || name == "nsr-pulse-tx-fails" || name == "nsr-pulses-tx")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-evs-qd" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{

    yang_name = "nsr-thd-sched"; yang_parent_name = "nsr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-bad-pulses-rx" || name == "nsr-events-in-q" || name == "nsr-events-rx" || name == "nsr-events-tx" || name == "nsr-good-pulses-rx" || name == "nsr-pulse-quant" || name == "nsr-pulse-tx-fails" || name == "nsr-pulses-tx")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-evs-qd" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::ProtocolStats()
    :
    checksumerr{YType::uint32, "checksumerr"},
    h_input_ack{YType::uint32, "h-input-ack"},
    h_input_dbdes{YType::uint32, "h-input-dbdes"},
    h_input_lsupd{YType::uint32, "h-input-lsupd"},
    h_input_req{YType::uint32, "h-input-req"},
    input_ack{YType::uint32, "input-ack"},
    input_ack_lsa{YType::uint32, "input-ack-lsa"},
    input_autherr{YType::uint32, "input-autherr"},
    input_dbdes{YType::uint32, "input-dbdes"},
    input_dbdes_lsa{YType::uint32, "input-dbdes-lsa"},
    input_hello{YType::uint32, "input-hello"},
    input_lsupd{YType::uint32, "input-lsupd"},
    input_lsupd_lsa{YType::uint32, "input-lsupd-lsa"},
    input_req{YType::uint32, "input-req"},
    input_req_lsa{YType::uint32, "input-req-lsa"},
    inputs{YType::uint32, "inputs"},
    output_ack{YType::uint32, "output-ack"},
    output_ack_lsa{YType::uint32, "output-ack-lsa"},
    output_autherr{YType::uint32, "output-autherr"},
    output_dbdes{YType::uint32, "output-dbdes"},
    output_dbdes_lsa{YType::uint32, "output-dbdes-lsa"},
    output_hello{YType::uint32, "output-hello"},
    output_lsupd{YType::uint32, "output-lsupd"},
    output_lsupd_lsa{YType::uint32, "output-lsupd-lsa"},
    output_req{YType::uint32, "output-req"},
    output_req_lsa{YType::uint32, "output-req-lsa"},
    outputs{YType::uint32, "outputs"}
{

    yang_name = "protocol-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::~ProtocolStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::has_data() const
{
    return checksumerr.is_set
	|| h_input_ack.is_set
	|| h_input_dbdes.is_set
	|| h_input_lsupd.is_set
	|| h_input_req.is_set
	|| input_ack.is_set
	|| input_ack_lsa.is_set
	|| input_autherr.is_set
	|| input_dbdes.is_set
	|| input_dbdes_lsa.is_set
	|| input_hello.is_set
	|| input_lsupd.is_set
	|| input_lsupd_lsa.is_set
	|| input_req.is_set
	|| input_req_lsa.is_set
	|| inputs.is_set
	|| output_ack.is_set
	|| output_ack_lsa.is_set
	|| output_autherr.is_set
	|| output_dbdes.is_set
	|| output_dbdes_lsa.is_set
	|| output_hello.is_set
	|| output_lsupd.is_set
	|| output_lsupd_lsa.is_set
	|| output_req.is_set
	|| output_req_lsa.is_set
	|| outputs.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checksumerr.yfilter)
	|| ydk::is_set(h_input_ack.yfilter)
	|| ydk::is_set(h_input_dbdes.yfilter)
	|| ydk::is_set(h_input_lsupd.yfilter)
	|| ydk::is_set(h_input_req.yfilter)
	|| ydk::is_set(input_ack.yfilter)
	|| ydk::is_set(input_ack_lsa.yfilter)
	|| ydk::is_set(input_autherr.yfilter)
	|| ydk::is_set(input_dbdes.yfilter)
	|| ydk::is_set(input_dbdes_lsa.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(input_lsupd.yfilter)
	|| ydk::is_set(input_lsupd_lsa.yfilter)
	|| ydk::is_set(input_req.yfilter)
	|| ydk::is_set(input_req_lsa.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(output_ack.yfilter)
	|| ydk::is_set(output_ack_lsa.yfilter)
	|| ydk::is_set(output_autherr.yfilter)
	|| ydk::is_set(output_dbdes.yfilter)
	|| ydk::is_set(output_dbdes_lsa.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(output_lsupd.yfilter)
	|| ydk::is_set(output_lsupd_lsa.yfilter)
	|| ydk::is_set(output_req.yfilter)
	|| ydk::is_set(output_req_lsa.yfilter)
	|| ydk::is_set(outputs.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checksumerr.is_set || is_set(checksumerr.yfilter)) leaf_name_data.push_back(checksumerr.get_name_leafdata());
    if (h_input_ack.is_set || is_set(h_input_ack.yfilter)) leaf_name_data.push_back(h_input_ack.get_name_leafdata());
    if (h_input_dbdes.is_set || is_set(h_input_dbdes.yfilter)) leaf_name_data.push_back(h_input_dbdes.get_name_leafdata());
    if (h_input_lsupd.is_set || is_set(h_input_lsupd.yfilter)) leaf_name_data.push_back(h_input_lsupd.get_name_leafdata());
    if (h_input_req.is_set || is_set(h_input_req.yfilter)) leaf_name_data.push_back(h_input_req.get_name_leafdata());
    if (input_ack.is_set || is_set(input_ack.yfilter)) leaf_name_data.push_back(input_ack.get_name_leafdata());
    if (input_ack_lsa.is_set || is_set(input_ack_lsa.yfilter)) leaf_name_data.push_back(input_ack_lsa.get_name_leafdata());
    if (input_autherr.is_set || is_set(input_autherr.yfilter)) leaf_name_data.push_back(input_autherr.get_name_leafdata());
    if (input_dbdes.is_set || is_set(input_dbdes.yfilter)) leaf_name_data.push_back(input_dbdes.get_name_leafdata());
    if (input_dbdes_lsa.is_set || is_set(input_dbdes_lsa.yfilter)) leaf_name_data.push_back(input_dbdes_lsa.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_lsupd.is_set || is_set(input_lsupd.yfilter)) leaf_name_data.push_back(input_lsupd.get_name_leafdata());
    if (input_lsupd_lsa.is_set || is_set(input_lsupd_lsa.yfilter)) leaf_name_data.push_back(input_lsupd_lsa.get_name_leafdata());
    if (input_req.is_set || is_set(input_req.yfilter)) leaf_name_data.push_back(input_req.get_name_leafdata());
    if (input_req_lsa.is_set || is_set(input_req_lsa.yfilter)) leaf_name_data.push_back(input_req_lsa.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (output_ack.is_set || is_set(output_ack.yfilter)) leaf_name_data.push_back(output_ack.get_name_leafdata());
    if (output_ack_lsa.is_set || is_set(output_ack_lsa.yfilter)) leaf_name_data.push_back(output_ack_lsa.get_name_leafdata());
    if (output_autherr.is_set || is_set(output_autherr.yfilter)) leaf_name_data.push_back(output_autherr.get_name_leafdata());
    if (output_dbdes.is_set || is_set(output_dbdes.yfilter)) leaf_name_data.push_back(output_dbdes.get_name_leafdata());
    if (output_dbdes_lsa.is_set || is_set(output_dbdes_lsa.yfilter)) leaf_name_data.push_back(output_dbdes_lsa.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_lsupd.is_set || is_set(output_lsupd.yfilter)) leaf_name_data.push_back(output_lsupd.get_name_leafdata());
    if (output_lsupd_lsa.is_set || is_set(output_lsupd_lsa.yfilter)) leaf_name_data.push_back(output_lsupd_lsa.get_name_leafdata());
    if (output_req.is_set || is_set(output_req.yfilter)) leaf_name_data.push_back(output_req.get_name_leafdata());
    if (output_req_lsa.is_set || is_set(output_req_lsa.yfilter)) leaf_name_data.push_back(output_req_lsa.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.yfilter)) leaf_name_data.push_back(outputs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checksumerr")
    {
        checksumerr = value;
        checksumerr.value_namespace = name_space;
        checksumerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-ack")
    {
        h_input_ack = value;
        h_input_ack.value_namespace = name_space;
        h_input_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-dbdes")
    {
        h_input_dbdes = value;
        h_input_dbdes.value_namespace = name_space;
        h_input_dbdes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-lsupd")
    {
        h_input_lsupd = value;
        h_input_lsupd.value_namespace = name_space;
        h_input_lsupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-req")
    {
        h_input_req = value;
        h_input_req.value_namespace = name_space;
        h_input_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ack")
    {
        input_ack = value;
        input_ack.value_namespace = name_space;
        input_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ack-lsa")
    {
        input_ack_lsa = value;
        input_ack_lsa.value_namespace = name_space;
        input_ack_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-autherr")
    {
        input_autherr = value;
        input_autherr.value_namespace = name_space;
        input_autherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-dbdes")
    {
        input_dbdes = value;
        input_dbdes.value_namespace = name_space;
        input_dbdes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-dbdes-lsa")
    {
        input_dbdes_lsa = value;
        input_dbdes_lsa.value_namespace = name_space;
        input_dbdes_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsupd")
    {
        input_lsupd = value;
        input_lsupd.value_namespace = name_space;
        input_lsupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsupd-lsa")
    {
        input_lsupd_lsa = value;
        input_lsupd_lsa.value_namespace = name_space;
        input_lsupd_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-req")
    {
        input_req = value;
        input_req.value_namespace = name_space;
        input_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-req-lsa")
    {
        input_req_lsa = value;
        input_req_lsa.value_namespace = name_space;
        input_req_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ack")
    {
        output_ack = value;
        output_ack.value_namespace = name_space;
        output_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ack-lsa")
    {
        output_ack_lsa = value;
        output_ack_lsa.value_namespace = name_space;
        output_ack_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-autherr")
    {
        output_autherr = value;
        output_autherr.value_namespace = name_space;
        output_autherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-dbdes")
    {
        output_dbdes = value;
        output_dbdes.value_namespace = name_space;
        output_dbdes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-dbdes-lsa")
    {
        output_dbdes_lsa = value;
        output_dbdes_lsa.value_namespace = name_space;
        output_dbdes_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsupd")
    {
        output_lsupd = value;
        output_lsupd.value_namespace = name_space;
        output_lsupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsupd-lsa")
    {
        output_lsupd_lsa = value;
        output_lsupd_lsa.value_namespace = name_space;
        output_lsupd_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-req")
    {
        output_req = value;
        output_req.value_namespace = name_space;
        output_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-req-lsa")
    {
        output_req_lsa = value;
        output_req_lsa.value_namespace = name_space;
        output_req_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outputs")
    {
        outputs = value;
        outputs.value_namespace = name_space;
        outputs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checksumerr")
    {
        checksumerr.yfilter = yfilter;
    }
    if(value_path == "h-input-ack")
    {
        h_input_ack.yfilter = yfilter;
    }
    if(value_path == "h-input-dbdes")
    {
        h_input_dbdes.yfilter = yfilter;
    }
    if(value_path == "h-input-lsupd")
    {
        h_input_lsupd.yfilter = yfilter;
    }
    if(value_path == "h-input-req")
    {
        h_input_req.yfilter = yfilter;
    }
    if(value_path == "input-ack")
    {
        input_ack.yfilter = yfilter;
    }
    if(value_path == "input-ack-lsa")
    {
        input_ack_lsa.yfilter = yfilter;
    }
    if(value_path == "input-autherr")
    {
        input_autherr.yfilter = yfilter;
    }
    if(value_path == "input-dbdes")
    {
        input_dbdes.yfilter = yfilter;
    }
    if(value_path == "input-dbdes-lsa")
    {
        input_dbdes_lsa.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "input-lsupd")
    {
        input_lsupd.yfilter = yfilter;
    }
    if(value_path == "input-lsupd-lsa")
    {
        input_lsupd_lsa.yfilter = yfilter;
    }
    if(value_path == "input-req")
    {
        input_req.yfilter = yfilter;
    }
    if(value_path == "input-req-lsa")
    {
        input_req_lsa.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "output-ack")
    {
        output_ack.yfilter = yfilter;
    }
    if(value_path == "output-ack-lsa")
    {
        output_ack_lsa.yfilter = yfilter;
    }
    if(value_path == "output-autherr")
    {
        output_autherr.yfilter = yfilter;
    }
    if(value_path == "output-dbdes")
    {
        output_dbdes.yfilter = yfilter;
    }
    if(value_path == "output-dbdes-lsa")
    {
        output_dbdes_lsa.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "output-lsupd")
    {
        output_lsupd.yfilter = yfilter;
    }
    if(value_path == "output-lsupd-lsa")
    {
        output_lsupd_lsa.yfilter = yfilter;
    }
    if(value_path == "output-req")
    {
        output_req.yfilter = yfilter;
    }
    if(value_path == "output-req-lsa")
    {
        output_req_lsa.yfilter = yfilter;
    }
    if(value_path == "outputs")
    {
        outputs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checksumerr" || name == "h-input-ack" || name == "h-input-dbdes" || name == "h-input-lsupd" || name == "h-input-req" || name == "input-ack" || name == "input-ack-lsa" || name == "input-autherr" || name == "input-dbdes" || name == "input-dbdes-lsa" || name == "input-hello" || name == "input-lsupd" || name == "input-lsupd-lsa" || name == "input-req" || name == "input-req-lsa" || name == "inputs" || name == "output-ack" || name == "output-ack-lsa" || name == "output-autherr" || name == "output-dbdes" || name == "output-dbdes-lsa" || name == "output-hello" || name == "output-lsupd" || name == "output-lsupd-lsa" || name == "output-req" || name == "output-req-lsa" || name == "outputs")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::RawIoStats()
    :
    disconnects{YType::uint32, "disconnects"},
    in_bytes_rcv{YType::uint32, "in-bytes-rcv"},
    in_no_mem_discarded{YType::uint32, "in-no-mem-discarded"},
    in_raw_event{YType::uint32, "in-raw-event"},
    in_rcv{YType::uint32, "in-rcv"},
    in_short_msg_discarded{YType::uint32, "in-short-msg-discarded"},
    in_standby_discarded{YType::uint32, "in-standby-discarded"},
    nsr_not_ready_discarded{YType::uint32, "nsr-not-ready-discarded"},
    out_bytes_sent{YType::uint32, "out-bytes-sent"},
    out_ipv4_hdr_err_discarded{YType::uint32, "out-ipv4-hdr-err-discarded"},
    out_no_conn_discarded{YType::uint32, "out-no-conn-discarded"},
    out_no_pak_discarded{YType::uint32, "out-no-pak-discarded"},
    out_null_src_discarded{YType::uint32, "out-null-src-discarded"},
    out_send_pak_err_discarded{YType::uint32, "out-send-pak-err-discarded"},
    out_sent{YType::uint32, "out-sent"},
    raw_connected{YType::boolean, "raw-connected"},
    sl_raw_connected{YType::boolean, "sl-raw-connected"}
{

    yang_name = "raw-io-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::~RawIoStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::has_data() const
{
    return disconnects.is_set
	|| in_bytes_rcv.is_set
	|| in_no_mem_discarded.is_set
	|| in_raw_event.is_set
	|| in_rcv.is_set
	|| in_short_msg_discarded.is_set
	|| in_standby_discarded.is_set
	|| nsr_not_ready_discarded.is_set
	|| out_bytes_sent.is_set
	|| out_ipv4_hdr_err_discarded.is_set
	|| out_no_conn_discarded.is_set
	|| out_no_pak_discarded.is_set
	|| out_null_src_discarded.is_set
	|| out_send_pak_err_discarded.is_set
	|| out_sent.is_set
	|| raw_connected.is_set
	|| sl_raw_connected.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disconnects.yfilter)
	|| ydk::is_set(in_bytes_rcv.yfilter)
	|| ydk::is_set(in_no_mem_discarded.yfilter)
	|| ydk::is_set(in_raw_event.yfilter)
	|| ydk::is_set(in_rcv.yfilter)
	|| ydk::is_set(in_short_msg_discarded.yfilter)
	|| ydk::is_set(in_standby_discarded.yfilter)
	|| ydk::is_set(nsr_not_ready_discarded.yfilter)
	|| ydk::is_set(out_bytes_sent.yfilter)
	|| ydk::is_set(out_ipv4_hdr_err_discarded.yfilter)
	|| ydk::is_set(out_no_conn_discarded.yfilter)
	|| ydk::is_set(out_no_pak_discarded.yfilter)
	|| ydk::is_set(out_null_src_discarded.yfilter)
	|| ydk::is_set(out_send_pak_err_discarded.yfilter)
	|| ydk::is_set(out_sent.yfilter)
	|| ydk::is_set(raw_connected.yfilter)
	|| ydk::is_set(sl_raw_connected.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw-io-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disconnects.is_set || is_set(disconnects.yfilter)) leaf_name_data.push_back(disconnects.get_name_leafdata());
    if (in_bytes_rcv.is_set || is_set(in_bytes_rcv.yfilter)) leaf_name_data.push_back(in_bytes_rcv.get_name_leafdata());
    if (in_no_mem_discarded.is_set || is_set(in_no_mem_discarded.yfilter)) leaf_name_data.push_back(in_no_mem_discarded.get_name_leafdata());
    if (in_raw_event.is_set || is_set(in_raw_event.yfilter)) leaf_name_data.push_back(in_raw_event.get_name_leafdata());
    if (in_rcv.is_set || is_set(in_rcv.yfilter)) leaf_name_data.push_back(in_rcv.get_name_leafdata());
    if (in_short_msg_discarded.is_set || is_set(in_short_msg_discarded.yfilter)) leaf_name_data.push_back(in_short_msg_discarded.get_name_leafdata());
    if (in_standby_discarded.is_set || is_set(in_standby_discarded.yfilter)) leaf_name_data.push_back(in_standby_discarded.get_name_leafdata());
    if (nsr_not_ready_discarded.is_set || is_set(nsr_not_ready_discarded.yfilter)) leaf_name_data.push_back(nsr_not_ready_discarded.get_name_leafdata());
    if (out_bytes_sent.is_set || is_set(out_bytes_sent.yfilter)) leaf_name_data.push_back(out_bytes_sent.get_name_leafdata());
    if (out_ipv4_hdr_err_discarded.is_set || is_set(out_ipv4_hdr_err_discarded.yfilter)) leaf_name_data.push_back(out_ipv4_hdr_err_discarded.get_name_leafdata());
    if (out_no_conn_discarded.is_set || is_set(out_no_conn_discarded.yfilter)) leaf_name_data.push_back(out_no_conn_discarded.get_name_leafdata());
    if (out_no_pak_discarded.is_set || is_set(out_no_pak_discarded.yfilter)) leaf_name_data.push_back(out_no_pak_discarded.get_name_leafdata());
    if (out_null_src_discarded.is_set || is_set(out_null_src_discarded.yfilter)) leaf_name_data.push_back(out_null_src_discarded.get_name_leafdata());
    if (out_send_pak_err_discarded.is_set || is_set(out_send_pak_err_discarded.yfilter)) leaf_name_data.push_back(out_send_pak_err_discarded.get_name_leafdata());
    if (out_sent.is_set || is_set(out_sent.yfilter)) leaf_name_data.push_back(out_sent.get_name_leafdata());
    if (raw_connected.is_set || is_set(raw_connected.yfilter)) leaf_name_data.push_back(raw_connected.get_name_leafdata());
    if (sl_raw_connected.is_set || is_set(sl_raw_connected.yfilter)) leaf_name_data.push_back(sl_raw_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disconnects")
    {
        disconnects = value;
        disconnects.value_namespace = name_space;
        disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bytes-rcv")
    {
        in_bytes_rcv = value;
        in_bytes_rcv.value_namespace = name_space;
        in_bytes_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-no-mem-discarded")
    {
        in_no_mem_discarded = value;
        in_no_mem_discarded.value_namespace = name_space;
        in_no_mem_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-raw-event")
    {
        in_raw_event = value;
        in_raw_event.value_namespace = name_space;
        in_raw_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rcv")
    {
        in_rcv = value;
        in_rcv.value_namespace = name_space;
        in_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-short-msg-discarded")
    {
        in_short_msg_discarded = value;
        in_short_msg_discarded.value_namespace = name_space;
        in_short_msg_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-standby-discarded")
    {
        in_standby_discarded = value;
        in_standby_discarded.value_namespace = name_space;
        in_standby_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-not-ready-discarded")
    {
        nsr_not_ready_discarded = value;
        nsr_not_ready_discarded.value_namespace = name_space;
        nsr_not_ready_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bytes-sent")
    {
        out_bytes_sent = value;
        out_bytes_sent.value_namespace = name_space;
        out_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ipv4-hdr-err-discarded")
    {
        out_ipv4_hdr_err_discarded = value;
        out_ipv4_hdr_err_discarded.value_namespace = name_space;
        out_ipv4_hdr_err_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-no-conn-discarded")
    {
        out_no_conn_discarded = value;
        out_no_conn_discarded.value_namespace = name_space;
        out_no_conn_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-no-pak-discarded")
    {
        out_no_pak_discarded = value;
        out_no_pak_discarded.value_namespace = name_space;
        out_no_pak_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-null-src-discarded")
    {
        out_null_src_discarded = value;
        out_null_src_discarded.value_namespace = name_space;
        out_null_src_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-send-pak-err-discarded")
    {
        out_send_pak_err_discarded = value;
        out_send_pak_err_discarded.value_namespace = name_space;
        out_send_pak_err_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-sent")
    {
        out_sent = value;
        out_sent.value_namespace = name_space;
        out_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-connected")
    {
        raw_connected = value;
        raw_connected.value_namespace = name_space;
        raw_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sl-raw-connected")
    {
        sl_raw_connected = value;
        sl_raw_connected.value_namespace = name_space;
        sl_raw_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disconnects")
    {
        disconnects.yfilter = yfilter;
    }
    if(value_path == "in-bytes-rcv")
    {
        in_bytes_rcv.yfilter = yfilter;
    }
    if(value_path == "in-no-mem-discarded")
    {
        in_no_mem_discarded.yfilter = yfilter;
    }
    if(value_path == "in-raw-event")
    {
        in_raw_event.yfilter = yfilter;
    }
    if(value_path == "in-rcv")
    {
        in_rcv.yfilter = yfilter;
    }
    if(value_path == "in-short-msg-discarded")
    {
        in_short_msg_discarded.yfilter = yfilter;
    }
    if(value_path == "in-standby-discarded")
    {
        in_standby_discarded.yfilter = yfilter;
    }
    if(value_path == "nsr-not-ready-discarded")
    {
        nsr_not_ready_discarded.yfilter = yfilter;
    }
    if(value_path == "out-bytes-sent")
    {
        out_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "out-ipv4-hdr-err-discarded")
    {
        out_ipv4_hdr_err_discarded.yfilter = yfilter;
    }
    if(value_path == "out-no-conn-discarded")
    {
        out_no_conn_discarded.yfilter = yfilter;
    }
    if(value_path == "out-no-pak-discarded")
    {
        out_no_pak_discarded.yfilter = yfilter;
    }
    if(value_path == "out-null-src-discarded")
    {
        out_null_src_discarded.yfilter = yfilter;
    }
    if(value_path == "out-send-pak-err-discarded")
    {
        out_send_pak_err_discarded.yfilter = yfilter;
    }
    if(value_path == "out-sent")
    {
        out_sent.yfilter = yfilter;
    }
    if(value_path == "raw-connected")
    {
        raw_connected.yfilter = yfilter;
    }
    if(value_path == "sl-raw-connected")
    {
        sl_raw_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnects" || name == "in-bytes-rcv" || name == "in-no-mem-discarded" || name == "in-raw-event" || name == "in-rcv" || name == "in-short-msg-discarded" || name == "in-standby-discarded" || name == "nsr-not-ready-discarded" || name == "out-bytes-sent" || name == "out-ipv4-hdr-err-discarded" || name == "out-no-conn-discarded" || name == "out-no-pak-discarded" || name == "out-null-src-discarded" || name == "out-send-pak-err-discarded" || name == "out-sent" || name == "raw-connected" || name == "sl-raw-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::RibBatchStats()
{

    yang_name = "rib-batch-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::~RibBatchStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::has_data() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::has_operation() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-batch-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-batch")
    {
        for(auto const & c : priority_batch)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch>();
        c->parent = this;
        priority_batch.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_batch)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-batch")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::PriorityBatch()
    :
    batches_sent{YType::uint32, "batches-sent"},
    lfas_add{YType::uint32, "lfas-add"},
    lfas_del{YType::uint32, "lfas-del"},
    lfas_pending{YType::uint32, "lfas-pending"},
    lfas_sent{YType::uint32, "lfas-sent"},
    max_routes{YType::uint32, "max-routes"},
    paths_add{YType::uint32, "paths-add"},
    paths_add_errs{YType::uint32, "paths-add-errs"},
    paths_del{YType::uint32, "paths-del"},
    paths_del_errs{YType::uint32, "paths-del-errs"},
    paths_pending{YType::uint32, "paths-pending"},
    paths_sent{YType::uint32, "paths-sent"},
    priority_level{YType::str, "priority-level"},
    routes_pending{YType::uint32, "routes-pending"},
    routes_sent{YType::uint32, "routes-sent"}
{

    yang_name = "priority-batch"; yang_parent_name = "rib-batch-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::~PriorityBatch()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::has_data() const
{
    return batches_sent.is_set
	|| lfas_add.is_set
	|| lfas_del.is_set
	|| lfas_pending.is_set
	|| lfas_sent.is_set
	|| max_routes.is_set
	|| paths_add.is_set
	|| paths_add_errs.is_set
	|| paths_del.is_set
	|| paths_del_errs.is_set
	|| paths_pending.is_set
	|| paths_sent.is_set
	|| priority_level.is_set
	|| routes_pending.is_set
	|| routes_sent.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(batches_sent.yfilter)
	|| ydk::is_set(lfas_add.yfilter)
	|| ydk::is_set(lfas_del.yfilter)
	|| ydk::is_set(lfas_pending.yfilter)
	|| ydk::is_set(lfas_sent.yfilter)
	|| ydk::is_set(max_routes.yfilter)
	|| ydk::is_set(paths_add.yfilter)
	|| ydk::is_set(paths_add_errs.yfilter)
	|| ydk::is_set(paths_del.yfilter)
	|| ydk::is_set(paths_del_errs.yfilter)
	|| ydk::is_set(paths_pending.yfilter)
	|| ydk::is_set(paths_sent.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(routes_pending.yfilter)
	|| ydk::is_set(routes_sent.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-batch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batches_sent.is_set || is_set(batches_sent.yfilter)) leaf_name_data.push_back(batches_sent.get_name_leafdata());
    if (lfas_add.is_set || is_set(lfas_add.yfilter)) leaf_name_data.push_back(lfas_add.get_name_leafdata());
    if (lfas_del.is_set || is_set(lfas_del.yfilter)) leaf_name_data.push_back(lfas_del.get_name_leafdata());
    if (lfas_pending.is_set || is_set(lfas_pending.yfilter)) leaf_name_data.push_back(lfas_pending.get_name_leafdata());
    if (lfas_sent.is_set || is_set(lfas_sent.yfilter)) leaf_name_data.push_back(lfas_sent.get_name_leafdata());
    if (max_routes.is_set || is_set(max_routes.yfilter)) leaf_name_data.push_back(max_routes.get_name_leafdata());
    if (paths_add.is_set || is_set(paths_add.yfilter)) leaf_name_data.push_back(paths_add.get_name_leafdata());
    if (paths_add_errs.is_set || is_set(paths_add_errs.yfilter)) leaf_name_data.push_back(paths_add_errs.get_name_leafdata());
    if (paths_del.is_set || is_set(paths_del.yfilter)) leaf_name_data.push_back(paths_del.get_name_leafdata());
    if (paths_del_errs.is_set || is_set(paths_del_errs.yfilter)) leaf_name_data.push_back(paths_del_errs.get_name_leafdata());
    if (paths_pending.is_set || is_set(paths_pending.yfilter)) leaf_name_data.push_back(paths_pending.get_name_leafdata());
    if (paths_sent.is_set || is_set(paths_sent.yfilter)) leaf_name_data.push_back(paths_sent.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (routes_pending.is_set || is_set(routes_pending.yfilter)) leaf_name_data.push_back(routes_pending.get_name_leafdata());
    if (routes_sent.is_set || is_set(routes_sent.yfilter)) leaf_name_data.push_back(routes_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "batches-sent")
    {
        batches_sent = value;
        batches_sent.value_namespace = name_space;
        batches_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-add")
    {
        lfas_add = value;
        lfas_add.value_namespace = name_space;
        lfas_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-del")
    {
        lfas_del = value;
        lfas_del.value_namespace = name_space;
        lfas_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-pending")
    {
        lfas_pending = value;
        lfas_pending.value_namespace = name_space;
        lfas_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-sent")
    {
        lfas_sent = value;
        lfas_sent.value_namespace = name_space;
        lfas_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-routes")
    {
        max_routes = value;
        max_routes.value_namespace = name_space;
        max_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-add")
    {
        paths_add = value;
        paths_add.value_namespace = name_space;
        paths_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs = value;
        paths_add_errs.value_namespace = name_space;
        paths_add_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-del")
    {
        paths_del = value;
        paths_del.value_namespace = name_space;
        paths_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs = value;
        paths_del_errs.value_namespace = name_space;
        paths_del_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-pending")
    {
        paths_pending = value;
        paths_pending.value_namespace = name_space;
        paths_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-sent")
    {
        paths_sent = value;
        paths_sent.value_namespace = name_space;
        paths_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-pending")
    {
        routes_pending = value;
        routes_pending.value_namespace = name_space;
        routes_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-sent")
    {
        routes_sent = value;
        routes_sent.value_namespace = name_space;
        routes_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "batches-sent")
    {
        batches_sent.yfilter = yfilter;
    }
    if(value_path == "lfas-add")
    {
        lfas_add.yfilter = yfilter;
    }
    if(value_path == "lfas-del")
    {
        lfas_del.yfilter = yfilter;
    }
    if(value_path == "lfas-pending")
    {
        lfas_pending.yfilter = yfilter;
    }
    if(value_path == "lfas-sent")
    {
        lfas_sent.yfilter = yfilter;
    }
    if(value_path == "max-routes")
    {
        max_routes.yfilter = yfilter;
    }
    if(value_path == "paths-add")
    {
        paths_add.yfilter = yfilter;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs.yfilter = yfilter;
    }
    if(value_path == "paths-del")
    {
        paths_del.yfilter = yfilter;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs.yfilter = yfilter;
    }
    if(value_path == "paths-pending")
    {
        paths_pending.yfilter = yfilter;
    }
    if(value_path == "paths-sent")
    {
        paths_sent.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "routes-pending")
    {
        routes_pending.yfilter = yfilter;
    }
    if(value_path == "routes-sent")
    {
        routes_sent.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batches-sent" || name == "lfas-add" || name == "lfas-del" || name == "lfas-pending" || name == "lfas-sent" || name == "max-routes" || name == "paths-add" || name == "paths-add-errs" || name == "paths-del" || name == "paths-del-errs" || name == "paths-pending" || name == "paths-sent" || name == "priority-level" || name == "routes-pending" || name == "routes-sent")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::RibThreadStats()
    :
    internalwq(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq>())
{
    internalwq->parent = this;

    yang_name = "rib-thread-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::~RibThreadStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::has_data() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_data())
            return true;
    }
    return (internalwq !=  nullptr && internalwq->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::has_operation() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (internalwq !=  nullptr && internalwq->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-thread-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internalwq")
    {
        if(internalwq == nullptr)
        {
            internalwq = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq>();
        }
        return internalwq;
    }

    if(child_yang_name == "ribqueue")
    {
        for(auto const & c : ribqueue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue>();
        c->parent = this;
        ribqueue.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(internalwq != nullptr)
    {
        children["internalwq"] = internalwq;
    }

    for (auto const & c : ribqueue)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internalwq" || name == "ribqueue")
        return true;
    return false;
}


}
}

