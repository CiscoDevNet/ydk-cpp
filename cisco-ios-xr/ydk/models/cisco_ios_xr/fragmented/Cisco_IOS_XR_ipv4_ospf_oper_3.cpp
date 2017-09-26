
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_6.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_7.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_4.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::RoutePath()
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
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformations()
{

    yang_name = "route-area-informations"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::~RouteAreaInformations()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_data() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_operation() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-informations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation>();
        c->parent = this;
        route_area_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_area_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-area-information")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteAreaInformation()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route-area-information"; yang_parent_name = "route-area-informations"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::~RouteAreaInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>();
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteInfo()
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
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::RoutePath()
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
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::SummaryAreaInformation()
    :
    failure_address{YType::str, "failure-address"},
    failures{YType::uint32, "failures"}
    	,
    common(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>())
	,failure_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>())
{
    common->parent = this;
    failure_time->parent = this;

    yang_name = "summary-area-information"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::~SummaryAreaInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_data() const
{
    return failure_address.is_set
	|| failures.is_set
	|| (common !=  nullptr && common->has_data())
	|| (failure_time !=  nullptr && failure_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure_address.yfilter)
	|| ydk::is_set(failures.yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (failure_time !=  nullptr && failure_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-area-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_address.is_set || is_set(failure_address.yfilter)) leaf_name_data.push_back(failure_address.get_name_leafdata());
    if (failures.is_set || is_set(failures.yfilter)) leaf_name_data.push_back(failures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>();
        }
        return common;
    }

    if(child_yang_name == "failure-time")
    {
        if(failure_time == nullptr)
        {
            failure_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>();
        }
        return failure_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "failure-time" || name == "failure-address" || name == "failures")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::Common()
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

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_data() const
{
    return external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| external_type1s.is_set
	|| external_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-nssa-type1s" || name == "external-nssa-type2s" || name == "external-type1s" || name == "external-type2s" || name == "inter-areas" || name == "intra-areas" || name == "total")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::FailureTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "failure-time"; yang_parent_name = "summary-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::RouteTable()
{

    yang_name = "route-table"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::~RouteTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route"; yang_parent_name = "route-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo>();
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-connected" || name == "route-metric" || name == "route-prefix" || name == "route-prefix-length" || name == "route-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteInfo()
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
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-fail-time" || name == "route-update-time" || name == "route-area-id" || name == "route-auto-excluded" || name == "route-forward-distance" || name == "route-rib-version" || name == "route-source" || name == "route-spf-priority" || name == "route-spf-version" || name == "route-srte-nbr-registered" || name == "route-srte-prefix-registered" || name == "route-te-metric")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::RoutePath()
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
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "area-format" || name == "area-id" || name == "lsa-type" || name == "route-interface-name" || name == "route-lsaid" || name == "route-metric" || name == "route-next-hop-address" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-source")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-strict-spf" || name == "microloop-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_element_type.yfilter)
	|| ydk::is_set(repair_label.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-element-type" || name == "repair-label")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::SummaryInformation()
    :
    failure_address{YType::str, "failure-address"},
    failures{YType::uint32, "failures"}
    	,
    common(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common>())
	,failure_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime>())
{
    common->parent = this;
    failure_time->parent = this;

    yang_name = "summary-information"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::~SummaryInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::has_data() const
{
    return failure_address.is_set
	|| failures.is_set
	|| (common !=  nullptr && common->has_data())
	|| (failure_time !=  nullptr && failure_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure_address.yfilter)
	|| ydk::is_set(failures.yfilter)
	|| (common !=  nullptr && common->has_operation())
	|| (failure_time !=  nullptr && failure_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_address.is_set || is_set(failure_address.yfilter)) leaf_name_data.push_back(failure_address.get_name_leafdata());
    if (failures.is_set || is_set(failures.yfilter)) leaf_name_data.push_back(failures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common>();
        }
        return common;
    }

    if(child_yang_name == "failure-time")
    {
        if(failure_time == nullptr)
        {
            failure_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime>();
        }
        return failure_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "failure-time" || name == "failure-address" || name == "failures")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::Common()
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

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::has_data() const
{
    return external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| external_type1s.is_set
	|| external_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-nssa-type1s" || name == "external-nssa-type2s" || name == "external-type1s" || name == "external-type2s" || name == "inter-areas" || name == "intra-areas" || name == "total")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::FailureTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "failure-time"; yang_parent_name = "summary-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::Statistics()
    :
    frr_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats>())
	,interface_stats_entries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries>())
	,issu_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats>())
	,nsr_pl_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats>())
	,nsr_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats>())
	,protocol_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats>())
	,raw_io_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats>())
	,rib_batch_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats>())
	,rib_thread_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats>())
	,spf_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats>())
	,te_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::TeStats>())
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

    yang_name = "statistics"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::~Statistics()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-stats")
    {
        if(frr_stats == nullptr)
        {
            frr_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats>();
        }
        return frr_stats;
    }

    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    if(child_yang_name == "issu-stats")
    {
        if(issu_stats == nullptr)
        {
            issu_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats>();
        }
        return issu_stats;
    }

    if(child_yang_name == "nsr-pl-stats")
    {
        if(nsr_pl_stats == nullptr)
        {
            nsr_pl_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats>();
        }
        return nsr_pl_stats;
    }

    if(child_yang_name == "nsr-stats")
    {
        if(nsr_stats == nullptr)
        {
            nsr_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats>();
        }
        return nsr_stats;
    }

    if(child_yang_name == "protocol-stats")
    {
        if(protocol_stats == nullptr)
        {
            protocol_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats>();
        }
        return protocol_stats;
    }

    if(child_yang_name == "raw-io-stats")
    {
        if(raw_io_stats == nullptr)
        {
            raw_io_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats>();
        }
        return raw_io_stats;
    }

    if(child_yang_name == "rib-batch-stats")
    {
        if(rib_batch_stats == nullptr)
        {
            rib_batch_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats>();
        }
        return rib_batch_stats;
    }

    if(child_yang_name == "rib-thread-stats")
    {
        if(rib_thread_stats == nullptr)
        {
            rib_thread_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats>();
        }
        return rib_thread_stats;
    }

    if(child_yang_name == "spf-stats")
    {
        if(spf_stats == nullptr)
        {
            spf_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats>();
        }
        return spf_stats;
    }

    if(child_yang_name == "te-stats")
    {
        if(te_stats == nullptr)
        {
            te_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::TeStats>();
        }
        return te_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-stats" || name == "interface-stats-entries" || name == "issu-stats" || name == "nsr-pl-stats" || name == "nsr-stats" || name == "protocol-stats" || name == "raw-io-stats" || name == "rib-batch-stats" || name == "rib-thread-stats" || name == "spf-stats" || name == "te-stats")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::FrrStats()
    :
    fs_paths{YType::uint32, "fs-paths"},
    fs_paths_eligible{YType::uint32, "fs-paths-eligible"},
    fs_paths_protected{YType::uint32, "fs-paths-protected"}
{

    yang_name = "frr-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::~FrrStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::has_data() const
{
    return fs_paths.is_set
	|| fs_paths_eligible.is_set
	|| fs_paths_protected.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fs_paths.yfilter)
	|| ydk::is_set(fs_paths_eligible.yfilter)
	|| ydk::is_set(fs_paths_protected.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fs_paths.is_set || is_set(fs_paths.yfilter)) leaf_name_data.push_back(fs_paths.get_name_leafdata());
    if (fs_paths_eligible.is_set || is_set(fs_paths_eligible.yfilter)) leaf_name_data.push_back(fs_paths_eligible.get_name_leafdata());
    if (fs_paths_protected.is_set || is_set(fs_paths_protected.yfilter)) leaf_name_data.push_back(fs_paths_protected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fs-paths" || name == "fs-paths-eligible" || name == "fs-paths-protected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_stats_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    madj_intf{YType::boolean, "madj-intf"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "area-id" || name == "area-id-str" || name == "madj-intf")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::IssuStats()
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
    nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched>())
	,nsr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched>())
{
    nsr_rtr_thd_sched->parent = this;
    nsr_thd_sched->parent = this;

    yang_name = "issu-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::~IssuStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched == nullptr)
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched>();
        }
        return nsr_rtr_thd_sched;
    }

    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched == nullptr)
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched>();
        }
        return nsr_thd_sched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-rtr-thd-sched" || name == "nsr-thd-sched" || name == "nsr-conn-to-active-attempts" || name == "nsr-conn-to-active-closes" || name == "nsr-conn-to-active-errors" || name == "nsr-conn-to-active-fails" || name == "nsr-conn-to-active-opens" || name == "nsr-fsm-state" || name == "nsr-intf-seq-no" || name == "nsr-lsa-init-sync-pend-count" || name == "nsr-lsa-qad-mdata-count" || name == "nsr-lsa-qad-qid" || name == "nsr-mtu" || name == "nsr-nbr-init-sync-pend-count" || name == "nsr-nbr-qad-mdata-count" || name == "nsr-nbr-qad-qid" || name == "nsr-nbr-seq-no" || name == "nsr-nodeid" || name == "nsr-peer-nodeid" || name == "nsr-peer-version" || name == "nsr-rev" || name == "nsr-tmr-quant" || name == "nsr-version")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrRtrThdSched()
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

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-bad-pulses-rx" || name == "nsr-events-in-q" || name == "nsr-events-rx" || name == "nsr-events-tx" || name == "nsr-good-pulses-rx" || name == "nsr-pulse-quant" || name == "nsr-pulse-tx-fails" || name == "nsr-pulses-tx")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::NsrPri()
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

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-evs-qd" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrThdSched()
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

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-bad-pulses-rx" || name == "nsr-events-in-q" || name == "nsr-events-rx" || name == "nsr-events-tx" || name == "nsr-good-pulses-rx" || name == "nsr-pulse-quant" || name == "nsr-pulse-tx-fails" || name == "nsr-pulses-tx")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::NsrPri()
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

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-evs-qd" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NsrPlStats()
{

    yang_name = "nsr-pl-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::~NsrPlStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::has_data() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::has_operation() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri>();
        c->parent = this;
        ncd_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ncd_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncd-pri")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NcdPri()
{

    yang_name = "ncd-pri"; yang_parent_name = "nsr-pl-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::~NcdPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv>();
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop>();
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent>();
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-recv" || name == "num-recv-drop" || name == "num-sent" || name == "num-sent-drop")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::NumRecv()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-recv"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::~NumRecv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NumRecvDrop()
{

    yang_name = "num-recv-drop"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::~NumRecvDrop()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray>();
        c->parent = this;
        nsr_pl_recv_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pl_recv_drop_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-recv-drop-array")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::NsrPlRecvDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-recv-drop-array"; yang_parent_name = "num-recv-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::~NsrPlRecvDropArray()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-recv-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::NumSent()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-sent"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::~NumSent()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NumSentDrop()
{

    yang_name = "num-sent-drop"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::~NumSentDrop()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray>();
        c->parent = this;
        nsr_pl_send_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pl_send_drop_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-send-drop-array")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::NsrPlSendDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-send-drop-array"; yang_parent_name = "num-sent-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::~NsrPlSendDropArray()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-send-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrStats()
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
    nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched>())
	,nsr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched>())
{
    nsr_rtr_thd_sched->parent = this;
    nsr_thd_sched->parent = this;

    yang_name = "nsr-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::~NsrStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched == nullptr)
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched>();
        }
        return nsr_rtr_thd_sched;
    }

    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched == nullptr)
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched>();
        }
        return nsr_thd_sched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-rtr-thd-sched" || name == "nsr-thd-sched" || name == "nsr-conn-to-active-attempts" || name == "nsr-conn-to-active-closes" || name == "nsr-conn-to-active-errors" || name == "nsr-conn-to-active-fails" || name == "nsr-conn-to-active-opens" || name == "nsr-fsm-state" || name == "nsr-intf-seq-no" || name == "nsr-lsa-init-sync-pend-count" || name == "nsr-lsa-qad-mdata-count" || name == "nsr-lsa-qad-qid" || name == "nsr-mtu" || name == "nsr-nbr-init-sync-pend-count" || name == "nsr-nbr-qad-mdata-count" || name == "nsr-nbr-qad-qid" || name == "nsr-nbr-seq-no" || name == "nsr-nodeid" || name == "nsr-peer-nodeid" || name == "nsr-peer-version" || name == "nsr-rev" || name == "nsr-tmr-quant" || name == "nsr-version")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrRtrThdSched()
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

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-bad-pulses-rx" || name == "nsr-events-in-q" || name == "nsr-events-rx" || name == "nsr-events-tx" || name == "nsr-good-pulses-rx" || name == "nsr-pulse-quant" || name == "nsr-pulse-tx-fails" || name == "nsr-pulses-tx")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::NsrPri()
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

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-evs-qd" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrThdSched()
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

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-bad-pulses-rx" || name == "nsr-events-in-q" || name == "nsr-events-rx" || name == "nsr-events-tx" || name == "nsr-good-pulses-rx" || name == "nsr-pulse-quant" || name == "nsr-pulse-tx-fails" || name == "nsr-pulses-tx")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::NsrPri()
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

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-evs-qd" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::ProtocolStats()
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

Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::~ProtocolStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checksumerr" || name == "h-input-ack" || name == "h-input-dbdes" || name == "h-input-lsupd" || name == "h-input-req" || name == "input-ack" || name == "input-ack-lsa" || name == "input-autherr" || name == "input-dbdes" || name == "input-dbdes-lsa" || name == "input-hello" || name == "input-lsupd" || name == "input-lsupd-lsa" || name == "input-req" || name == "input-req-lsa" || name == "inputs" || name == "output-ack" || name == "output-ack-lsa" || name == "output-autherr" || name == "output-dbdes" || name == "output-dbdes-lsa" || name == "output-hello" || name == "output-lsupd" || name == "output-lsupd-lsa" || name == "output-req" || name == "output-req-lsa" || name == "outputs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::RawIoStats()
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

Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::~RawIoStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw-io-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnects" || name == "in-bytes-rcv" || name == "in-no-mem-discarded" || name == "in-raw-event" || name == "in-rcv" || name == "in-short-msg-discarded" || name == "in-standby-discarded" || name == "nsr-not-ready-discarded" || name == "out-bytes-sent" || name == "out-ipv4-hdr-err-discarded" || name == "out-no-conn-discarded" || name == "out-no-pak-discarded" || name == "out-null-src-discarded" || name == "out-send-pak-err-discarded" || name == "out-sent" || name == "raw-connected" || name == "sl-raw-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::RibBatchStats()
{

    yang_name = "rib-batch-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::~RibBatchStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::has_data() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::has_operation() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-batch-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch>();
        c->parent = this;
        priority_batch.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_batch)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-batch")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::PriorityBatch()
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

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::~PriorityBatch()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::has_operation() const
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

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-batch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_name_leaf_data() const
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

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batches-sent" || name == "lfas-add" || name == "lfas-del" || name == "lfas-pending" || name == "lfas-sent" || name == "max-routes" || name == "paths-add" || name == "paths-add-errs" || name == "paths-del" || name == "paths-del-errs" || name == "paths-pending" || name == "paths-sent" || name == "priority-level" || name == "routes-pending" || name == "routes-sent")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::RibThreadStats()
    :
    internalwq(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq>())
{
    internalwq->parent = this;

    yang_name = "rib-thread-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::~RibThreadStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::has_data() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_data())
            return true;
    }
    return (internalwq !=  nullptr && internalwq->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::has_operation() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (internalwq !=  nullptr && internalwq->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-thread-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internalwq")
    {
        if(internalwq == nullptr)
        {
            internalwq = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq>();
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
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue>();
        c->parent = this;
        ribqueue.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_children() const
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

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internalwq" || name == "ribqueue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::Internalwq()
    :
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    rib_version{YType::uint32, "rib-version"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wqe_qtime{YType::uint64, "wqe-qtime"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>())
{
    rib_base_time->parent = this;

    yang_name = "internalwq"; yang_parent_name = "rib-thread-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::~Internalwq()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::has_data() const
{
    return priority_level.is_set
	|| rib_base_clock.is_set
	|| rib_dequeue_errs.is_set
	|| rib_drop_after.is_set
	|| rib_drop_before.is_set
	|| rib_drop_conn.is_set
	|| rib_empty_batches.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_pkts_sent.is_set
	|| rib_queue_errs.is_set
	|| rib_send_errs.is_set
	|| rib_signals.is_set
	|| rib_table_not_created.is_set
	|| rib_version.is_set
	|| wq_dqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_thread_active.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_queued.is_set
	|| wqe_qtime.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(rib_base_clock.yfilter)
	|| ydk::is_set(rib_dequeue_errs.yfilter)
	|| ydk::is_set(rib_drop_after.yfilter)
	|| ydk::is_set(rib_drop_before.yfilter)
	|| ydk::is_set(rib_drop_conn.yfilter)
	|| ydk::is_set(rib_empty_batches.yfilter)
	|| ydk::is_set(rib_pfx_limit_errs.yfilter)
	|| ydk::is_set(rib_pkts_sent.yfilter)
	|| ydk::is_set(rib_queue_errs.yfilter)
	|| ydk::is_set(rib_send_errs.yfilter)
	|| ydk::is_set(rib_signals.yfilter)
	|| ydk::is_set(rib_table_not_created.yfilter)
	|| ydk::is_set(rib_version.yfilter)
	|| ydk::is_set(wq_dqtime.yfilter)
	|| ydk::is_set(wq_len_cur.yfilter)
	|| ydk::is_set(wq_len_max.yfilter)
	|| ydk::is_set(wq_thread_active.yfilter)
	|| ydk::is_set(wq_total_dequeued.yfilter)
	|| ydk::is_set(wq_total_queued.yfilter)
	|| ydk::is_set(wqe_qtime.yfilter)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalwq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.yfilter)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.yfilter)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.yfilter)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.yfilter)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.yfilter)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.yfilter)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.yfilter)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.yfilter)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.yfilter)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.yfilter)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.yfilter)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.yfilter)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.yfilter)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.yfilter)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.yfilter)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.yfilter)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_thread_active.is_set || is_set(wq_thread_active.yfilter)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.yfilter)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.yfilter)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.yfilter)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time == nullptr)
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>();
        }
        return rib_base_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rib_base_time != nullptr)
    {
        children["rib-base-time"] = rib_base_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
        rib_base_clock.value_namespace = name_space;
        rib_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
        rib_dequeue_errs.value_namespace = name_space;
        rib_dequeue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
        rib_drop_after.value_namespace = name_space;
        rib_drop_after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
        rib_drop_before.value_namespace = name_space;
        rib_drop_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
        rib_drop_conn.value_namespace = name_space;
        rib_drop_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
        rib_empty_batches.value_namespace = name_space;
        rib_empty_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
        rib_pfx_limit_errs.value_namespace = name_space;
        rib_pfx_limit_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
        rib_pkts_sent.value_namespace = name_space;
        rib_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
        rib_queue_errs.value_namespace = name_space;
        rib_queue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
        rib_send_errs.value_namespace = name_space;
        rib_send_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
        rib_signals.value_namespace = name_space;
        rib_signals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
        rib_table_not_created.value_namespace = name_space;
        rib_table_not_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
        rib_version.value_namespace = name_space;
        rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
        wq_dqtime.value_namespace = name_space;
        wq_dqtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
        wq_len_cur.value_namespace = name_space;
        wq_len_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
        wq_len_max.value_namespace = name_space;
        wq_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
        wq_thread_active.value_namespace = name_space;
        wq_thread_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
        wq_total_dequeued.value_namespace = name_space;
        wq_total_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
        wq_total_queued.value_namespace = name_space;
        wq_total_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
        wqe_qtime.value_namespace = name_space;
        wqe_qtime.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock.yfilter = yfilter;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after.yfilter = yfilter;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before.yfilter = yfilter;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn.yfilter = yfilter;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches.yfilter = yfilter;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs.yfilter = yfilter;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs.yfilter = yfilter;
    }
    if(value_path == "rib-signals")
    {
        rib_signals.yfilter = yfilter;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created.yfilter = yfilter;
    }
    if(value_path == "rib-version")
    {
        rib_version.yfilter = yfilter;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime.yfilter = yfilter;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur.yfilter = yfilter;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max.yfilter = yfilter;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active.yfilter = yfilter;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued.yfilter = yfilter;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued.yfilter = yfilter;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-base-time" || name == "priority-level" || name == "rib-base-clock" || name == "rib-dequeue-errs" || name == "rib-drop-after" || name == "rib-drop-before" || name == "rib-drop-conn" || name == "rib-empty-batches" || name == "rib-pfx-limit-errs" || name == "rib-pkts-sent" || name == "rib-queue-errs" || name == "rib-send-errs" || name == "rib-signals" || name == "rib-table-not-created" || name == "rib-version" || name == "wq-dqtime" || name == "wq-len-cur" || name == "wq-len-max" || name == "wq-thread-active" || name == "wq-total-dequeued" || name == "wq-total-queued" || name == "wqe-qtime")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::RibBaseTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "rib-base-time"; yang_parent_name = "internalwq"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::Ribqueue()
    :
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    rib_version{YType::uint32, "rib-version"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wqe_qtime{YType::uint64, "wqe-qtime"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>())
{
    rib_base_time->parent = this;

    yang_name = "ribqueue"; yang_parent_name = "rib-thread-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::~Ribqueue()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::has_data() const
{
    return priority_level.is_set
	|| rib_base_clock.is_set
	|| rib_dequeue_errs.is_set
	|| rib_drop_after.is_set
	|| rib_drop_before.is_set
	|| rib_drop_conn.is_set
	|| rib_empty_batches.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_pkts_sent.is_set
	|| rib_queue_errs.is_set
	|| rib_send_errs.is_set
	|| rib_signals.is_set
	|| rib_table_not_created.is_set
	|| rib_version.is_set
	|| wq_dqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_thread_active.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_queued.is_set
	|| wqe_qtime.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(rib_base_clock.yfilter)
	|| ydk::is_set(rib_dequeue_errs.yfilter)
	|| ydk::is_set(rib_drop_after.yfilter)
	|| ydk::is_set(rib_drop_before.yfilter)
	|| ydk::is_set(rib_drop_conn.yfilter)
	|| ydk::is_set(rib_empty_batches.yfilter)
	|| ydk::is_set(rib_pfx_limit_errs.yfilter)
	|| ydk::is_set(rib_pkts_sent.yfilter)
	|| ydk::is_set(rib_queue_errs.yfilter)
	|| ydk::is_set(rib_send_errs.yfilter)
	|| ydk::is_set(rib_signals.yfilter)
	|| ydk::is_set(rib_table_not_created.yfilter)
	|| ydk::is_set(rib_version.yfilter)
	|| ydk::is_set(wq_dqtime.yfilter)
	|| ydk::is_set(wq_len_cur.yfilter)
	|| ydk::is_set(wq_len_max.yfilter)
	|| ydk::is_set(wq_thread_active.yfilter)
	|| ydk::is_set(wq_total_dequeued.yfilter)
	|| ydk::is_set(wq_total_queued.yfilter)
	|| ydk::is_set(wqe_qtime.yfilter)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribqueue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.yfilter)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.yfilter)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.yfilter)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.yfilter)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.yfilter)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.yfilter)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.yfilter)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.yfilter)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.yfilter)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.yfilter)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.yfilter)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.yfilter)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.yfilter)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.yfilter)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.yfilter)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.yfilter)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_thread_active.is_set || is_set(wq_thread_active.yfilter)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.yfilter)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.yfilter)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.yfilter)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time == nullptr)
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>();
        }
        return rib_base_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rib_base_time != nullptr)
    {
        children["rib-base-time"] = rib_base_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
        rib_base_clock.value_namespace = name_space;
        rib_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
        rib_dequeue_errs.value_namespace = name_space;
        rib_dequeue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
        rib_drop_after.value_namespace = name_space;
        rib_drop_after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
        rib_drop_before.value_namespace = name_space;
        rib_drop_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
        rib_drop_conn.value_namespace = name_space;
        rib_drop_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
        rib_empty_batches.value_namespace = name_space;
        rib_empty_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
        rib_pfx_limit_errs.value_namespace = name_space;
        rib_pfx_limit_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
        rib_pkts_sent.value_namespace = name_space;
        rib_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
        rib_queue_errs.value_namespace = name_space;
        rib_queue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
        rib_send_errs.value_namespace = name_space;
        rib_send_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
        rib_signals.value_namespace = name_space;
        rib_signals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
        rib_table_not_created.value_namespace = name_space;
        rib_table_not_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
        rib_version.value_namespace = name_space;
        rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
        wq_dqtime.value_namespace = name_space;
        wq_dqtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
        wq_len_cur.value_namespace = name_space;
        wq_len_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
        wq_len_max.value_namespace = name_space;
        wq_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
        wq_thread_active.value_namespace = name_space;
        wq_thread_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
        wq_total_dequeued.value_namespace = name_space;
        wq_total_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
        wq_total_queued.value_namespace = name_space;
        wq_total_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
        wqe_qtime.value_namespace = name_space;
        wqe_qtime.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock.yfilter = yfilter;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after.yfilter = yfilter;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before.yfilter = yfilter;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn.yfilter = yfilter;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches.yfilter = yfilter;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs.yfilter = yfilter;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs.yfilter = yfilter;
    }
    if(value_path == "rib-signals")
    {
        rib_signals.yfilter = yfilter;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created.yfilter = yfilter;
    }
    if(value_path == "rib-version")
    {
        rib_version.yfilter = yfilter;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime.yfilter = yfilter;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur.yfilter = yfilter;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max.yfilter = yfilter;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active.yfilter = yfilter;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued.yfilter = yfilter;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued.yfilter = yfilter;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-base-time" || name == "priority-level" || name == "rib-base-clock" || name == "rib-dequeue-errs" || name == "rib-drop-after" || name == "rib-drop-before" || name == "rib-drop-conn" || name == "rib-empty-batches" || name == "rib-pfx-limit-errs" || name == "rib-pkts-sent" || name == "rib-queue-errs" || name == "rib-send-errs" || name == "rib-signals" || name == "rib-table-not-created" || name == "rib-version" || name == "wq-dqtime" || name == "wq-len-cur" || name == "wq-len-max" || name == "wq-thread-active" || name == "wq-total-dequeued" || name == "wq-total-queued" || name == "wqe-qtime")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::RibBaseTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "rib-base-time"; yang_parent_name = "ribqueue"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfStats()
    :
    spf_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader>())
{
    spf_header->parent = this;

    yang_name = "spf-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::~SpfStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::has_data() const
{
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<os_runtime.size(); index++)
    {
        if(os_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<os_sum_runtime.size(); index++)
    {
        if(os_sum_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_data())
            return true;
    }
    return (spf_header !=  nullptr && spf_header->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::has_operation() const
{
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<os_runtime.size(); index++)
    {
        if(os_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<os_sum_runtime.size(); index++)
    {
        if(os_sum_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (spf_header !=  nullptr && spf_header->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os-ex-runtime")
    {
        for(auto const & c : os_ex_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime>();
        c->parent = this;
        os_ex_runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "os-runtime")
    {
        for(auto const & c : os_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime>();
        c->parent = this;
        os_runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "os-sum-runtime")
    {
        for(auto const & c : os_sum_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime>();
        c->parent = this;
        os_sum_runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "runtime")
    {
        for(auto const & c : runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime>();
        c->parent = this;
        runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "spf-header")
    {
        if(spf_header == nullptr)
        {
            spf_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader>();
        }
        return spf_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os_ex_runtime)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : os_runtime)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : os_sum_runtime)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : runtime)
    {
        children[c->get_segment_path()] = c;
    }

    if(spf_header != nullptr)
    {
        children["spf-header"] = spf_header;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os-ex-runtime" || name == "os-runtime" || name == "os-sum-runtime" || name == "runtime" || name == "spf-header")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::OsExRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"},
    sp_dest_count{YType::uint32, "sp-dest-count"}
    	,
    sp_duration(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration>())
	,sp_start_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime>())
{
    sp_duration->parent = this;
    sp_start_time->parent = this;

    yang_name = "os-ex-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::~OsExRuntime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_addr.is_set
	|| sp_dest_count.is_set
	|| (sp_duration !=  nullptr && sp_duration->has_data())
	|| (sp_start_time !=  nullptr && sp_start_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sp_adv_rtr_id.yfilter)
	|| ydk::is_set(sp_dest_addr.yfilter)
	|| ydk::is_set(sp_dest_count.yfilter)
	|| (sp_duration !=  nullptr && sp_duration->has_operation())
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-ex-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.yfilter)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.yfilter)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.yfilter)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sp-duration")
    {
        if(sp_duration == nullptr)
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration>();
        }
        return sp_duration;
    }

    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time == nullptr)
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime>();
        }
        return sp_start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sp_duration != nullptr)
    {
        children["sp-duration"] = sp_duration;
    }

    if(sp_start_time != nullptr)
    {
        children["sp-start-time"] = sp_start_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
        sp_adv_rtr_id.value_namespace = name_space;
        sp_adv_rtr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
        sp_dest_addr.value_namespace = name_space;
        sp_dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
        sp_dest_count.value_namespace = name_space;
        sp_dest_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id.yfilter = yfilter;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr.yfilter = yfilter;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sp-duration" || name == "sp-start-time" || name == "sp-adv-rtr-id" || name == "sp-dest-addr" || name == "sp-dest-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::SpDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "sp-duration"; yang_parent_name = "os-ex-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::SpStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "sp-start-time"; yang_parent_name = "os-ex-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::OsRuntime()
    :
    si_area_id_str{YType::str, "si-area-id-str"},
    si_change_flags{YType::uint16, "si-change-flags"}
    	,
    si_duration(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration>())
	,si_start_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime>())
{
    si_duration->parent = this;
    si_start_time->parent = this;

    yang_name = "os-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::~OsRuntime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::has_data() const
{
    return si_area_id_str.is_set
	|| si_change_flags.is_set
	|| (si_duration !=  nullptr && si_duration->has_data())
	|| (si_start_time !=  nullptr && si_start_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si_area_id_str.yfilter)
	|| ydk::is_set(si_change_flags.yfilter)
	|| (si_duration !=  nullptr && si_duration->has_operation())
	|| (si_start_time !=  nullptr && si_start_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si_area_id_str.is_set || is_set(si_area_id_str.yfilter)) leaf_name_data.push_back(si_area_id_str.get_name_leafdata());
    if (si_change_flags.is_set || is_set(si_change_flags.yfilter)) leaf_name_data.push_back(si_change_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "si-duration")
    {
        if(si_duration == nullptr)
        {
            si_duration = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration>();
        }
        return si_duration;
    }

    if(child_yang_name == "si-start-time")
    {
        if(si_start_time == nullptr)
        {
            si_start_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime>();
        }
        return si_start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(si_duration != nullptr)
    {
        children["si-duration"] = si_duration;
    }

    if(si_start_time != nullptr)
    {
        children["si-start-time"] = si_start_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str = value;
        si_area_id_str.value_namespace = name_space;
        si_area_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags = value;
        si_change_flags.value_namespace = name_space;
        si_change_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str.yfilter = yfilter;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si-duration" || name == "si-start-time" || name == "si-area-id-str" || name == "si-change-flags")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::SiDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "si-duration"; yang_parent_name = "os-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::~SiDuration()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::SiStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "si-start-time"; yang_parent_name = "os-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::~SiStartTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::OsSumRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"},
    sp_dest_count{YType::uint32, "sp-dest-count"}
    	,
    sp_duration(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration>())
	,sp_start_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>())
{
    sp_duration->parent = this;
    sp_start_time->parent = this;

    yang_name = "os-sum-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::~OsSumRuntime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_addr.is_set
	|| sp_dest_count.is_set
	|| (sp_duration !=  nullptr && sp_duration->has_data())
	|| (sp_start_time !=  nullptr && sp_start_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sp_adv_rtr_id.yfilter)
	|| ydk::is_set(sp_dest_addr.yfilter)
	|| ydk::is_set(sp_dest_count.yfilter)
	|| (sp_duration !=  nullptr && sp_duration->has_operation())
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-sum-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.yfilter)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.yfilter)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.yfilter)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sp-duration")
    {
        if(sp_duration == nullptr)
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration>();
        }
        return sp_duration;
    }

    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time == nullptr)
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>();
        }
        return sp_start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sp_duration != nullptr)
    {
        children["sp-duration"] = sp_duration;
    }

    if(sp_start_time != nullptr)
    {
        children["sp-start-time"] = sp_start_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
        sp_adv_rtr_id.value_namespace = name_space;
        sp_adv_rtr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
        sp_dest_addr.value_namespace = name_space;
        sp_dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
        sp_dest_count.value_namespace = name_space;
        sp_dest_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id.yfilter = yfilter;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr.yfilter = yfilter;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sp-duration" || name == "sp-start-time" || name == "sp-adv-rtr-id" || name == "sp-dest-addr" || name == "sp-dest-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::SpDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "sp-duration"; yang_parent_name = "os-sum-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::SpStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{

    yang_name = "sp-start-time"; yang_parent_name = "os-sum-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanosecond.yfilter)
	|| ydk::is_set(second.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanosecond" || name == "second")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::Runtime()
    :
    lsa_change_cnt{YType::int16, "lsa-change-cnt"},
    spf_start_time{YType::uint32, "spf-start-time"}
    	,
    gbl_spf_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime>())
{
    gbl_spf_time->parent = this;

    yang_name = "runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::~Runtime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::has_data() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_data())
            return true;
    }
    return lsa_change_cnt.is_set
	|| spf_start_time.is_set
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::has_operation() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_change_cnt.yfilter)
	|| ydk::is_set(spf_start_time.yfilter)
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_change_cnt.is_set || is_set(lsa_change_cnt.yfilter)) leaf_name_data.push_back(lsa_change_cnt.get_name_leafdata());
    if (spf_start_time.is_set || is_set(spf_start_time.yfilter)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-stat")
    {
        for(auto const & c : area_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat>();
        c->parent = this;
        area_stat.push_back(c);
        return c;
    }

    if(child_yang_name == "gbl-spf-time")
    {
        if(gbl_spf_time == nullptr)
        {
            gbl_spf_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime>();
        }
        return gbl_spf_time;
    }

    if(child_yang_name == "lsa-info")
    {
        for(auto const & c : lsa_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo>();
        c->parent = this;
        lsa_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_stat)
    {
        children[c->get_segment_path()] = c;
    }

    if(gbl_spf_time != nullptr)
    {
        children["gbl-spf-time"] = gbl_spf_time;
    }

    for (auto const & c : lsa_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt = value;
        lsa_change_cnt.value_namespace = name_space;
        lsa_change_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
        spf_start_time.value_namespace = name_space;
        spf_start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt.yfilter = yfilter;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-stat" || name == "gbl-spf-time" || name == "lsa-info" || name == "lsa-change-cnt" || name == "spf-start-time")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::AreaStat()
    :
    area_id{YType::uint32, "area-id"}
    	,
    spf_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>())
{
    spf_time->parent = this;

    yang_name = "area-stat"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::~AreaStat()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::has_data() const
{
    for (std::size_t index=0; index<lsa_type_cnt.size(); index++)
    {
        if(lsa_type_cnt[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| (spf_time !=  nullptr && spf_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::has_operation() const
{
    for (std::size_t index=0; index<lsa_type_cnt.size(); index++)
    {
        if(lsa_type_cnt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (spf_time !=  nullptr && spf_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-type-cnt")
    {
        for(auto const & c : lsa_type_cnt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt>();
        c->parent = this;
        lsa_type_cnt.push_back(c);
        return c;
    }

    if(child_yang_name == "spf-time")
    {
        if(spf_time == nullptr)
        {
            spf_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>();
        }
        return spf_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa_type_cnt)
    {
        children[c->get_segment_path()] = c;
    }

    if(spf_time != nullptr)
    {
        children["spf-time"] = spf_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type-cnt" || name == "spf-time" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::LsaTypeCnt()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "lsa-type-cnt"; yang_parent_name = "area-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::~LsaTypeCnt()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-type-cnt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::SpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"}
{

    yang_name = "spf-time"; yang_parent_name = "area-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::~SpfTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_dijkstra.yfilter)
	|| ydk::is_set(spf_ext_prefix.yfilter)
	|| ydk::is_set(spf_ext_prefix_del.yfilter)
	|| ydk::is_set(spf_inter_prefix.yfilter)
	|| ydk::is_set(spf_inter_prefix_del.yfilter)
	|| ydk::is_set(spf_intra_prefix.yfilter)
	|| ydk::is_set(spf_intra_prefix_del.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.yfilter)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.yfilter)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.yfilter)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.yfilter)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.yfilter)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.yfilter)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.yfilter)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
        spf_dijkstra.value_namespace = name_space;
        spf_dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
        spf_ext_prefix.value_namespace = name_space;
        spf_ext_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
        spf_ext_prefix_del.value_namespace = name_space;
        spf_ext_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
        spf_inter_prefix.value_namespace = name_space;
        spf_inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
        spf_inter_prefix_del.value_namespace = name_space;
        spf_inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
        spf_intra_prefix.value_namespace = name_space;
        spf_intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
        spf_intra_prefix_del.value_namespace = name_space;
        spf_intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-dijkstra" || name == "spf-ext-prefix" || name == "spf-ext-prefix-del" || name == "spf-inter-prefix" || name == "spf-inter-prefix-del" || name == "spf-intra-prefix" || name == "spf-intra-prefix-del")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::GblSpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"}
{

    yang_name = "gbl-spf-time"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::~GblSpfTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_dijkstra.yfilter)
	|| ydk::is_set(spf_ext_prefix.yfilter)
	|| ydk::is_set(spf_ext_prefix_del.yfilter)
	|| ydk::is_set(spf_inter_prefix.yfilter)
	|| ydk::is_set(spf_inter_prefix_del.yfilter)
	|| ydk::is_set(spf_intra_prefix.yfilter)
	|| ydk::is_set(spf_intra_prefix_del.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gbl-spf-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.yfilter)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.yfilter)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.yfilter)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.yfilter)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.yfilter)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.yfilter)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.yfilter)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
        spf_dijkstra.value_namespace = name_space;
        spf_dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
        spf_ext_prefix.value_namespace = name_space;
        spf_ext_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
        spf_ext_prefix_del.value_namespace = name_space;
        spf_ext_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
        spf_inter_prefix.value_namespace = name_space;
        spf_inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
        spf_inter_prefix_del.value_namespace = name_space;
        spf_inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
        spf_intra_prefix.value_namespace = name_space;
        spf_intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
        spf_intra_prefix_del.value_namespace = name_space;
        spf_intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-dijkstra" || name == "spf-ext-prefix" || name == "spf-ext-prefix-del" || name == "spf-inter-prefix" || name == "spf-inter-prefix-del" || name == "spf-intra-prefix" || name == "spf-intra-prefix-del")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::LsaInfo()
    :
    adv_rtr{YType::str, "adv-rtr"},
    area_id{YType::uint32, "area-id"},
    flush{YType::boolean, "flush"},
    id{YType::str, "id"},
    type{YType::uint8, "type"}
{

    yang_name = "lsa-info"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::~LsaInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::has_data() const
{
    return adv_rtr.is_set
	|| area_id.is_set
	|| flush.is_set
	|| id.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_rtr.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(flush.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_rtr.is_set || is_set(adv_rtr.yfilter)) leaf_name_data.push_back(adv_rtr.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-rtr")
    {
        adv_rtr = value;
        adv_rtr.value_namespace = name_space;
        adv_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-rtr")
    {
        adv_rtr.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-rtr" || name == "area-id" || name == "flush" || name == "id" || name == "type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::SpfHeader()
    :
    router_id{YType::str, "router-id"},
    spf_count{YType::uint32, "spf-count"}
{

    yang_name = "spf-header"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::~SpfHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::has_data() const
{
    for (std::size_t index=0; index<area_summ.size(); index++)
    {
        if(area_summ[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| spf_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::has_operation() const
{
    for (std::size_t index=0; index<area_summ.size(); index++)
    {
        if(area_summ[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(spf_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.yfilter)) leaf_name_data.push_back(spf_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-summ")
    {
        for(auto const & c : area_summ)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm>();
        c->parent = this;
        area_summ.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_summ)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
        spf_count.value_namespace = name_space;
        spf_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "spf-count")
    {
        spf_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-summ" || name == "router-id" || name == "spf-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::AreaSumm()
    :
    area_id{YType::uint32, "area-id"},
    spf_count{YType::uint32, "spf-count"}
{

    yang_name = "area-summ"; yang_parent_name = "spf-header"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::~AreaSumm()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_data() const
{
    return area_id.is_set
	|| spf_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(spf_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-summ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.yfilter)) leaf_name_data.push_back(spf_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
        spf_count.value_namespace = name_space;
        spf_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "spf-count")
    {
        spf_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "spf-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::TeStats()
    :
    adj_changes{YType::uint32, "adj-changes"},
    adj_gets{YType::uint32, "adj-gets"},
    control_batch_reads{YType::uint32, "control-batch-reads"},
    control_batch_writes{YType::uint32, "control-batch-writes"},
    control_disconnects{YType::uint32, "control-disconnects"},
    data_trans_completes{YType::uint32, "data-trans-completes"},
    fragment_announces{YType::uint32, "fragment-announces"},
    fragment_deletes{YType::uint32, "fragment-deletes"},
    link_batch_reads{YType::uint32, "link-batch-reads"},
    link_batch_writes{YType::uint32, "link-batch-writes"},
    link_floods{YType::uint32, "link-floods"},
    link_fragment_floods{YType::uint32, "link-fragment-floods"},
    lsp_gets{YType::uint32, "lsp-gets"},
    pce_br_lkup_num_dests{YType::uint32, "pce-br-lkup-num-dests"},
    pce_br_lookup{YType::uint32, "pce-br-lookup"},
    pce_br_resp_fails{YType::uint32, "pce-br-resp-fails"},
    pce_flood{YType::uint32, "pce-flood"},
    pce_get{YType::uint32, "pce-get"},
    pce_listen{YType::uint32, "pce-listen"},
    pce_node_announce_batches{YType::uint32, "pce-node-announce-batches"},
    pce_node_delete_batches{YType::uint32, "pce-node-delete-batches"},
    pce_node_send_fails{YType::uint32, "pce-node-send-fails"},
    pce_num_node_announce{YType::uint32, "pce-num-node-announce"},
    pce_num_node_delete{YType::uint32, "pce-num-node-delete"},
    pce_stoplisten{YType::uint32, "pce-stoplisten"},
    sr_num_area_enabled{YType::uint32, "sr-num-area-enabled"},
    te_connected{YType::boolean, "te-connected"},
    te_disconnects{YType::uint32, "te-disconnects"},
    te_sr_idt_sent{YType::boolean, "te-sr-idt-sent"},
    te_sr_path_reg_idt_recvd{YType::boolean, "te-sr-path-reg-idt-recvd"},
    total_tunnels{YType::uint32, "total-tunnels"},
    tunnel_announces{YType::uint32, "tunnel-announces"}
{

    yang_name = "te-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::~TeStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::has_data() const
{
    return adj_changes.is_set
	|| adj_gets.is_set
	|| control_batch_reads.is_set
	|| control_batch_writes.is_set
	|| control_disconnects.is_set
	|| data_trans_completes.is_set
	|| fragment_announces.is_set
	|| fragment_deletes.is_set
	|| link_batch_reads.is_set
	|| link_batch_writes.is_set
	|| link_floods.is_set
	|| link_fragment_floods.is_set
	|| lsp_gets.is_set
	|| pce_br_lkup_num_dests.is_set
	|| pce_br_lookup.is_set
	|| pce_br_resp_fails.is_set
	|| pce_flood.is_set
	|| pce_get.is_set
	|| pce_listen.is_set
	|| pce_node_announce_batches.is_set
	|| pce_node_delete_batches.is_set
	|| pce_node_send_fails.is_set
	|| pce_num_node_announce.is_set
	|| pce_num_node_delete.is_set
	|| pce_stoplisten.is_set
	|| sr_num_area_enabled.is_set
	|| te_connected.is_set
	|| te_disconnects.is_set
	|| te_sr_idt_sent.is_set
	|| te_sr_path_reg_idt_recvd.is_set
	|| total_tunnels.is_set
	|| tunnel_announces.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adj_changes.yfilter)
	|| ydk::is_set(adj_gets.yfilter)
	|| ydk::is_set(control_batch_reads.yfilter)
	|| ydk::is_set(control_batch_writes.yfilter)
	|| ydk::is_set(control_disconnects.yfilter)
	|| ydk::is_set(data_trans_completes.yfilter)
	|| ydk::is_set(fragment_announces.yfilter)
	|| ydk::is_set(fragment_deletes.yfilter)
	|| ydk::is_set(link_batch_reads.yfilter)
	|| ydk::is_set(link_batch_writes.yfilter)
	|| ydk::is_set(link_floods.yfilter)
	|| ydk::is_set(link_fragment_floods.yfilter)
	|| ydk::is_set(lsp_gets.yfilter)
	|| ydk::is_set(pce_br_lkup_num_dests.yfilter)
	|| ydk::is_set(pce_br_lookup.yfilter)
	|| ydk::is_set(pce_br_resp_fails.yfilter)
	|| ydk::is_set(pce_flood.yfilter)
	|| ydk::is_set(pce_get.yfilter)
	|| ydk::is_set(pce_listen.yfilter)
	|| ydk::is_set(pce_node_announce_batches.yfilter)
	|| ydk::is_set(pce_node_delete_batches.yfilter)
	|| ydk::is_set(pce_node_send_fails.yfilter)
	|| ydk::is_set(pce_num_node_announce.yfilter)
	|| ydk::is_set(pce_num_node_delete.yfilter)
	|| ydk::is_set(pce_stoplisten.yfilter)
	|| ydk::is_set(sr_num_area_enabled.yfilter)
	|| ydk::is_set(te_connected.yfilter)
	|| ydk::is_set(te_disconnects.yfilter)
	|| ydk::is_set(te_sr_idt_sent.yfilter)
	|| ydk::is_set(te_sr_path_reg_idt_recvd.yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(tunnel_announces.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_changes.is_set || is_set(adj_changes.yfilter)) leaf_name_data.push_back(adj_changes.get_name_leafdata());
    if (adj_gets.is_set || is_set(adj_gets.yfilter)) leaf_name_data.push_back(adj_gets.get_name_leafdata());
    if (control_batch_reads.is_set || is_set(control_batch_reads.yfilter)) leaf_name_data.push_back(control_batch_reads.get_name_leafdata());
    if (control_batch_writes.is_set || is_set(control_batch_writes.yfilter)) leaf_name_data.push_back(control_batch_writes.get_name_leafdata());
    if (control_disconnects.is_set || is_set(control_disconnects.yfilter)) leaf_name_data.push_back(control_disconnects.get_name_leafdata());
    if (data_trans_completes.is_set || is_set(data_trans_completes.yfilter)) leaf_name_data.push_back(data_trans_completes.get_name_leafdata());
    if (fragment_announces.is_set || is_set(fragment_announces.yfilter)) leaf_name_data.push_back(fragment_announces.get_name_leafdata());
    if (fragment_deletes.is_set || is_set(fragment_deletes.yfilter)) leaf_name_data.push_back(fragment_deletes.get_name_leafdata());
    if (link_batch_reads.is_set || is_set(link_batch_reads.yfilter)) leaf_name_data.push_back(link_batch_reads.get_name_leafdata());
    if (link_batch_writes.is_set || is_set(link_batch_writes.yfilter)) leaf_name_data.push_back(link_batch_writes.get_name_leafdata());
    if (link_floods.is_set || is_set(link_floods.yfilter)) leaf_name_data.push_back(link_floods.get_name_leafdata());
    if (link_fragment_floods.is_set || is_set(link_fragment_floods.yfilter)) leaf_name_data.push_back(link_fragment_floods.get_name_leafdata());
    if (lsp_gets.is_set || is_set(lsp_gets.yfilter)) leaf_name_data.push_back(lsp_gets.get_name_leafdata());
    if (pce_br_lkup_num_dests.is_set || is_set(pce_br_lkup_num_dests.yfilter)) leaf_name_data.push_back(pce_br_lkup_num_dests.get_name_leafdata());
    if (pce_br_lookup.is_set || is_set(pce_br_lookup.yfilter)) leaf_name_data.push_back(pce_br_lookup.get_name_leafdata());
    if (pce_br_resp_fails.is_set || is_set(pce_br_resp_fails.yfilter)) leaf_name_data.push_back(pce_br_resp_fails.get_name_leafdata());
    if (pce_flood.is_set || is_set(pce_flood.yfilter)) leaf_name_data.push_back(pce_flood.get_name_leafdata());
    if (pce_get.is_set || is_set(pce_get.yfilter)) leaf_name_data.push_back(pce_get.get_name_leafdata());
    if (pce_listen.is_set || is_set(pce_listen.yfilter)) leaf_name_data.push_back(pce_listen.get_name_leafdata());
    if (pce_node_announce_batches.is_set || is_set(pce_node_announce_batches.yfilter)) leaf_name_data.push_back(pce_node_announce_batches.get_name_leafdata());
    if (pce_node_delete_batches.is_set || is_set(pce_node_delete_batches.yfilter)) leaf_name_data.push_back(pce_node_delete_batches.get_name_leafdata());
    if (pce_node_send_fails.is_set || is_set(pce_node_send_fails.yfilter)) leaf_name_data.push_back(pce_node_send_fails.get_name_leafdata());
    if (pce_num_node_announce.is_set || is_set(pce_num_node_announce.yfilter)) leaf_name_data.push_back(pce_num_node_announce.get_name_leafdata());
    if (pce_num_node_delete.is_set || is_set(pce_num_node_delete.yfilter)) leaf_name_data.push_back(pce_num_node_delete.get_name_leafdata());
    if (pce_stoplisten.is_set || is_set(pce_stoplisten.yfilter)) leaf_name_data.push_back(pce_stoplisten.get_name_leafdata());
    if (sr_num_area_enabled.is_set || is_set(sr_num_area_enabled.yfilter)) leaf_name_data.push_back(sr_num_area_enabled.get_name_leafdata());
    if (te_connected.is_set || is_set(te_connected.yfilter)) leaf_name_data.push_back(te_connected.get_name_leafdata());
    if (te_disconnects.is_set || is_set(te_disconnects.yfilter)) leaf_name_data.push_back(te_disconnects.get_name_leafdata());
    if (te_sr_idt_sent.is_set || is_set(te_sr_idt_sent.yfilter)) leaf_name_data.push_back(te_sr_idt_sent.get_name_leafdata());
    if (te_sr_path_reg_idt_recvd.is_set || is_set(te_sr_path_reg_idt_recvd.yfilter)) leaf_name_data.push_back(te_sr_path_reg_idt_recvd.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (tunnel_announces.is_set || is_set(tunnel_announces.yfilter)) leaf_name_data.push_back(tunnel_announces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adj-changes")
    {
        adj_changes = value;
        adj_changes.value_namespace = name_space;
        adj_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-gets")
    {
        adj_gets = value;
        adj_gets.value_namespace = name_space;
        adj_gets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads = value;
        control_batch_reads.value_namespace = name_space;
        control_batch_reads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes = value;
        control_batch_writes.value_namespace = name_space;
        control_batch_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects = value;
        control_disconnects.value_namespace = name_space;
        control_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes = value;
        data_trans_completes.value_namespace = name_space;
        data_trans_completes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces = value;
        fragment_announces.value_namespace = name_space;
        fragment_announces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes = value;
        fragment_deletes.value_namespace = name_space;
        fragment_deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads = value;
        link_batch_reads.value_namespace = name_space;
        link_batch_reads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes = value;
        link_batch_writes.value_namespace = name_space;
        link_batch_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-floods")
    {
        link_floods = value;
        link_floods.value_namespace = name_space;
        link_floods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods = value;
        link_fragment_floods.value_namespace = name_space;
        link_fragment_floods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets = value;
        lsp_gets.value_namespace = name_space;
        lsp_gets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests = value;
        pce_br_lkup_num_dests.value_namespace = name_space;
        pce_br_lkup_num_dests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup = value;
        pce_br_lookup.value_namespace = name_space;
        pce_br_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails = value;
        pce_br_resp_fails.value_namespace = name_space;
        pce_br_resp_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-flood")
    {
        pce_flood = value;
        pce_flood.value_namespace = name_space;
        pce_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-get")
    {
        pce_get = value;
        pce_get.value_namespace = name_space;
        pce_get.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-listen")
    {
        pce_listen = value;
        pce_listen.value_namespace = name_space;
        pce_listen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches = value;
        pce_node_announce_batches.value_namespace = name_space;
        pce_node_announce_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches = value;
        pce_node_delete_batches.value_namespace = name_space;
        pce_node_delete_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails = value;
        pce_node_send_fails.value_namespace = name_space;
        pce_node_send_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce = value;
        pce_num_node_announce.value_namespace = name_space;
        pce_num_node_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete = value;
        pce_num_node_delete.value_namespace = name_space;
        pce_num_node_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten = value;
        pce_stoplisten.value_namespace = name_space;
        pce_stoplisten.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled = value;
        sr_num_area_enabled.value_namespace = name_space;
        sr_num_area_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-connected")
    {
        te_connected = value;
        te_connected.value_namespace = name_space;
        te_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects = value;
        te_disconnects.value_namespace = name_space;
        te_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent = value;
        te_sr_idt_sent.value_namespace = name_space;
        te_sr_idt_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd = value;
        te_sr_path_reg_idt_recvd.value_namespace = name_space;
        te_sr_path_reg_idt_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces = value;
        tunnel_announces.value_namespace = name_space;
        tunnel_announces.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adj-changes")
    {
        adj_changes.yfilter = yfilter;
    }
    if(value_path == "adj-gets")
    {
        adj_gets.yfilter = yfilter;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads.yfilter = yfilter;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes.yfilter = yfilter;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects.yfilter = yfilter;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes.yfilter = yfilter;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces.yfilter = yfilter;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes.yfilter = yfilter;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads.yfilter = yfilter;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes.yfilter = yfilter;
    }
    if(value_path == "link-floods")
    {
        link_floods.yfilter = yfilter;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods.yfilter = yfilter;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets.yfilter = yfilter;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests.yfilter = yfilter;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup.yfilter = yfilter;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails.yfilter = yfilter;
    }
    if(value_path == "pce-flood")
    {
        pce_flood.yfilter = yfilter;
    }
    if(value_path == "pce-get")
    {
        pce_get.yfilter = yfilter;
    }
    if(value_path == "pce-listen")
    {
        pce_listen.yfilter = yfilter;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches.yfilter = yfilter;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches.yfilter = yfilter;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails.yfilter = yfilter;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce.yfilter = yfilter;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete.yfilter = yfilter;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten.yfilter = yfilter;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled.yfilter = yfilter;
    }
    if(value_path == "te-connected")
    {
        te_connected.yfilter = yfilter;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects.yfilter = yfilter;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent.yfilter = yfilter;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-changes" || name == "adj-gets" || name == "control-batch-reads" || name == "control-batch-writes" || name == "control-disconnects" || name == "data-trans-completes" || name == "fragment-announces" || name == "fragment-deletes" || name == "link-batch-reads" || name == "link-batch-writes" || name == "link-floods" || name == "link-fragment-floods" || name == "lsp-gets" || name == "pce-br-lkup-num-dests" || name == "pce-br-lookup" || name == "pce-br-resp-fails" || name == "pce-flood" || name == "pce-get" || name == "pce-listen" || name == "pce-node-announce-batches" || name == "pce-node-delete-batches" || name == "pce-node-send-fails" || name == "pce-num-node-announce" || name == "pce-num-node-delete" || name == "pce-stoplisten" || name == "sr-num-area-enabled" || name == "te-connected" || name == "te-disconnects" || name == "te-sr-idt-sent" || name == "te-sr-path-reg-idt-recvd" || name == "total-tunnels" || name == "tunnel-announces")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixes()
{

    yang_name = "summary-prefixes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    netmask{YType::str, "netmask"},
    prefix{YType::str, "prefix"},
    summary_mask{YType::str, "summary-mask"},
    summary_metric{YType::uint32, "summary-metric"},
    summary_metric_type{YType::enumeration, "summary-metric-type"},
    summary_prefix{YType::str, "summary-prefix"},
    summary_tag{YType::uint32, "summary-tag"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return netmask.is_set
	|| prefix.is_set
	|| summary_mask.is_set
	|| summary_metric.is_set
	|| summary_metric_type.is_set
	|| summary_prefix.is_set
	|| summary_tag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(summary_mask.yfilter)
	|| ydk::is_set(summary_metric.yfilter)
	|| ydk::is_set(summary_metric_type.yfilter)
	|| ydk::is_set(summary_prefix.yfilter)
	|| ydk::is_set(summary_tag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.yfilter)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (summary_metric.is_set || is_set(summary_metric.yfilter)) leaf_name_data.push_back(summary_metric.get_name_leafdata());
    if (summary_metric_type.is_set || is_set(summary_metric_type.yfilter)) leaf_name_data.push_back(summary_metric_type.get_name_leafdata());
    if (summary_prefix.is_set || is_set(summary_prefix.yfilter)) leaf_name_data.push_back(summary_prefix.get_name_leafdata());
    if (summary_tag.is_set || is_set(summary_tag.yfilter)) leaf_name_data.push_back(summary_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
        summary_mask.value_namespace = name_space;
        summary_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-metric")
    {
        summary_metric = value;
        summary_metric.value_namespace = name_space;
        summary_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-metric-type")
    {
        summary_metric_type = value;
        summary_metric_type.value_namespace = name_space;
        summary_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-prefix")
    {
        summary_prefix = value;
        summary_prefix.value_namespace = name_space;
        summary_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-tag")
    {
        summary_tag = value;
        summary_tag.value_namespace = name_space;
        summary_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "summary-mask")
    {
        summary_mask.yfilter = yfilter;
    }
    if(value_path == "summary-metric")
    {
        summary_metric.yfilter = yfilter;
    }
    if(value_path == "summary-metric-type")
    {
        summary_metric_type.yfilter = yfilter;
    }
    if(value_path == "summary-prefix")
    {
        summary_prefix.yfilter = yfilter;
    }
    if(value_path == "summary-tag")
    {
        summary_tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask" || name == "prefix" || name == "summary-mask" || name == "summary-metric" || name == "summary-metric-type" || name == "summary-prefix" || name == "summary-tag")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Srms()
    :
    policy(std::make_shared<Ospf::Processes::Process::Srms::Policy>())
{
    policy->parent = this;

    yang_name = "srms"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::~Srms()
{
}

bool Ospf::Processes::Process::Srms::has_data() const
{
    return (policy !=  nullptr && policy->has_data());
}

bool Ospf::Processes::Process::Srms::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Ospf::Processes::Process::Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Ospf::Processes::Process::Srms::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
}

void Ospf::Processes::Process::Srms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4>())
{
    policy_ipv4->parent = this;

    yang_name = "policy"; yang_parent_name = "srms"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::~Policy()
{
}

bool Ospf::Processes::Process::Srms::Policy::has_data() const
{
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 == nullptr)
        {
            policy_ipv4 = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4>();
        }
        return policy_ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_ipv4 != nullptr)
    {
        children["policy-ipv4"] = policy_ipv4;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_active(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
	,policy_ipv4_backup(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
{
    policy_ipv4_active->parent = this;
    policy_ipv4_backup->parent = this;

    yang_name = "policy-ipv4"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_data() const
{
    return (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active == nullptr)
        {
            policy_ipv4_active = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
        }
        return policy_ipv4_active;
    }

    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup == nullptr)
        {
            policy_ipv4_backup = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
        }
        return policy_ipv4_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_ipv4_active != nullptr)
    {
        children["policy-ipv4-active"] = policy_ipv4_active;
    }

    if(policy_ipv4_backup != nullptr)
    {
        children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4-active" || name == "policy-ipv4-backup")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
{

    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
{

    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::~Vrfs()
{
}

bool Ospf::Processes::Process::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    adjacency_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation>())
	,area_statistics(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics>())
	,areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas>())
	,border_routers(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::BorderRouters>())
	,database(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database>())
	,fast_reroute(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute>())
	,flood_list_table(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FloodListTable>())
	,interface_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation>())
	,interface_vrf_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation>())
	,mpls_te(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe>())
	,ospf_summary(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::OspfSummary>())
	,process_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation>())
	,route_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation>())
	,statistics(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics>())
	,summary_prefixes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes>())
{
    adjacency_information->parent = this;
    area_statistics->parent = this;
    areas->parent = this;
    border_routers->parent = this;
    database->parent = this;
    fast_reroute->parent = this;
    flood_list_table->parent = this;
    interface_information->parent = this;
    interface_vrf_information->parent = this;
    mpls_te->parent = this;
    ospf_summary->parent = this;
    process_information->parent = this;
    route_information->parent = this;
    statistics->parent = this;
    summary_prefixes->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::~Vrf()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (adjacency_information !=  nullptr && adjacency_information->has_data())
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (areas !=  nullptr && areas->has_data())
	|| (border_routers !=  nullptr && border_routers->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (flood_list_table !=  nullptr && flood_list_table->has_data())
	|| (interface_information !=  nullptr && interface_information->has_data())
	|| (interface_vrf_information !=  nullptr && interface_vrf_information->has_data())
	|| (mpls_te !=  nullptr && mpls_te->has_data())
	|| (ospf_summary !=  nullptr && ospf_summary->has_data())
	|| (process_information !=  nullptr && process_information->has_data())
	|| (route_information !=  nullptr && route_information->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (adjacency_information !=  nullptr && adjacency_information->has_operation())
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (areas !=  nullptr && areas->has_operation())
	|| (border_routers !=  nullptr && border_routers->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (flood_list_table !=  nullptr && flood_list_table->has_operation())
	|| (interface_information !=  nullptr && interface_information->has_operation())
	|| (interface_vrf_information !=  nullptr && interface_vrf_information->has_operation())
	|| (mpls_te !=  nullptr && mpls_te->has_operation())
	|| (ospf_summary !=  nullptr && ospf_summary->has_operation())
	|| (process_information !=  nullptr && process_information->has_operation())
	|| (route_information !=  nullptr && route_information->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-information")
    {
        if(adjacency_information == nullptr)
        {
            adjacency_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation>();
        }
        return adjacency_information;
    }

    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics>();
        }
        return area_statistics;
    }

    if(child_yang_name == "areas")
    {
        if(areas == nullptr)
        {
            areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas>();
        }
        return areas;
    }

    if(child_yang_name == "border-routers")
    {
        if(border_routers == nullptr)
        {
            border_routers = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::BorderRouters>();
        }
        return border_routers;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database>();
        }
        return database;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "flood-list-table")
    {
        if(flood_list_table == nullptr)
        {
            flood_list_table = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FloodListTable>();
        }
        return flood_list_table;
    }

    if(child_yang_name == "interface-information")
    {
        if(interface_information == nullptr)
        {
            interface_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation>();
        }
        return interface_information;
    }

    if(child_yang_name == "interface-vrf-information")
    {
        if(interface_vrf_information == nullptr)
        {
            interface_vrf_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation>();
        }
        return interface_vrf_information;
    }

    if(child_yang_name == "mpls-te")
    {
        if(mpls_te == nullptr)
        {
            mpls_te = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::MplsTe>();
        }
        return mpls_te;
    }

    if(child_yang_name == "ospf-summary")
    {
        if(ospf_summary == nullptr)
        {
            ospf_summary = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::OspfSummary>();
        }
        return ospf_summary;
    }

    if(child_yang_name == "process-information")
    {
        if(process_information == nullptr)
        {
            process_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation>();
        }
        return process_information;
    }

    if(child_yang_name == "route-information")
    {
        if(route_information == nullptr)
        {
            route_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation>();
        }
        return route_information;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes == nullptr)
        {
            summary_prefixes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes>();
        }
        return summary_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_information != nullptr)
    {
        children["adjacency-information"] = adjacency_information;
    }

    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    if(areas != nullptr)
    {
        children["areas"] = areas;
    }

    if(border_routers != nullptr)
    {
        children["border-routers"] = border_routers;
    }

    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(flood_list_table != nullptr)
    {
        children["flood-list-table"] = flood_list_table;
    }

    if(interface_information != nullptr)
    {
        children["interface-information"] = interface_information;
    }

    if(interface_vrf_information != nullptr)
    {
        children["interface-vrf-information"] = interface_vrf_information;
    }

    if(mpls_te != nullptr)
    {
        children["mpls-te"] = mpls_te;
    }

    if(ospf_summary != nullptr)
    {
        children["ospf-summary"] = ospf_summary;
    }

    if(process_information != nullptr)
    {
        children["process-information"] = process_information;
    }

    if(route_information != nullptr)
    {
        children["route-information"] = route_information;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary_prefixes != nullptr)
    {
        children["summary-prefixes"] = summary_prefixes;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-information" || name == "area-statistics" || name == "areas" || name == "border-routers" || name == "database" || name == "fast-reroute" || name == "flood-list-table" || name == "interface-information" || name == "interface-vrf-information" || name == "mpls-te" || name == "ospf-summary" || name == "process-information" || name == "route-information" || name == "statistics" || name == "summary-prefixes" || name == "vrf-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::AdjacencyInformation()
    :
    neighbor_details(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors>())
	,requests(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions>())
{
    neighbor_details->parent = this;
    neighbors->parent = this;
    requests->parent = this;
    retransmissions->parent = this;

    yang_name = "adjacency-information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::~AdjacencyInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::has_data() const
{
    return (neighbor_details !=  nullptr && neighbor_details->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::has_operation() const
{
    return is_set(yfilter)
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details == nullptr)
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails>();
        }
        return neighbor_details;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions>();
        }
        return retransmissions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_details != nullptr)
    {
        children["neighbor-details"] = neighbor_details;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(requests != nullptr)
    {
        children["requests"] = requests;
    }

    if(retransmissions != nullptr)
    {
        children["retransmissions"] = retransmissions;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-details" || name == "neighbors" || name == "requests" || name == "retransmissions")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetails()
{

    yang_name = "neighbor-details"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        for(auto const & c : neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborDetail()
    :
    adjacency_sid_label{YType::uint32, "adjacency-sid-label"},
    adjacency_sid_protected{YType::boolean, "adjacency-sid-protected"},
    adjacency_sid_unprotected_label{YType::uint32, "adjacency-sid-unprotected-label"},
    interface_name{YType::str, "interface-name"},
    interface_type{YType::enumeration, "interface-type"},
    last_oob_time{YType::uint32, "last-oob-time"},
    lfa_interface{YType::str, "lfa-interface"},
    lfa_neighbor_id{YType::str, "lfa-neighbor-id"},
    lfa_neighbor_revision{YType::uint32, "lfa-neighbor-revision"},
    lfa_next_hop{YType::str, "lfa-next-hop"},
    neighbor_ack_list_count{YType::uint32, "neighbor-ack-list-count"},
    neighbor_ack_list_high_watermark{YType::uint32, "neighbor-ack-list-high-watermark"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_area_id{YType::str, "neighbor-area-id"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_filter{YType::boolean, "neighbor-filter"},
    neighbor_interface_id{YType::uint16, "neighbor-interface-id"},
    neighbor_lls_option{YType::uint32, "neighbor-lls-option"},
    neighbor_option{YType::uint8, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_change_count{YType::uint16, "state-change-count"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
	,neighbor_summary(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>())
{
    neighbor_bfd_information->parent = this;
    neighbor_retransmission_information->parent = this;
    neighbor_summary->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_data() const
{
    return adjacency_sid_label.is_set
	|| adjacency_sid_protected.is_set
	|| adjacency_sid_unprotected_label.is_set
	|| interface_name.is_set
	|| interface_type.is_set
	|| last_oob_time.is_set
	|| lfa_interface.is_set
	|| lfa_neighbor_id.is_set
	|| lfa_neighbor_revision.is_set
	|| lfa_next_hop.is_set
	|| neighbor_ack_list_count.is_set
	|| neighbor_ack_list_high_watermark.is_set
	|| neighbor_address.is_set
	|| neighbor_area_id.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| neighbor_cost.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_filter.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_lls_option.is_set
	|| neighbor_option.is_set
	|| next_poll_interval.is_set
	|| nsf_router_state.is_set
	|| oob_resynchronization.is_set
	|| pending_events.is_set
	|| poll_interval.is_set
	|| state_change_count.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_data())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_label.yfilter)
	|| ydk::is_set(adjacency_sid_protected.yfilter)
	|| ydk::is_set(adjacency_sid_unprotected_label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(last_oob_time.yfilter)
	|| ydk::is_set(lfa_interface.yfilter)
	|| ydk::is_set(lfa_neighbor_id.yfilter)
	|| ydk::is_set(lfa_neighbor_revision.yfilter)
	|| ydk::is_set(lfa_next_hop.yfilter)
	|| ydk::is_set(neighbor_ack_list_count.yfilter)
	|| ydk::is_set(neighbor_ack_list_high_watermark.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_area_id.yfilter)
	|| ydk::is_set(neighbor_backup_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_cost.yfilter)
	|| ydk::is_set(neighbor_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_lls_option.yfilter)
	|| ydk::is_set(neighbor_option.yfilter)
	|| ydk::is_set(next_poll_interval.yfilter)
	|| ydk::is_set(nsf_router_state.yfilter)
	|| ydk::is_set(oob_resynchronization.yfilter)
	|| ydk::is_set(pending_events.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.yfilter)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.yfilter)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.yfilter)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.yfilter)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.yfilter)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.yfilter)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.yfilter)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.yfilter)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.yfilter)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.yfilter)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.yfilter)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.yfilter)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.yfilter)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.yfilter)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.yfilter)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.yfilter)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.yfilter)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information == nullptr)
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
        }
        return neighbor_retransmission_information;
    }

    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>();
        }
        return neighbor_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    if(neighbor_retransmission_information != nullptr)
    {
        children["neighbor-retransmission-information"] = neighbor_retransmission_information;
    }

    if(neighbor_summary != nullptr)
    {
        children["neighbor-summary"] = neighbor_summary;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
        adjacency_sid_label.value_namespace = name_space;
        adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
        adjacency_sid_protected.value_namespace = name_space;
        adjacency_sid_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
        adjacency_sid_unprotected_label.value_namespace = name_space;
        adjacency_sid_unprotected_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
        last_oob_time.value_namespace = name_space;
        last_oob_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
        lfa_interface.value_namespace = name_space;
        lfa_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
        lfa_neighbor_id.value_namespace = name_space;
        lfa_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
        lfa_neighbor_revision.value_namespace = name_space;
        lfa_neighbor_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
        lfa_next_hop.value_namespace = name_space;
        lfa_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
        neighbor_ack_list_count.value_namespace = name_space;
        neighbor_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
        neighbor_ack_list_high_watermark.value_namespace = name_space;
        neighbor_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
        neighbor_area_id.value_namespace = name_space;
        neighbor_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
        neighbor_backup_designated_router_address.value_namespace = name_space;
        neighbor_backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
        neighbor_cost.value_namespace = name_space;
        neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
        neighbor_designated_router_address.value_namespace = name_space;
        neighbor_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
        neighbor_lls_option.value_namespace = name_space;
        neighbor_lls_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
        neighbor_option.value_namespace = name_space;
        neighbor_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
        next_poll_interval.value_namespace = name_space;
        next_poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
        nsf_router_state.value_namespace = name_space;
        nsf_router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
        oob_resynchronization.value_namespace = name_space;
        oob_resynchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
        pending_events.value_namespace = name_space;
        pending_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time.yfilter = yfilter;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision.yfilter = yfilter;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option.yfilter = yfilter;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option.yfilter = yfilter;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval.yfilter = yfilter;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state.yfilter = yfilter;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization.yfilter = yfilter;
    }
    if(value_path == "pending-events")
    {
        pending_events.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "neighbor-retransmission-information" || name == "neighbor-summary" || name == "adjacency-sid-label" || name == "adjacency-sid-protected" || name == "adjacency-sid-unprotected-label" || name == "interface-name" || name == "interface-type" || name == "last-oob-time" || name == "lfa-interface" || name == "lfa-neighbor-id" || name == "lfa-neighbor-revision" || name == "lfa-next-hop" || name == "neighbor-ack-list-count" || name == "neighbor-ack-list-high-watermark" || name == "neighbor-address" || name == "neighbor-area-id" || name == "neighbor-backup-designated-router-address" || name == "neighbor-cost" || name == "neighbor-designated-router-address" || name == "neighbor-filter" || name == "neighbor-interface-id" || name == "neighbor-lls-option" || name == "neighbor-option" || name == "next-poll-interval" || name == "nsf-router-state" || name == "oob-resynchronization" || name == "pending-events" || name == "poll-interval" || name == "state-change-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::NeighborRetransmissionInformation()
    :
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"}
{

    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
{
    return area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| area_flooding_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_first_flood_information.yfilter)
	|| ydk::is_set(area_first_flood_information_index.yfilter)
	|| ydk::is_set(area_flooding_index.yfilter)
	|| ydk::is_set(area_next_flood_information.yfilter)
	|| ydk::is_set(area_next_flood_information_index.yfilter)
	|| ydk::is_set(as_first_flood_information.yfilter)
	|| ydk::is_set(as_first_flood_information_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(as_next_flood_information.yfilter)
	|| ydk::is_set(as_next_flood_information_index.yfilter)
	|| ydk::is_set(dbd_retransmission_count.yfilter)
	|| ydk::is_set(dbd_retransmission_total_count.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(neighbor_retransmission_count.yfilter)
	|| ydk::is_set(number_of_retransmissions.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood_information.is_set || is_set(area_first_flood_information.yfilter)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.yfilter)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.yfilter)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.yfilter)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.yfilter)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.yfilter)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.yfilter)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.yfilter)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.yfilter)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.yfilter)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.yfilter)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
        area_first_flood_information.value_namespace = name_space;
        area_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
        area_first_flood_information_index.value_namespace = name_space;
        area_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
        area_flooding_index.value_namespace = name_space;
        area_flooding_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
        area_next_flood_information.value_namespace = name_space;
        area_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
        area_next_flood_information_index.value_namespace = name_space;
        area_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
        as_first_flood_information.value_namespace = name_space;
        as_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
        as_first_flood_information_index.value_namespace = name_space;
        as_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
        as_next_flood_information.value_namespace = name_space;
        as_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
        as_next_flood_information_index.value_namespace = name_space;
        as_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
        dbd_retransmission_count.value_namespace = name_space;
        dbd_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
        dbd_retransmission_total_count.value_namespace = name_space;
        dbd_retransmission_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
        neighbor_retransmission_count.value_namespace = name_space;
        neighbor_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
        number_of_retransmissions.value_namespace = name_space;
        number_of_retransmissions.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-first-flood-information" || name == "area-first-flood-information-index" || name == "area-flooding-index" || name == "area-next-flood-information" || name == "area-next-flood-information-index" || name == "as-first-flood-information" || name == "as-first-flood-information-index" || name == "as-flood-index" || name == "as-next-flood-information" || name == "as-next-flood-information-index" || name == "dbd-retransmission-count" || name == "dbd-retransmission-total-count" || name == "last-retransmission-length" || name == "last-retransmission-time" || name == "lsa-retransmission-timer" || name == "maximum-retransmission-length" || name == "maximum-retransmission-time" || name == "neighbor-retransmission-count" || name == "number-of-retransmissions")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
{
    return dr_bdr_state.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "dr-bdr-state" || name == "neighbor-address-xr" || name == "neighbor-dead-timer" || name == "neighbor-dr-priority" || name == "neighbor-id" || name == "neighbor-interface-name" || name == "neighbor-madj-interface" || name == "neighbor-state" || name == "neighbor-up-time")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::Neighbor()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::has_data() const
{
    return dr_bdr_state.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "dr-bdr-state" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-address-xr" || name == "neighbor-dead-timer" || name == "neighbor-dr-priority" || name == "neighbor-id" || name == "neighbor-interface-name" || name == "neighbor-madj-interface" || name == "neighbor-state" || name == "neighbor-up-time")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Requests()
{

    yang_name = "requests"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::~Requests()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"}
{

    yang_name = "request"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| request_interface_name.is_set
	|| request_neighbor_address.is_set
	|| request_neighbor_id.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(request_interface_name.yfilter)
	|| ydk::is_set(request_neighbor_address.yfilter)
	|| ydk::is_set(request_neighbor_id.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.yfilter)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.yfilter)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.yfilter)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
        request_interface_name.value_namespace = name_space;
        request_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
        request_neighbor_address.value_namespace = name_space;
        request_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
        request_neighbor_id.value_namespace = name_space;
        request_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "interface-name" || name == "neighbor-address" || name == "request-interface-name" || name == "request-neighbor-address" || name == "request-neighbor-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::Request_()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "request"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmissions()
{

    yang_name = "retransmissions"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::~Retransmissions()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission")
    {
        for(auto const & c : retransmission)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission>();
        c->parent = this;
        retransmission.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : retransmission)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_count{YType::uint32, "retransmission-count"},
    retransmission_interface_name{YType::str, "retransmission-interface-name"},
    retransmission_neighbor_id{YType::str, "retransmission-neighbor-id"},
    retransmission_neighbor_ip_address{YType::str, "retransmission-neighbor-ip-address"},
    retransmission_timer{YType::uint32, "retransmission-timer"}
{

    yang_name = "retransmission"; yang_parent_name = "retransmissions"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::~Retransmission()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::has_data() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| retransmission_count.is_set
	|| retransmission_interface_name.is_set
	|| retransmission_neighbor_id.is_set
	|| retransmission_neighbor_ip_address.is_set
	|| retransmission_timer.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::has_operation() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(retransmission_count.yfilter)
	|| ydk::is_set(retransmission_interface_name.yfilter)
	|| ydk::is_set(retransmission_neighbor_id.yfilter)
	|| ydk::is_set(retransmission_neighbor_ip_address.yfilter)
	|| ydk::is_set(retransmission_timer.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.yfilter)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());
    if (retransmission_interface_name.is_set || is_set(retransmission_interface_name.yfilter)) leaf_name_data.push_back(retransmission_interface_name.get_name_leafdata());
    if (retransmission_neighbor_id.is_set || is_set(retransmission_neighbor_id.yfilter)) leaf_name_data.push_back(retransmission_neighbor_id.get_name_leafdata());
    if (retransmission_neighbor_ip_address.is_set || is_set(retransmission_neighbor_ip_address.yfilter)) leaf_name_data.push_back(retransmission_neighbor_ip_address.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.yfilter)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission-area-db")
    {
        for(auto const & c : retransmission_area_db)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmission-asdb")
    {
        for(auto const & c : retransmission_asdb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : retransmission_area_db)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : retransmission_asdb)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
        retransmission_count.value_namespace = name_space;
        retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name = value;
        retransmission_interface_name.value_namespace = name_space;
        retransmission_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id = value;
        retransmission_neighbor_id.value_namespace = name_space;
        retransmission_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address = value;
        retransmission_neighbor_ip_address.value_namespace = name_space;
        retransmission_neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
        retransmission_timer.value_namespace = name_space;
        retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count.yfilter = yfilter;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission-area-db" || name == "retransmission-asdb" || name == "interface-name" || name == "neighbor-address" || name == "retransmission-count" || name == "retransmission-interface-name" || name == "retransmission-neighbor-id" || name == "retransmission-neighbor-ip-address" || name == "retransmission-timer")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;

    yang_name = "area-statistics"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_data() const
{
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entries")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_stats_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    madj_intf{YType::boolean, "madj-intf"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "area-id" || name == "area-id-str" || name == "madj-intf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Areas()
{

    yang_name = "areas"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::~Areas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Area()
    :
    area_id{YType::int32, "area-id"}
    	,
    area_statistics(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics>())
	,flood_list_area_table(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable>())
	,interface_briefs(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs>())
	,interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces>())
	,neighbor_details(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors>())
	,requests(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions>())
{
    area_statistics->parent = this;
    flood_list_area_table->parent = this;
    interface_briefs->parent = this;
    interfaces->parent = this;
    neighbor_details->parent = this;
    neighbors->parent = this;
    requests->parent = this;
    retransmissions->parent = this;

    yang_name = "area"; yang_parent_name = "areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::~Area()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::has_data() const
{
    return area_id.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (flood_list_area_table !=  nullptr && flood_list_area_table->has_data())
	|| (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (neighbor_details !=  nullptr && neighbor_details->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (flood_list_area_table !=  nullptr && flood_list_area_table->has_operation())
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics>();
        }
        return area_statistics;
    }

    if(child_yang_name == "flood-list-area-table")
    {
        if(flood_list_area_table == nullptr)
        {
            flood_list_area_table = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable>();
        }
        return flood_list_area_table;
    }

    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details == nullptr)
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails>();
        }
        return neighbor_details;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions>();
        }
        return retransmissions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    if(flood_list_area_table != nullptr)
    {
        children["flood-list-area-table"] = flood_list_area_table;
    }

    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(neighbor_details != nullptr)
    {
        children["neighbor-details"] = neighbor_details;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(requests != nullptr)
    {
        children["requests"] = requests;
    }

    if(retransmissions != nullptr)
    {
        children["retransmissions"] = retransmissions;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "flood-list-area-table" || name == "interface-briefs" || name == "interfaces" || name == "neighbor-details" || name == "neighbors" || name == "requests" || name == "retransmissions" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;

    yang_name = "area-statistics"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::has_data() const
{
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entries")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_stats_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    madj_intf{YType::boolean, "madj-intf"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
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

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
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

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_stat)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "area-id" || name == "area-id-str" || name == "madj-intf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::FloodListAreaTable()
{

    yang_name = "flood-list-area-table"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::~FloodListAreaTable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::has_data() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::has_operation() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-area-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        for(auto const & c : flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood>();
        c->parent = this;
        flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flood)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    flood_interface_name{YType::str, "flood-interface-name"},
    flood_lsa_count{YType::uint32, "flood-lsa-count"},
    flood_pacing_timer{YType::uint32, "flood-pacing-timer"}
{

    yang_name = "flood"; yang_parent_name = "flood-list-area-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::~Flood()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::has_data() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| flood_interface_name.is_set
	|| flood_lsa_count.is_set
	|| flood_pacing_timer.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::has_operation() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(flood_interface_name.yfilter)
	|| ydk::is_set(flood_lsa_count.yfilter)
	|| ydk::is_set(flood_pacing_timer.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flood_interface_name.is_set || is_set(flood_interface_name.yfilter)) leaf_name_data.push_back(flood_interface_name.get_name_leafdata());
    if (flood_lsa_count.is_set || is_set(flood_lsa_count.yfilter)) leaf_name_data.push_back(flood_lsa_count.get_name_leafdata());
    if (flood_pacing_timer.is_set || is_set(flood_pacing_timer.yfilter)) leaf_name_data.push_back(flood_pacing_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-flood")
    {
        for(auto const & c : area_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood>();
        c->parent = this;
        area_flood.push_back(c);
        return c;
    }

    if(child_yang_name == "as-flood")
    {
        for(auto const & c : as_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood>();
        c->parent = this;
        as_flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_flood)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : as_flood)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name = value;
        flood_interface_name.value_namespace = name_space;
        flood_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count = value;
        flood_lsa_count.value_namespace = name_space;
        flood_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer = value;
        flood_pacing_timer.value_namespace = name_space;
        flood_pacing_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count.yfilter = yfilter;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-flood" || name == "as-flood" || name == "interface-name" || name == "flood-interface-name" || name == "flood-lsa-count" || name == "flood-pacing-timer")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::AreaFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "area-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::AsFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "as-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBriefs()
{

    yang_name = "interface-briefs"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        for(auto const & c : interface_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_address{YType::str, "interface-address"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-brief"; yang_parent_name = "interface-briefs"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_address.is_set
	|| interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_link_cost.is_set
	|| interface_madj_count.is_set
	|| interface_mask.is_set
	|| interface_name_xr.is_set
	|| interface_neighbor_count.is_set
	|| interfaceis_madj.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-madj")
    {
        for(auto const & c : interface_madj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-madj" || name == "interface-name" || name == "interface-address" || name == "interface-adj-neighbor-count" || name == "interface-area" || name == "interface-fast-detect-hold-down" || name == "interface-link-cost" || name == "interface-madj-count" || name == "interface-mask" || name == "interface-name-xr" || name == "interface-neighbor-count" || name == "interfaceis-madj" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-adj-neighbor-count" || name == "interface-area" || name == "interface-link-cost" || name == "interface-neighbor-count" || name == "madj-area-id" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::~Interfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    backup_designated_router{YType::boolean, "backup-designated-router"},
    backup_designated_router_address{YType::str, "backup-designated-router-address"},
    backup_designated_router_id{YType::str, "backup-designated-router-id"},
    cfg_cost_fallback{YType::boolean, "cfg-cost-fallback"},
    configured_demand_circuit{YType::boolean, "configured-demand-circuit"},
    configured_ldp_sync{YType::boolean, "configured-ldp-sync"},
    configured_ldp_sync_igp_shortcuts{YType::boolean, "configured-ldp-sync-igp-shortcuts"},
    cost_fallback_active{YType::boolean, "cost-fallback-active"},
    dead_interval{YType::uint32, "dead-interval"},
    designated_router{YType::boolean, "designated-router"},
    designated_router_address{YType::str, "designated-router-address"},
    designated_router_id{YType::str, "designated-router-id"},
    fast_detect_hold_down_time{YType::uint32, "fast-detect-hold-down-time"},
    fast_detect_hold_down_time_remaining{YType::uint32, "fast-detect-hold-down-time-remaining"},
    fast_reroute_topology_independent_lfa{YType::boolean, "fast-reroute-topology-independent-lfa"},
    fast_reroute_type{YType::enumeration, "fast-reroute-type"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_interval_ms{YType::uint32, "hello-interval-ms"},
    interface_ack_list_count{YType::uint32, "interface-ack-list-count"},
    interface_ack_list_high_watermark{YType::uint32, "interface-ack-list-high-watermark"},
    interface_address{YType::str, "interface-address"},
    interface_area{YType::str, "interface-area"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    interface_bkp_labels{YType::uint8, "interface-bkp-labels"},
    interface_cost_fallback{YType::uint16, "interface-cost-fallback"},
    interface_dc_bitless_lsa_count{YType::uint32, "interface-dc-bitless-lsa-count"},
    interface_demand_circuit{YType::boolean, "interface-demand-circuit"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_forw{YType::boolean, "interface-forw"},
    interface_last_nsf{YType::uint32, "interface-last-nsf"},
    interface_ldp_sync{YType::boolean, "interface-ldp-sync"},
    interface_line_state{YType::boolean, "interface-line-state"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_lsa_filter{YType::boolean, "interface-lsa-filter"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_nsf{YType::boolean, "interface-nsf"},
    interface_nsf_enabled{YType::boolean, "interface-nsf-enabled"},
    interface_pri_labels{YType::uint8, "interface-pri-labels"},
    interface_priority{YType::uint8, "interface-priority"},
    interface_retransmission_interrval{YType::uint32, "interface-retransmission-interrval"},
    interface_router_id{YType::str, "interface-router-id"},
    interface_sid{YType::uint32, "interface-sid"},
    interface_sid_n_flag_clear{YType::boolean, "interface-sid-n-flag-clear"},
    interface_sid_php_off{YType::boolean, "interface-sid-php-off"},
    interface_srte_labels{YType::uint8, "interface-srte-labels"},
    interface_state{YType::enumeration, "interface-state"},
    interface_strict_spf_sid{YType::uint32, "interface-strict-spf-sid"},
    interface_strict_spf_sid_n_flag_clear{YType::boolean, "interface-strict-spf-sid-n-flag-clear"},
    interface_strict_spf_sid_php_off{YType::boolean, "interface-strict-spf-sid-php-off"},
    interface_tunnel_flags{YType::uint32, "interface-tunnel-flags"},
    interface_unnum{YType::str, "interface-unnum"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    ip_mtu{YType::uint16, "ip-mtu"},
    is_loopback_stub_network{YType::boolean, "is-loopback-stub-network"},
    maximum_packet_size{YType::uint16, "maximum-packet-size"},
    network_lsa_flush_timer{YType::uint32, "network-lsa-flush-timer"},
    network_type{YType::enumeration, "network-type"},
    next_hello_time{YType::uint32, "next-hello-time"},
    next_hello_time_ms{YType::uint32, "next-hello-time-ms"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    passive_interface{YType::boolean, "passive-interface"},
    prefix_suppress_primary_addresses{YType::boolean, "prefix-suppress-primary-addresses"},
    prefix_suppress_secondary_addresses{YType::boolean, "prefix-suppress-secondary-addresses"},
    registered_for_link_down_fast_detection{YType::boolean, "registered-for-link-down-fast-detection"},
    transmission_delay{YType::uint16, "transmission-delay"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    ttl_security_hop_count{YType::uint32, "ttl-security-hop-count"},
    wait_interval{YType::uint32, "wait-interval"}
    	,
    active_interface(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface>())
	,interface_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation>())
{
    active_interface->parent = this;
    interface_bfd_information->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::~Interface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| backup_designated_router.is_set
	|| backup_designated_router_address.is_set
	|| backup_designated_router_id.is_set
	|| cfg_cost_fallback.is_set
	|| configured_demand_circuit.is_set
	|| configured_ldp_sync.is_set
	|| configured_ldp_sync_igp_shortcuts.is_set
	|| cost_fallback_active.is_set
	|| dead_interval.is_set
	|| designated_router.is_set
	|| designated_router_address.is_set
	|| designated_router_id.is_set
	|| fast_detect_hold_down_time.is_set
	|| fast_detect_hold_down_time_remaining.is_set
	|| fast_reroute_topology_independent_lfa.is_set
	|| fast_reroute_type.is_set
	|| hello_interval.is_set
	|| hello_interval_ms.is_set
	|| interface_ack_list_count.is_set
	|| interface_ack_list_high_watermark.is_set
	|| interface_address.is_set
	|| interface_area.is_set
	|| interface_bandwidth.is_set
	|| interface_bkp_labels.is_set
	|| interface_cost_fallback.is_set
	|| interface_dc_bitless_lsa_count.is_set
	|| interface_demand_circuit.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_forw.is_set
	|| interface_last_nsf.is_set
	|| interface_ldp_sync.is_set
	|| interface_line_state.is_set
	|| interface_link_cost.is_set
	|| interface_lsa_filter.is_set
	|| interface_madj_count.is_set
	|| interface_mask.is_set
	|| interface_name_xr.is_set
	|| interface_nsf.is_set
	|| interface_nsf_enabled.is_set
	|| interface_pri_labels.is_set
	|| interface_priority.is_set
	|| interface_retransmission_interrval.is_set
	|| interface_router_id.is_set
	|| interface_sid.is_set
	|| interface_sid_n_flag_clear.is_set
	|| interface_sid_php_off.is_set
	|| interface_srte_labels.is_set
	|| interface_state.is_set
	|| interface_strict_spf_sid.is_set
	|| interface_strict_spf_sid_n_flag_clear.is_set
	|| interface_strict_spf_sid_php_off.is_set
	|| interface_tunnel_flags.is_set
	|| interface_unnum.is_set
	|| interfaceis_madj.is_set
	|| ip_mtu.is_set
	|| is_loopback_stub_network.is_set
	|| maximum_packet_size.is_set
	|| network_lsa_flush_timer.is_set
	|| network_type.is_set
	|| next_hello_time.is_set
	|| next_hello_time_ms.is_set
	|| ospf_interface_state.is_set
	|| passive_interface.is_set
	|| prefix_suppress_primary_addresses.is_set
	|| prefix_suppress_secondary_addresses.is_set
	|| registered_for_link_down_fast_detection.is_set
	|| transmission_delay.is_set
	|| ttl_security_enabled.is_set
	|| ttl_security_hop_count.is_set
	|| wait_interval.is_set
	|| (active_interface !=  nullptr && active_interface->has_data())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip_sec_addr.size(); index++)
    {
        if(ip_sec_addr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_designated_router.yfilter)
	|| ydk::is_set(backup_designated_router_address.yfilter)
	|| ydk::is_set(backup_designated_router_id.yfilter)
	|| ydk::is_set(cfg_cost_fallback.yfilter)
	|| ydk::is_set(configured_demand_circuit.yfilter)
	|| ydk::is_set(configured_ldp_sync.yfilter)
	|| ydk::is_set(configured_ldp_sync_igp_shortcuts.yfilter)
	|| ydk::is_set(cost_fallback_active.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(designated_router.yfilter)
	|| ydk::is_set(designated_router_address.yfilter)
	|| ydk::is_set(designated_router_id.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time.yfilter)
	|| ydk::is_set(fast_detect_hold_down_time_remaining.yfilter)
	|| ydk::is_set(fast_reroute_topology_independent_lfa.yfilter)
	|| ydk::is_set(fast_reroute_type.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_interval_ms.yfilter)
	|| ydk::is_set(interface_ack_list_count.yfilter)
	|| ydk::is_set(interface_ack_list_high_watermark.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_bandwidth.yfilter)
	|| ydk::is_set(interface_bkp_labels.yfilter)
	|| ydk::is_set(interface_cost_fallback.yfilter)
	|| ydk::is_set(interface_dc_bitless_lsa_count.yfilter)
	|| ydk::is_set(interface_demand_circuit.yfilter)
	|| ydk::is_set(interface_fast_detect_hold_down.yfilter)
	|| ydk::is_set(interface_forw.yfilter)
	|| ydk::is_set(interface_last_nsf.yfilter)
	|| ydk::is_set(interface_ldp_sync.yfilter)
	|| ydk::is_set(interface_line_state.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_lsa_filter.yfilter)
	|| ydk::is_set(interface_madj_count.yfilter)
	|| ydk::is_set(interface_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_nsf.yfilter)
	|| ydk::is_set(interface_nsf_enabled.yfilter)
	|| ydk::is_set(interface_pri_labels.yfilter)
	|| ydk::is_set(interface_priority.yfilter)
	|| ydk::is_set(interface_retransmission_interrval.yfilter)
	|| ydk::is_set(interface_router_id.yfilter)
	|| ydk::is_set(interface_sid.yfilter)
	|| ydk::is_set(interface_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_sid_php_off.yfilter)
	|| ydk::is_set(interface_srte_labels.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(interface_strict_spf_sid.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_n_flag_clear.yfilter)
	|| ydk::is_set(interface_strict_spf_sid_php_off.yfilter)
	|| ydk::is_set(interface_tunnel_flags.yfilter)
	|| ydk::is_set(interface_unnum.yfilter)
	|| ydk::is_set(interfaceis_madj.yfilter)
	|| ydk::is_set(ip_mtu.yfilter)
	|| ydk::is_set(is_loopback_stub_network.yfilter)
	|| ydk::is_set(maximum_packet_size.yfilter)
	|| ydk::is_set(network_lsa_flush_timer.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(next_hello_time.yfilter)
	|| ydk::is_set(next_hello_time_ms.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(prefix_suppress_primary_addresses.yfilter)
	|| ydk::is_set(prefix_suppress_secondary_addresses.yfilter)
	|| ydk::is_set(registered_for_link_down_fast_detection.yfilter)
	|| ydk::is_set(transmission_delay.yfilter)
	|| ydk::is_set(ttl_security_enabled.yfilter)
	|| ydk::is_set(ttl_security_hop_count.yfilter)
	|| ydk::is_set(wait_interval.yfilter)
	|| (active_interface !=  nullptr && active_interface->has_operation())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_designated_router.is_set || is_set(backup_designated_router.yfilter)) leaf_name_data.push_back(backup_designated_router.get_name_leafdata());
    if (backup_designated_router_address.is_set || is_set(backup_designated_router_address.yfilter)) leaf_name_data.push_back(backup_designated_router_address.get_name_leafdata());
    if (backup_designated_router_id.is_set || is_set(backup_designated_router_id.yfilter)) leaf_name_data.push_back(backup_designated_router_id.get_name_leafdata());
    if (cfg_cost_fallback.is_set || is_set(cfg_cost_fallback.yfilter)) leaf_name_data.push_back(cfg_cost_fallback.get_name_leafdata());
    if (configured_demand_circuit.is_set || is_set(configured_demand_circuit.yfilter)) leaf_name_data.push_back(configured_demand_circuit.get_name_leafdata());
    if (configured_ldp_sync.is_set || is_set(configured_ldp_sync.yfilter)) leaf_name_data.push_back(configured_ldp_sync.get_name_leafdata());
    if (configured_ldp_sync_igp_shortcuts.is_set || is_set(configured_ldp_sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(configured_ldp_sync_igp_shortcuts.get_name_leafdata());
    if (cost_fallback_active.is_set || is_set(cost_fallback_active.yfilter)) leaf_name_data.push_back(cost_fallback_active.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (designated_router.is_set || is_set(designated_router.yfilter)) leaf_name_data.push_back(designated_router.get_name_leafdata());
    if (designated_router_address.is_set || is_set(designated_router_address.yfilter)) leaf_name_data.push_back(designated_router_address.get_name_leafdata());
    if (designated_router_id.is_set || is_set(designated_router_id.yfilter)) leaf_name_data.push_back(designated_router_id.get_name_leafdata());
    if (fast_detect_hold_down_time.is_set || is_set(fast_detect_hold_down_time.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time.get_name_leafdata());
    if (fast_detect_hold_down_time_remaining.is_set || is_set(fast_detect_hold_down_time_remaining.yfilter)) leaf_name_data.push_back(fast_detect_hold_down_time_remaining.get_name_leafdata());
    if (fast_reroute_topology_independent_lfa.is_set || is_set(fast_reroute_topology_independent_lfa.yfilter)) leaf_name_data.push_back(fast_reroute_topology_independent_lfa.get_name_leafdata());
    if (fast_reroute_type.is_set || is_set(fast_reroute_type.yfilter)) leaf_name_data.push_back(fast_reroute_type.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_interval_ms.is_set || is_set(hello_interval_ms.yfilter)) leaf_name_data.push_back(hello_interval_ms.get_name_leafdata());
    if (interface_ack_list_count.is_set || is_set(interface_ack_list_count.yfilter)) leaf_name_data.push_back(interface_ack_list_count.get_name_leafdata());
    if (interface_ack_list_high_watermark.is_set || is_set(interface_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(interface_ack_list_high_watermark.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.yfilter)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (interface_bkp_labels.is_set || is_set(interface_bkp_labels.yfilter)) leaf_name_data.push_back(interface_bkp_labels.get_name_leafdata());
    if (interface_cost_fallback.is_set || is_set(interface_cost_fallback.yfilter)) leaf_name_data.push_back(interface_cost_fallback.get_name_leafdata());
    if (interface_dc_bitless_lsa_count.is_set || is_set(interface_dc_bitless_lsa_count.yfilter)) leaf_name_data.push_back(interface_dc_bitless_lsa_count.get_name_leafdata());
    if (interface_demand_circuit.is_set || is_set(interface_demand_circuit.yfilter)) leaf_name_data.push_back(interface_demand_circuit.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.yfilter)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_forw.is_set || is_set(interface_forw.yfilter)) leaf_name_data.push_back(interface_forw.get_name_leafdata());
    if (interface_last_nsf.is_set || is_set(interface_last_nsf.yfilter)) leaf_name_data.push_back(interface_last_nsf.get_name_leafdata());
    if (interface_ldp_sync.is_set || is_set(interface_ldp_sync.yfilter)) leaf_name_data.push_back(interface_ldp_sync.get_name_leafdata());
    if (interface_line_state.is_set || is_set(interface_line_state.yfilter)) leaf_name_data.push_back(interface_line_state.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_lsa_filter.is_set || is_set(interface_lsa_filter.yfilter)) leaf_name_data.push_back(interface_lsa_filter.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.yfilter)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.yfilter)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_nsf.is_set || is_set(interface_nsf.yfilter)) leaf_name_data.push_back(interface_nsf.get_name_leafdata());
    if (interface_nsf_enabled.is_set || is_set(interface_nsf_enabled.yfilter)) leaf_name_data.push_back(interface_nsf_enabled.get_name_leafdata());
    if (interface_pri_labels.is_set || is_set(interface_pri_labels.yfilter)) leaf_name_data.push_back(interface_pri_labels.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.yfilter)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (interface_retransmission_interrval.is_set || is_set(interface_retransmission_interrval.yfilter)) leaf_name_data.push_back(interface_retransmission_interrval.get_name_leafdata());
    if (interface_router_id.is_set || is_set(interface_router_id.yfilter)) leaf_name_data.push_back(interface_router_id.get_name_leafdata());
    if (interface_sid.is_set || is_set(interface_sid.yfilter)) leaf_name_data.push_back(interface_sid.get_name_leafdata());
    if (interface_sid_n_flag_clear.is_set || is_set(interface_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_sid_n_flag_clear.get_name_leafdata());
    if (interface_sid_php_off.is_set || is_set(interface_sid_php_off.yfilter)) leaf_name_data.push_back(interface_sid_php_off.get_name_leafdata());
    if (interface_srte_labels.is_set || is_set(interface_srte_labels.yfilter)) leaf_name_data.push_back(interface_srte_labels.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (interface_strict_spf_sid.is_set || is_set(interface_strict_spf_sid.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid.get_name_leafdata());
    if (interface_strict_spf_sid_n_flag_clear.is_set || is_set(interface_strict_spf_sid_n_flag_clear.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_n_flag_clear.get_name_leafdata());
    if (interface_strict_spf_sid_php_off.is_set || is_set(interface_strict_spf_sid_php_off.yfilter)) leaf_name_data.push_back(interface_strict_spf_sid_php_off.get_name_leafdata());
    if (interface_tunnel_flags.is_set || is_set(interface_tunnel_flags.yfilter)) leaf_name_data.push_back(interface_tunnel_flags.get_name_leafdata());
    if (interface_unnum.is_set || is_set(interface_unnum.yfilter)) leaf_name_data.push_back(interface_unnum.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.yfilter)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ip_mtu.is_set || is_set(ip_mtu.yfilter)) leaf_name_data.push_back(ip_mtu.get_name_leafdata());
    if (is_loopback_stub_network.is_set || is_set(is_loopback_stub_network.yfilter)) leaf_name_data.push_back(is_loopback_stub_network.get_name_leafdata());
    if (maximum_packet_size.is_set || is_set(maximum_packet_size.yfilter)) leaf_name_data.push_back(maximum_packet_size.get_name_leafdata());
    if (network_lsa_flush_timer.is_set || is_set(network_lsa_flush_timer.yfilter)) leaf_name_data.push_back(network_lsa_flush_timer.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (next_hello_time.is_set || is_set(next_hello_time.yfilter)) leaf_name_data.push_back(next_hello_time.get_name_leafdata());
    if (next_hello_time_ms.is_set || is_set(next_hello_time_ms.yfilter)) leaf_name_data.push_back(next_hello_time_ms.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (prefix_suppress_primary_addresses.is_set || is_set(prefix_suppress_primary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_primary_addresses.get_name_leafdata());
    if (prefix_suppress_secondary_addresses.is_set || is_set(prefix_suppress_secondary_addresses.yfilter)) leaf_name_data.push_back(prefix_suppress_secondary_addresses.get_name_leafdata());
    if (registered_for_link_down_fast_detection.is_set || is_set(registered_for_link_down_fast_detection.yfilter)) leaf_name_data.push_back(registered_for_link_down_fast_detection.get_name_leafdata());
    if (transmission_delay.is_set || is_set(transmission_delay.yfilter)) leaf_name_data.push_back(transmission_delay.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.yfilter)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (ttl_security_hop_count.is_set || is_set(ttl_security_hop_count.yfilter)) leaf_name_data.push_back(ttl_security_hop_count.get_name_leafdata());
    if (wait_interval.is_set || is_set(wait_interval.yfilter)) leaf_name_data.push_back(wait_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-interface")
    {
        if(active_interface == nullptr)
        {
            active_interface = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface>();
        }
        return active_interface;
    }

    if(child_yang_name == "interface-bfd-information")
    {
        if(interface_bfd_information == nullptr)
        {
            interface_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation>();
        }
        return interface_bfd_information;
    }

    if(child_yang_name == "interface-madj")
    {
        for(auto const & c : interface_madj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-neighbor")
    {
        for(auto const & c : interface_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor>();
        c->parent = this;
        interface_neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "ip-sec-addr")
    {
        for(auto const & c : ip_sec_addr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr>();
        c->parent = this;
        ip_sec_addr.push_back(c);
        return c;
    }

    if(child_yang_name == "ipfrr-tiebreakers")
    {
        for(auto const & c : ipfrr_tiebreakers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers>();
        c->parent = this;
        ipfrr_tiebreakers.push_back(c);
        return c;
    }

    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_interface != nullptr)
    {
        children["active-interface"] = active_interface;
    }

    if(interface_bfd_information != nullptr)
    {
        children["interface-bfd-information"] = interface_bfd_information;
    }

    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ip_sec_addr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipfrr_tiebreakers)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router = value;
        backup_designated_router.value_namespace = name_space;
        backup_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address = value;
        backup_designated_router_address.value_namespace = name_space;
        backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id = value;
        backup_designated_router_id.value_namespace = name_space;
        backup_designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback = value;
        cfg_cost_fallback.value_namespace = name_space;
        cfg_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit = value;
        configured_demand_circuit.value_namespace = name_space;
        configured_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync = value;
        configured_ldp_sync.value_namespace = name_space;
        configured_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts = value;
        configured_ldp_sync_igp_shortcuts.value_namespace = name_space;
        configured_ldp_sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active = value;
        cost_fallback_active.value_namespace = name_space;
        cost_fallback_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router")
    {
        designated_router = value;
        designated_router.value_namespace = name_space;
        designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address = value;
        designated_router_address.value_namespace = name_space;
        designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id = value;
        designated_router_id.value_namespace = name_space;
        designated_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time = value;
        fast_detect_hold_down_time.value_namespace = name_space;
        fast_detect_hold_down_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining = value;
        fast_detect_hold_down_time_remaining.value_namespace = name_space;
        fast_detect_hold_down_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa = value;
        fast_reroute_topology_independent_lfa.value_namespace = name_space;
        fast_reroute_topology_independent_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type = value;
        fast_reroute_type.value_namespace = name_space;
        fast_reroute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms = value;
        hello_interval_ms.value_namespace = name_space;
        hello_interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count = value;
        interface_ack_list_count.value_namespace = name_space;
        interface_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark = value;
        interface_ack_list_high_watermark.value_namespace = name_space;
        interface_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
        interface_bandwidth.value_namespace = name_space;
        interface_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels = value;
        interface_bkp_labels.value_namespace = name_space;
        interface_bkp_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback = value;
        interface_cost_fallback.value_namespace = name_space;
        interface_cost_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count = value;
        interface_dc_bitless_lsa_count.value_namespace = name_space;
        interface_dc_bitless_lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit = value;
        interface_demand_circuit.value_namespace = name_space;
        interface_demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
        interface_fast_detect_hold_down.value_namespace = name_space;
        interface_fast_detect_hold_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-forw")
    {
        interface_forw = value;
        interface_forw.value_namespace = name_space;
        interface_forw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf = value;
        interface_last_nsf.value_namespace = name_space;
        interface_last_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync = value;
        interface_ldp_sync.value_namespace = name_space;
        interface_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state = value;
        interface_line_state.value_namespace = name_space;
        interface_line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter = value;
        interface_lsa_filter.value_namespace = name_space;
        interface_lsa_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
        interface_madj_count.value_namespace = name_space;
        interface_madj_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
        interface_mask.value_namespace = name_space;
        interface_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf = value;
        interface_nsf.value_namespace = name_space;
        interface_nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled = value;
        interface_nsf_enabled.value_namespace = name_space;
        interface_nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels = value;
        interface_pri_labels.value_namespace = name_space;
        interface_pri_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
        interface_priority.value_namespace = name_space;
        interface_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval = value;
        interface_retransmission_interrval.value_namespace = name_space;
        interface_retransmission_interrval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id = value;
        interface_router_id.value_namespace = name_space;
        interface_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid")
    {
        interface_sid = value;
        interface_sid.value_namespace = name_space;
        interface_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear = value;
        interface_sid_n_flag_clear.value_namespace = name_space;
        interface_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off = value;
        interface_sid_php_off.value_namespace = name_space;
        interface_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels = value;
        interface_srte_labels.value_namespace = name_space;
        interface_srte_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid = value;
        interface_strict_spf_sid.value_namespace = name_space;
        interface_strict_spf_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear = value;
        interface_strict_spf_sid_n_flag_clear.value_namespace = name_space;
        interface_strict_spf_sid_n_flag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off = value;
        interface_strict_spf_sid_php_off.value_namespace = name_space;
        interface_strict_spf_sid_php_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags = value;
        interface_tunnel_flags.value_namespace = name_space;
        interface_tunnel_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum = value;
        interface_unnum.value_namespace = name_space;
        interface_unnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
        interfaceis_madj.value_namespace = name_space;
        interfaceis_madj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu = value;
        ip_mtu.value_namespace = name_space;
        ip_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network = value;
        is_loopback_stub_network.value_namespace = name_space;
        is_loopback_stub_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size = value;
        maximum_packet_size.value_namespace = name_space;
        maximum_packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer = value;
        network_lsa_flush_timer.value_namespace = name_space;
        network_lsa_flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time = value;
        next_hello_time.value_namespace = name_space;
        next_hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms = value;
        next_hello_time_ms.value_namespace = name_space;
        next_hello_time_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses = value;
        prefix_suppress_primary_addresses.value_namespace = name_space;
        prefix_suppress_primary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses = value;
        prefix_suppress_secondary_addresses.value_namespace = name_space;
        prefix_suppress_secondary_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection = value;
        registered_for_link_down_fast_detection.value_namespace = name_space;
        registered_for_link_down_fast_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay = value;
        transmission_delay.value_namespace = name_space;
        transmission_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
        ttl_security_enabled.value_namespace = name_space;
        ttl_security_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count = value;
        ttl_security_hop_count.value_namespace = name_space;
        ttl_security_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-interval")
    {
        wait_interval = value;
        wait_interval.value_namespace = name_space;
        wait_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id.yfilter = yfilter;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts.yfilter = yfilter;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "designated-router")
    {
        designated_router.yfilter = yfilter;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address.yfilter = yfilter;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time.yfilter = yfilter;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa.yfilter = yfilter;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth.yfilter = yfilter;
    }
    if(value_path == "interface-bkp-labels")
    {
        interface_bkp_labels.yfilter = yfilter;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback.yfilter = yfilter;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count.yfilter = yfilter;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit.yfilter = yfilter;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down.yfilter = yfilter;
    }
    if(value_path == "interface-forw")
    {
        interface_forw.yfilter = yfilter;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf.yfilter = yfilter;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter.yfilter = yfilter;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count.yfilter = yfilter;
    }
    if(value_path == "interface-mask")
    {
        interface_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf.yfilter = yfilter;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "interface-pri-labels")
    {
        interface_pri_labels.yfilter = yfilter;
    }
    if(value_path == "interface-priority")
    {
        interface_priority.yfilter = yfilter;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval.yfilter = yfilter;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-sid")
    {
        interface_sid.yfilter = yfilter;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-srte-labels")
    {
        interface_srte_labels.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear.yfilter = yfilter;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off.yfilter = yfilter;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags.yfilter = yfilter;
    }
    if(value_path == "interface-unnum")
    {
        interface_unnum.yfilter = yfilter;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj.yfilter = yfilter;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu.yfilter = yfilter;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network.yfilter = yfilter;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size.yfilter = yfilter;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time.yfilter = yfilter;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses.yfilter = yfilter;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses.yfilter = yfilter;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection.yfilter = yfilter;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay.yfilter = yfilter;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled.yfilter = yfilter;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count.yfilter = yfilter;
    }
    if(value_path == "wait-interval")
    {
        wait_interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-interface" || name == "interface-bfd-information" || name == "interface-madj" || name == "interface-neighbor" || name == "ip-sec-addr" || name == "ipfrr-tiebreakers" || name == "srlg" || name == "interface-name" || name == "backup-designated-router" || name == "backup-designated-router-address" || name == "backup-designated-router-id" || name == "cfg-cost-fallback" || name == "configured-demand-circuit" || name == "configured-ldp-sync" || name == "configured-ldp-sync-igp-shortcuts" || name == "cost-fallback-active" || name == "dead-interval" || name == "designated-router" || name == "designated-router-address" || name == "designated-router-id" || name == "fast-detect-hold-down-time" || name == "fast-detect-hold-down-time-remaining" || name == "fast-reroute-topology-independent-lfa" || name == "fast-reroute-type" || name == "hello-interval" || name == "hello-interval-ms" || name == "interface-ack-list-count" || name == "interface-ack-list-high-watermark" || name == "interface-address" || name == "interface-area" || name == "interface-bandwidth" || name == "interface-bkp-labels" || name == "interface-cost-fallback" || name == "interface-dc-bitless-lsa-count" || name == "interface-demand-circuit" || name == "interface-fast-detect-hold-down" || name == "interface-forw" || name == "interface-last-nsf" || name == "interface-ldp-sync" || name == "interface-line-state" || name == "interface-link-cost" || name == "interface-lsa-filter" || name == "interface-madj-count" || name == "interface-mask" || name == "interface-name-xr" || name == "interface-nsf" || name == "interface-nsf-enabled" || name == "interface-pri-labels" || name == "interface-priority" || name == "interface-retransmission-interrval" || name == "interface-router-id" || name == "interface-sid" || name == "interface-sid-n-flag-clear" || name == "interface-sid-php-off" || name == "interface-srte-labels" || name == "interface-state" || name == "interface-strict-spf-sid" || name == "interface-strict-spf-sid-n-flag-clear" || name == "interface-strict-spf-sid-php-off" || name == "interface-tunnel-flags" || name == "interface-unnum" || name == "interfaceis-madj" || name == "ip-mtu" || name == "is-loopback-stub-network" || name == "maximum-packet-size" || name == "network-lsa-flush-timer" || name == "network-type" || name == "next-hello-time" || name == "next-hello-time-ms" || name == "ospf-interface-state" || name == "passive-interface" || name == "prefix-suppress-primary-addresses" || name == "prefix-suppress-secondary-addresses" || name == "registered-for-link-down-fast-detection" || name == "transmission-delay" || name == "ttl-security-enabled" || name == "ttl-security-hop-count" || name == "wait-interval")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::ActiveInterface()
    :
    flood_scan_length{YType::uint32, "flood-scan-length"},
    interface_area_flood_index{YType::uint32, "interface-area-flood-index"},
    interface_area_next_flood{YType::uint32, "interface-area-next-flood"},
    interface_area_next_flood_index{YType::uint32, "interface-area-next-flood-index"},
    interface_as_flood_index{YType::uint32, "interface-as-flood-index"},
    interface_as_next_flood{YType::uint32, "interface-as-next-flood"},
    interface_as_next_flood_index{YType::uint32, "interface-as-next-flood-index"},
    interface_authentication_type{YType::enumeration, "interface-authentication-type"},
    interface_flood_length{YType::uint32, "interface-flood-length"},
    interface_flood_pacing_timer{YType::uint32, "interface-flood-pacing-timer"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    keychain_id{YType::uint64, "keychain-id"},
    last_flood_time{YType::uint32, "last-flood-time"},
    maximum_flood_length{YType::uint32, "maximum-flood-length"},
    maximum_flood_time{YType::uint32, "maximum-flood-time"},
    old_md5_key_neighbor_count{YType::uint32, "old-md5-key-neighbor-count"},
    suppress_hello_count{YType::uint16, "suppress-hello-count"},
    wait_time{YType::uint32, "wait-time"},
    youngest_md_key{YType::boolean, "youngest-md-key"},
    youngest_md_key_id{YType::uint16, "youngest-md-key-id"}
{

    yang_name = "active-interface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::~ActiveInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_data() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_data())
            return true;
    }
    return flood_scan_length.is_set
	|| interface_area_flood_index.is_set
	|| interface_area_next_flood.is_set
	|| interface_area_next_flood_index.is_set
	|| interface_as_flood_index.is_set
	|| interface_as_next_flood.is_set
	|| interface_as_next_flood_index.is_set
	|| interface_authentication_type.is_set
	|| interface_flood_length.is_set
	|| interface_flood_pacing_timer.is_set
	|| interface_neighbor_count.is_set
	|| keychain_id.is_set
	|| last_flood_time.is_set
	|| maximum_flood_length.is_set
	|| maximum_flood_time.is_set
	|| old_md5_key_neighbor_count.is_set
	|| suppress_hello_count.is_set
	|| wait_time.is_set
	|| youngest_md_key.is_set
	|| youngest_md_key_id.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_operation() const
{
    for (std::size_t index=0; index<md_keys.size(); index++)
    {
        if(md_keys[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flood_scan_length.yfilter)
	|| ydk::is_set(interface_area_flood_index.yfilter)
	|| ydk::is_set(interface_area_next_flood.yfilter)
	|| ydk::is_set(interface_area_next_flood_index.yfilter)
	|| ydk::is_set(interface_as_flood_index.yfilter)
	|| ydk::is_set(interface_as_next_flood.yfilter)
	|| ydk::is_set(interface_as_next_flood_index.yfilter)
	|| ydk::is_set(interface_authentication_type.yfilter)
	|| ydk::is_set(interface_flood_length.yfilter)
	|| ydk::is_set(interface_flood_pacing_timer.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(keychain_id.yfilter)
	|| ydk::is_set(last_flood_time.yfilter)
	|| ydk::is_set(maximum_flood_length.yfilter)
	|| ydk::is_set(maximum_flood_time.yfilter)
	|| ydk::is_set(old_md5_key_neighbor_count.yfilter)
	|| ydk::is_set(suppress_hello_count.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(youngest_md_key.yfilter)
	|| ydk::is_set(youngest_md_key_id.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood_scan_length.is_set || is_set(flood_scan_length.yfilter)) leaf_name_data.push_back(flood_scan_length.get_name_leafdata());
    if (interface_area_flood_index.is_set || is_set(interface_area_flood_index.yfilter)) leaf_name_data.push_back(interface_area_flood_index.get_name_leafdata());
    if (interface_area_next_flood.is_set || is_set(interface_area_next_flood.yfilter)) leaf_name_data.push_back(interface_area_next_flood.get_name_leafdata());
    if (interface_area_next_flood_index.is_set || is_set(interface_area_next_flood_index.yfilter)) leaf_name_data.push_back(interface_area_next_flood_index.get_name_leafdata());
    if (interface_as_flood_index.is_set || is_set(interface_as_flood_index.yfilter)) leaf_name_data.push_back(interface_as_flood_index.get_name_leafdata());
    if (interface_as_next_flood.is_set || is_set(interface_as_next_flood.yfilter)) leaf_name_data.push_back(interface_as_next_flood.get_name_leafdata());
    if (interface_as_next_flood_index.is_set || is_set(interface_as_next_flood_index.yfilter)) leaf_name_data.push_back(interface_as_next_flood_index.get_name_leafdata());
    if (interface_authentication_type.is_set || is_set(interface_authentication_type.yfilter)) leaf_name_data.push_back(interface_authentication_type.get_name_leafdata());
    if (interface_flood_length.is_set || is_set(interface_flood_length.yfilter)) leaf_name_data.push_back(interface_flood_length.get_name_leafdata());
    if (interface_flood_pacing_timer.is_set || is_set(interface_flood_pacing_timer.yfilter)) leaf_name_data.push_back(interface_flood_pacing_timer.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (keychain_id.is_set || is_set(keychain_id.yfilter)) leaf_name_data.push_back(keychain_id.get_name_leafdata());
    if (last_flood_time.is_set || is_set(last_flood_time.yfilter)) leaf_name_data.push_back(last_flood_time.get_name_leafdata());
    if (maximum_flood_length.is_set || is_set(maximum_flood_length.yfilter)) leaf_name_data.push_back(maximum_flood_length.get_name_leafdata());
    if (maximum_flood_time.is_set || is_set(maximum_flood_time.yfilter)) leaf_name_data.push_back(maximum_flood_time.get_name_leafdata());
    if (old_md5_key_neighbor_count.is_set || is_set(old_md5_key_neighbor_count.yfilter)) leaf_name_data.push_back(old_md5_key_neighbor_count.get_name_leafdata());
    if (suppress_hello_count.is_set || is_set(suppress_hello_count.yfilter)) leaf_name_data.push_back(suppress_hello_count.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (youngest_md_key.is_set || is_set(youngest_md_key.yfilter)) leaf_name_data.push_back(youngest_md_key.get_name_leafdata());
    if (youngest_md_key_id.is_set || is_set(youngest_md_key_id.yfilter)) leaf_name_data.push_back(youngest_md_key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md-keys")
    {
        for(auto const & c : md_keys)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys>();
        c->parent = this;
        md_keys.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : md_keys)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flood-scan-length")
    {
        flood_scan_length = value;
        flood_scan_length.value_namespace = name_space;
        flood_scan_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index = value;
        interface_area_flood_index.value_namespace = name_space;
        interface_area_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood = value;
        interface_area_next_flood.value_namespace = name_space;
        interface_area_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index = value;
        interface_area_next_flood_index.value_namespace = name_space;
        interface_area_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index = value;
        interface_as_flood_index.value_namespace = name_space;
        interface_as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood = value;
        interface_as_next_flood.value_namespace = name_space;
        interface_as_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index = value;
        interface_as_next_flood_index.value_namespace = name_space;
        interface_as_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type = value;
        interface_authentication_type.value_namespace = name_space;
        interface_authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length = value;
        interface_flood_length.value_namespace = name_space;
        interface_flood_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer = value;
        interface_flood_pacing_timer.value_namespace = name_space;
        interface_flood_pacing_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-id")
    {
        keychain_id = value;
        keychain_id.value_namespace = name_space;
        keychain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time = value;
        last_flood_time.value_namespace = name_space;
        last_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length = value;
        maximum_flood_length.value_namespace = name_space;
        maximum_flood_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time = value;
        maximum_flood_time.value_namespace = name_space;
        maximum_flood_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count = value;
        old_md5_key_neighbor_count.value_namespace = name_space;
        old_md5_key_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count = value;
        suppress_hello_count.value_namespace = name_space;
        suppress_hello_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key = value;
        youngest_md_key.value_namespace = name_space;
        youngest_md_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id = value;
        youngest_md_key_id.value_namespace = name_space;
        youngest_md_key_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flood-scan-length")
    {
        flood_scan_length.yfilter = yfilter;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood.yfilter = yfilter;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type.yfilter = yfilter;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length.yfilter = yfilter;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "keychain-id")
    {
        keychain_id.yfilter = yfilter;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length.yfilter = yfilter;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time.yfilter = yfilter;
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key.yfilter = yfilter;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md-keys" || name == "flood-scan-length" || name == "interface-area-flood-index" || name == "interface-area-next-flood" || name == "interface-area-next-flood-index" || name == "interface-as-flood-index" || name == "interface-as-next-flood" || name == "interface-as-next-flood-index" || name == "interface-authentication-type" || name == "interface-flood-length" || name == "interface-flood-pacing-timer" || name == "interface-neighbor-count" || name == "keychain-id" || name == "last-flood-time" || name == "maximum-flood-length" || name == "maximum-flood-time" || name == "old-md5-key-neighbor-count" || name == "suppress-hello-count" || name == "wait-time" || name == "youngest-md-key" || name == "youngest-md-key-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::MdKeys()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "md-keys"; yang_parent_name = "active-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::~MdKeys()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::InterfaceBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "interface-bfd-information"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::~InterfaceBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| detection_multiplier.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{

    yang_name = "interface-madj"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_adj_neighbor_count.yfilter)
	|| ydk::is_set(interface_area.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(interface_neighbor_count.yfilter)
	|| ydk::is_set(madj_area_id.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.yfilter)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.yfilter)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.yfilter)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.yfilter)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
        interface_adj_neighbor_count.value_namespace = name_space;
        interface_adj_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
        interface_area.value_namespace = name_space;
        interface_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
        interface_neighbor_count.value_namespace = name_space;
        interface_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
        madj_area_id.value_namespace = name_space;
        madj_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "interface-area")
    {
        interface_area.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-adj-neighbor-count" || name == "interface-area" || name == "interface-link-cost" || name == "interface-neighbor-count" || name == "madj-area-id" || name == "ospf-interface-state")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::InterfaceNeighbor()
    :
    interface_neighbor_cost{YType::uint32, "interface-neighbor-cost"},
    interface_neighbor_id{YType::str, "interface-neighbor-id"},
    neighbor_bdr{YType::boolean, "neighbor-bdr"},
    neighbor_dr{YType::boolean, "neighbor-dr"},
    suppress_hello{YType::boolean, "suppress-hello"}
{

    yang_name = "interface-neighbor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_data() const
{
    return interface_neighbor_cost.is_set
	|| interface_neighbor_id.is_set
	|| neighbor_bdr.is_set
	|| neighbor_dr.is_set
	|| suppress_hello.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_neighbor_cost.yfilter)
	|| ydk::is_set(interface_neighbor_id.yfilter)
	|| ydk::is_set(neighbor_bdr.yfilter)
	|| ydk::is_set(neighbor_dr.yfilter)
	|| ydk::is_set(suppress_hello.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_cost.is_set || is_set(interface_neighbor_cost.yfilter)) leaf_name_data.push_back(interface_neighbor_cost.get_name_leafdata());
    if (interface_neighbor_id.is_set || is_set(interface_neighbor_id.yfilter)) leaf_name_data.push_back(interface_neighbor_id.get_name_leafdata());
    if (neighbor_bdr.is_set || is_set(neighbor_bdr.yfilter)) leaf_name_data.push_back(neighbor_bdr.get_name_leafdata());
    if (neighbor_dr.is_set || is_set(neighbor_dr.yfilter)) leaf_name_data.push_back(neighbor_dr.get_name_leafdata());
    if (suppress_hello.is_set || is_set(suppress_hello.yfilter)) leaf_name_data.push_back(suppress_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost = value;
        interface_neighbor_cost.value_namespace = name_space;
        interface_neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id = value;
        interface_neighbor_id.value_namespace = name_space;
        interface_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr = value;
        neighbor_bdr.value_namespace = name_space;
        neighbor_bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr = value;
        neighbor_dr.value_namespace = name_space;
        neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello = value;
        suppress_hello.value_namespace = name_space;
        suppress_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-cost" || name == "interface-neighbor-id" || name == "neighbor-bdr" || name == "neighbor-dr" || name == "suppress-hello")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::IpSecAddr()
    :
    secondary_addr{YType::str, "secondary-addr"},
    secondary_prefix{YType::uint32, "secondary-prefix"}
{

    yang_name = "ip-sec-addr"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::~IpSecAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_data() const
{
    return secondary_addr.is_set
	|| secondary_prefix.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_addr.yfilter)
	|| ydk::is_set(secondary_prefix.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sec-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_addr.is_set || is_set(secondary_addr.yfilter)) leaf_name_data.push_back(secondary_addr.get_name_leafdata());
    if (secondary_prefix.is_set || is_set(secondary_prefix.yfilter)) leaf_name_data.push_back(secondary_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr = value;
        secondary_addr.value_namespace = name_space;
        secondary_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix = value;
        secondary_prefix.value_namespace = name_space;
        secondary_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr.yfilter = yfilter;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-addr" || name == "secondary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::IpfrrTiebreakers()
    :
    tiebreaker_index{YType::uint32, "tiebreaker-index"},
    tiebreaker_type{YType::enumeration, "tiebreaker-type"}
{

    yang_name = "ipfrr-tiebreakers"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::~IpfrrTiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_data() const
{
    return tiebreaker_index.is_set
	|| tiebreaker_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());
    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
        tiebreaker_index.value_namespace = name_space;
        tiebreaker_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
        tiebreaker_type.value_namespace = name_space;
        tiebreaker_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-index" || name == "tiebreaker-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::Srlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srlg"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::~Srlg()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetails()
{

    yang_name = "neighbor-details"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        for(auto const & c : neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborDetail()
    :
    adjacency_sid_label{YType::uint32, "adjacency-sid-label"},
    adjacency_sid_protected{YType::boolean, "adjacency-sid-protected"},
    adjacency_sid_unprotected_label{YType::uint32, "adjacency-sid-unprotected-label"},
    interface_name{YType::str, "interface-name"},
    interface_type{YType::enumeration, "interface-type"},
    last_oob_time{YType::uint32, "last-oob-time"},
    lfa_interface{YType::str, "lfa-interface"},
    lfa_neighbor_id{YType::str, "lfa-neighbor-id"},
    lfa_neighbor_revision{YType::uint32, "lfa-neighbor-revision"},
    lfa_next_hop{YType::str, "lfa-next-hop"},
    neighbor_ack_list_count{YType::uint32, "neighbor-ack-list-count"},
    neighbor_ack_list_high_watermark{YType::uint32, "neighbor-ack-list-high-watermark"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_area_id{YType::str, "neighbor-area-id"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_filter{YType::boolean, "neighbor-filter"},
    neighbor_interface_id{YType::uint16, "neighbor-interface-id"},
    neighbor_lls_option{YType::uint32, "neighbor-lls-option"},
    neighbor_option{YType::uint8, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_change_count{YType::uint16, "state-change-count"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
	,neighbor_summary(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary>())
{
    neighbor_bfd_information->parent = this;
    neighbor_retransmission_information->parent = this;
    neighbor_summary->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::has_data() const
{
    return adjacency_sid_label.is_set
	|| adjacency_sid_protected.is_set
	|| adjacency_sid_unprotected_label.is_set
	|| interface_name.is_set
	|| interface_type.is_set
	|| last_oob_time.is_set
	|| lfa_interface.is_set
	|| lfa_neighbor_id.is_set
	|| lfa_neighbor_revision.is_set
	|| lfa_next_hop.is_set
	|| neighbor_ack_list_count.is_set
	|| neighbor_ack_list_high_watermark.is_set
	|| neighbor_address.is_set
	|| neighbor_area_id.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| neighbor_cost.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_filter.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_lls_option.is_set
	|| neighbor_option.is_set
	|| next_poll_interval.is_set
	|| nsf_router_state.is_set
	|| oob_resynchronization.is_set
	|| pending_events.is_set
	|| poll_interval.is_set
	|| state_change_count.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_data())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid_label.yfilter)
	|| ydk::is_set(adjacency_sid_protected.yfilter)
	|| ydk::is_set(adjacency_sid_unprotected_label.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(last_oob_time.yfilter)
	|| ydk::is_set(lfa_interface.yfilter)
	|| ydk::is_set(lfa_neighbor_id.yfilter)
	|| ydk::is_set(lfa_neighbor_revision.yfilter)
	|| ydk::is_set(lfa_next_hop.yfilter)
	|| ydk::is_set(neighbor_ack_list_count.yfilter)
	|| ydk::is_set(neighbor_ack_list_high_watermark.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_area_id.yfilter)
	|| ydk::is_set(neighbor_backup_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_cost.yfilter)
	|| ydk::is_set(neighbor_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_lls_option.yfilter)
	|| ydk::is_set(neighbor_option.yfilter)
	|| ydk::is_set(next_poll_interval.yfilter)
	|| ydk::is_set(nsf_router_state.yfilter)
	|| ydk::is_set(oob_resynchronization.yfilter)
	|| ydk::is_set(pending_events.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.yfilter)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.yfilter)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.yfilter)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.yfilter)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.yfilter)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.yfilter)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.yfilter)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.yfilter)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.yfilter)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.yfilter)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.yfilter)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.yfilter)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.yfilter)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.yfilter)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.yfilter)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.yfilter)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.yfilter)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information == nullptr)
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
        }
        return neighbor_retransmission_information;
    }

    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary>();
        }
        return neighbor_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    if(neighbor_retransmission_information != nullptr)
    {
        children["neighbor-retransmission-information"] = neighbor_retransmission_information;
    }

    if(neighbor_summary != nullptr)
    {
        children["neighbor-summary"] = neighbor_summary;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
        adjacency_sid_label.value_namespace = name_space;
        adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
        adjacency_sid_protected.value_namespace = name_space;
        adjacency_sid_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
        adjacency_sid_unprotected_label.value_namespace = name_space;
        adjacency_sid_unprotected_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
        last_oob_time.value_namespace = name_space;
        last_oob_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
        lfa_interface.value_namespace = name_space;
        lfa_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
        lfa_neighbor_id.value_namespace = name_space;
        lfa_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
        lfa_neighbor_revision.value_namespace = name_space;
        lfa_neighbor_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
        lfa_next_hop.value_namespace = name_space;
        lfa_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
        neighbor_ack_list_count.value_namespace = name_space;
        neighbor_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
        neighbor_ack_list_high_watermark.value_namespace = name_space;
        neighbor_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
        neighbor_area_id.value_namespace = name_space;
        neighbor_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
        neighbor_backup_designated_router_address.value_namespace = name_space;
        neighbor_backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
        neighbor_cost.value_namespace = name_space;
        neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
        neighbor_designated_router_address.value_namespace = name_space;
        neighbor_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
        neighbor_lls_option.value_namespace = name_space;
        neighbor_lls_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
        neighbor_option.value_namespace = name_space;
        neighbor_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
        next_poll_interval.value_namespace = name_space;
        next_poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
        nsf_router_state.value_namespace = name_space;
        nsf_router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
        oob_resynchronization.value_namespace = name_space;
        oob_resynchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
        pending_events.value_namespace = name_space;
        pending_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time.yfilter = yfilter;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision.yfilter = yfilter;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option.yfilter = yfilter;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option.yfilter = yfilter;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval.yfilter = yfilter;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state.yfilter = yfilter;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization.yfilter = yfilter;
    }
    if(value_path == "pending-events")
    {
        pending_events.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "neighbor-retransmission-information" || name == "neighbor-summary" || name == "adjacency-sid-label" || name == "adjacency-sid-protected" || name == "adjacency-sid-unprotected-label" || name == "interface-name" || name == "interface-type" || name == "last-oob-time" || name == "lfa-interface" || name == "lfa-neighbor-id" || name == "lfa-neighbor-revision" || name == "lfa-next-hop" || name == "neighbor-ack-list-count" || name == "neighbor-ack-list-high-watermark" || name == "neighbor-address" || name == "neighbor-area-id" || name == "neighbor-backup-designated-router-address" || name == "neighbor-cost" || name == "neighbor-designated-router-address" || name == "neighbor-filter" || name == "neighbor-interface-id" || name == "neighbor-lls-option" || name == "neighbor-option" || name == "next-poll-interval" || name == "nsf-router-state" || name == "oob-resynchronization" || name == "pending-events" || name == "poll-interval" || name == "state-change-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::NeighborRetransmissionInformation()
    :
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"}
{

    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
{
    return area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| area_flooding_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_first_flood_information.yfilter)
	|| ydk::is_set(area_first_flood_information_index.yfilter)
	|| ydk::is_set(area_flooding_index.yfilter)
	|| ydk::is_set(area_next_flood_information.yfilter)
	|| ydk::is_set(area_next_flood_information_index.yfilter)
	|| ydk::is_set(as_first_flood_information.yfilter)
	|| ydk::is_set(as_first_flood_information_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(as_next_flood_information.yfilter)
	|| ydk::is_set(as_next_flood_information_index.yfilter)
	|| ydk::is_set(dbd_retransmission_count.yfilter)
	|| ydk::is_set(dbd_retransmission_total_count.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(neighbor_retransmission_count.yfilter)
	|| ydk::is_set(number_of_retransmissions.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood_information.is_set || is_set(area_first_flood_information.yfilter)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.yfilter)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.yfilter)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.yfilter)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.yfilter)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.yfilter)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.yfilter)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.yfilter)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.yfilter)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.yfilter)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.yfilter)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
        area_first_flood_information.value_namespace = name_space;
        area_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
        area_first_flood_information_index.value_namespace = name_space;
        area_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
        area_flooding_index.value_namespace = name_space;
        area_flooding_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
        area_next_flood_information.value_namespace = name_space;
        area_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
        area_next_flood_information_index.value_namespace = name_space;
        area_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
        as_first_flood_information.value_namespace = name_space;
        as_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
        as_first_flood_information_index.value_namespace = name_space;
        as_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
        as_next_flood_information.value_namespace = name_space;
        as_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
        as_next_flood_information_index.value_namespace = name_space;
        as_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
        dbd_retransmission_count.value_namespace = name_space;
        dbd_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
        dbd_retransmission_total_count.value_namespace = name_space;
        dbd_retransmission_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
        neighbor_retransmission_count.value_namespace = name_space;
        neighbor_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
        number_of_retransmissions.value_namespace = name_space;
        number_of_retransmissions.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-first-flood-information" || name == "area-first-flood-information-index" || name == "area-flooding-index" || name == "area-next-flood-information" || name == "area-next-flood-information-index" || name == "as-first-flood-information" || name == "as-first-flood-information-index" || name == "as-flood-index" || name == "as-next-flood-information" || name == "as-next-flood-information-index" || name == "dbd-retransmission-count" || name == "dbd-retransmission-total-count" || name == "last-retransmission-length" || name == "last-retransmission-time" || name == "lsa-retransmission-timer" || name == "maximum-retransmission-length" || name == "maximum-retransmission-time" || name == "neighbor-retransmission-count" || name == "number-of-retransmissions")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
{
    return dr_bdr_state.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "dr-bdr-state" || name == "neighbor-address-xr" || name == "neighbor-dead-timer" || name == "neighbor-dr-priority" || name == "neighbor-id" || name == "neighbor-interface-name" || name == "neighbor-madj-interface" || name == "neighbor-state" || name == "neighbor-up-time")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::Neighbor()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::has_data() const
{
    return dr_bdr_state.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "dr-bdr-state" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-address-xr" || name == "neighbor-dead-timer" || name == "neighbor-dr-priority" || name == "neighbor-id" || name == "neighbor-interface-name" || name == "neighbor-madj-interface" || name == "neighbor-state" || name == "neighbor-up-time")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Requests()
{

    yang_name = "requests"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::~Requests()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"}
{

    yang_name = "request"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| request_interface_name.is_set
	|| request_neighbor_address.is_set
	|| request_neighbor_id.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(request_interface_name.yfilter)
	|| ydk::is_set(request_neighbor_address.yfilter)
	|| ydk::is_set(request_neighbor_id.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.yfilter)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.yfilter)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.yfilter)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
        request_interface_name.value_namespace = name_space;
        request_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
        request_neighbor_address.value_namespace = name_space;
        request_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
        request_neighbor_id.value_namespace = name_space;
        request_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "interface-name" || name == "neighbor-address" || name == "request-interface-name" || name == "request-neighbor-address" || name == "request-neighbor-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::Request_()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{

    yang_name = "request"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-advertising-router" || name == "header-ls-id" || name == "header-lsa-age" || name == "header-lsa-checksum" || name == "header-lsa-type" || name == "header-sequence-number")
        return true;
    return false;
}


}
}

