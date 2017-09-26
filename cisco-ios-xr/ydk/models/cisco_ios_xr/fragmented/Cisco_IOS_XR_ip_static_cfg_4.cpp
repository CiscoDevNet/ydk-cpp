
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_static_cfg {

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[explicit-path-name='" <<explicit_path_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::has_data() const
{
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table == nullptr)
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable>();
        }
        return vrf_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf_next_hop_table != nullptr)
    {
        children["vrf-next-hop-table"] = vrf_next_hop_table;
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-table")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopTable()
{

    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-explicit-path-name" || name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[explicit-path-name='" <<explicit_path_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_data() const
{
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_operation() const
{
    return is_set(yfilter)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-route-next-hop-table")
    {
        if(segment_route_next_hop_table == nullptr)
        {
            segment_route_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable>();
        }
        return segment_route_next_hop_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(segment_route_next_hop_table != nullptr)
    {
        children["segment-route-next-hop-table"] = segment_route_next_hop_table;
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-route-next-hop-table")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
{

    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-next-hop-explicit-path-name" || name == "vrf-next-hop-interface-name" || name == "vrf-next-hop-interface-name-next-hop-address" || name == "vrf-next-hop-next-hop-address" || name == "vrf-next-hop-next-hop-address-explicit-path-name")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-address" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    next_hop_address{YType::str, "next-hop-address"},
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{

    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table"; is_top_level_class = false; has_list_ancestor = true;
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return next_hop_address.is_set
	|| explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(bfd_fast_detect.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(detect_multiplier.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(load_metric.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(permanent.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(vrf_lable.yfilter);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[explicit-path-name='" <<explicit_path_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.yfilter)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.yfilter)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.yfilter)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.yfilter)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
        bfd_fast_detect.value_namespace = name_space;
        bfd_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
        detect_multiplier.value_namespace = name_space;
        detect_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
        load_metric.value_namespace = name_space;
        load_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
        vrf_lable.value_namespace = name_space;
        vrf_lable.value_namespace_prefix = name_space_prefix;
    }
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "load-metric")
    {
        load_metric.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable.yfilter = yfilter;
    }
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "explicit-path-name" || name == "bfd-fast-detect" || name == "description" || name == "detect-multiplier" || name == "index" || name == "load-metric" || name == "metric" || name == "minimum-interval" || name == "object-name" || name == "permanent" || name == "tag" || name == "tunnel-id" || name == "vrf-lable")
        return true;
    return false;
}


}
}

